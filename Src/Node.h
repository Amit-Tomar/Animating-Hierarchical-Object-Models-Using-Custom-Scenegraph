#ifndef NODE_H
#define NODE_H

#include <vector>
#include "GL/freeglut.h"

using namespace std;

class Node
{
public:
    Node();
    virtual ~ Node();

    virtual void traverseNode()  = 0 ;

    void addChild(Node*) ;
    void depthFirstTraversal();
    void disownChildList();
    void removeChild(unsigned int);

private:

    std::vector<Node*> childrenList;
};

#endif // NODE_H
