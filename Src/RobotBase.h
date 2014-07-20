#ifndef GRAPHICSOBJECT_H
#define GRAPHICSOBJECT_H

#include <QGLWidget>
#include <iostream>
#include "Node.h"
#include "GL/freeglut.h"

using namespace std;

class RobotBase : public Node
{
public:
    RobotBase();
    ~ RobotBase();

    void traverseNode();

private:

    void renderRobotBase();
};

#endif // GRAPHICSOBJECT_H
