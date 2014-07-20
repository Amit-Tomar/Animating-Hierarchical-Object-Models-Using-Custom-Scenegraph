#include "BeltLining.h"

BeltLining::BeltLining()
{
}

void BeltLining::traverseNode()
{
    renderBeltLine();
}

void BeltLining::renderBeltLine()
{
    glScalef(.45,.05,.05);
    glutSolidCube(1);
}
