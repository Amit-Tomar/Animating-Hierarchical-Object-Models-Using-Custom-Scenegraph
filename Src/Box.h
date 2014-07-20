#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "Node.h"

using namespace std;

class Box: public Node
{
public:
    Box();
    ~Box();

    void traverseNode();

private:

    void renderBox();
};

#endif // BOX_H
