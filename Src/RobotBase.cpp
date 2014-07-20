#include "RobotBase.h"

RobotBase::RobotBase()
{

}

RobotBase::~RobotBase()
{

}

void RobotBase::traverseNode()
{
    renderRobotBase();
}

void RobotBase::renderRobotBase()
{
    glutSolidCube(.25);
}
