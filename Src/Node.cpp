#include "Node.h"

Node::Node()
{

}

Node::~Node()
{
    for( unsigned int i = 0 ; i < childrenList.size() ; ++ i ) {}
        // delete childrenList[i];
}

void Node::addChild(Node * childNode)
{
    childrenList.push_back(childNode);
}

void Node::depthFirstTraversal()
{
    traverseNode();

    if( 0 == childrenList.size() )
    {
        return ;
    }
    else
    {
        for( unsigned int i = 0 ; i < childrenList.size() ; ++i )
        {
            (childrenList[i])->depthFirstTraversal();
        }

        glPopMatrix();
    }
}

void Node::disownChildList()
{
    childrenList.clear();
}

void Node::removeChild(unsigned int index)
{
    if( index < childrenList.size() )
        childrenList.erase(childrenList.begin()+index);
}
