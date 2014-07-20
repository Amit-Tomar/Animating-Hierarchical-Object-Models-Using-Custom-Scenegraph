#ifndef BELTLINING_H
#define BELTLINING_H

#include "Node.h"
#include "GL/freeglut.h"


class BeltLining: public Node
{
public:
    BeltLining();
    ~BeltLining(){}

    void traverseNode();

private:

    void renderBeltLine();


};

#endif // BELTLINING_H
