#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <simple_counter/SimpleCounterAction.h>

class SimpleCounterAction
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<simple_counter::SimpleCounterAction> as_; // NodeHandle instance must be created before this line. Otherwise strange error occurs.
  std::string action_name_;
  // create messages that are used to published feedback/result
  simple_counter::SimpleCounterFeedback feedback_;
  simple_counter::SimpleCounterResult result_;

public:

  SimpleCounterAction(std::string name) :
    as_(nh_, name, boost::bind(&SimpleCounterAction::executeCB, this, _1), false),
    action_name_(name)
  {
    as_.start();
  }

  ~SimpleCounterAction(void)
  {
  }

  void executeCB(const simple_counter::SimpleCounterGoalConstPtr &goal)
  {
    // helper variables
    ros::Rate r(2);
    bool success = true;

    // push_back the seeds for the fibonacci sequence
    feedback_.sequence.clear();

    // publish info to the console for the user
    ROS_INFO("%s: Executing, creating simple sequence from idx %i to %i", action_name_.c_str(), goal->start, goal->end);

    // seq for simple numbers
    auto simple_seq = new int[goal->end];
    simple_seq[0] = 2;
    // start executing the action
    for(int i=1; i<=goal->end; i++)
    {
      // check that preempt has not been requested by the client
      if (as_.isPreemptRequested() || !ros::ok())
      {
        ROS_INFO("%s: Preempted", action_name_.c_str());
        // set the action state to preempted
        as_.setPreempted();
        success = false;
        break;
      }
      
      // find i'th simple number
      auto new_num = simple_seq[i-1];
      do
      {
      	new_num += 1;
      	auto is_simple = true;
      	for(int j = 0; j<i; j++)
      		if(new_num % j == 0)
          	{
              		is_simple = false;
              		break;
          	}
      }while(!is_simple);
      simple_seq[i] = new_num;
      
      if(i > goal->start)
      {
      	feedback_.sequence.push_back(simple_seq[i]);
      	// publish the feedback
      	as_.publishFeedback(feedback_);
      }
      // this sleep is not necessary, the sequence is computed at 1 Hz for demonstration purposes
      r.sleep();
    }

    if(success)
    {
      result_.sequence = feedback_.sequence;
      ROS_INFO("%s: Succeeded", action_name_.c_str());
      // set the action state to succeeded
      as_.setSucceeded(result_);
    }
  }


};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "fibonacci");

  FibonacciAction fibonnaci("fibonacci");
  ros::spin();

  return 0;
}

