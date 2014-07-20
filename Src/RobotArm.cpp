#include "RobotArm.h"

RobotArm::RobotArm(float rad, float len)
{
    radius = rad ;
    length = len;
}

RobotArm::~RobotArm()
{

}

void RobotArm::traverseNode()
{
    renderRobotArm();
}

void RobotArm::renderRobotArm()
{
    glutSolidCylinder(radius,length,55,5);
}
