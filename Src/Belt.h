#ifndef BELT_H
#define BELT_H

#include <iostream>
#include "Node.h"
#include "GL/freeglut.h"

using namespace std;

class Belt : public Node
{
public:
    Belt();
    ~Belt();

    void traverseNode();

private:

    void renderBelt();

};

#endif // BELT_H
