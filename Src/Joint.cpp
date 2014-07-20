#include "Joint.h"

Joint::Joint()
{
}

void Joint::traverseNode()
{
    renderJoint();
}

void Joint::renderJoint()
{
    glutSolidSphere(.15,100,100);
}
