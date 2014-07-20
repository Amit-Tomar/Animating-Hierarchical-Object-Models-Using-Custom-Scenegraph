#ifndef ROBOTARM_H
#define ROBOTARM_H

#include <QGLWidget>
#include <iostream>
#include "Node.h"
#include "GL/freeglut.h"

using namespace std;

class RobotArm : public Node
{
public:
    RobotArm(float,float);
    ~ RobotArm();

    void traverseNode();

private:

    void renderRobotArm();
    float radius;
    float length;
};

#endif // GRAPHICSOBJECT_H
