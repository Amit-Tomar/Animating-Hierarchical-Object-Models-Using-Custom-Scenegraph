#ifndef JOINT_H
#define JOINT_H

#include "Node.h"
#include "GL/freeglut.h"

class Joint : public Node
{
public:
    Joint();
    void traverseNode();

private:

    void renderJoint();
};

#endif // JOINT_H
