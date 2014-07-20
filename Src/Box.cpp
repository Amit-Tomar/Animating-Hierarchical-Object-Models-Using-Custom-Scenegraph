#include "Box.h"

Box::Box()
{
}

Box::~Box()
{

}

void Box::traverseNode()
{
    renderBox();
}

void Box::renderBox()
{
    glutSolidCube(1);
    glScalef(1,1,1);
}
