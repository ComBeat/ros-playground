#include "resolv.h/ros.h"
#include "beginner_tutorials/AddTwoInts.h"

bool add(beginner_tutorials::AddTwoInts::Request    &req,
        beginner_tutorials::AddTwoInts::Response    &req){
            res.sum = req.a + req.b;
            ROS_INFO("request: x=%ld")
        }