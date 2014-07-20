#include "Belt.h"

Belt::Belt()
{
}

Belt::~Belt()
{

}

void Belt::traverseNode()
{
    // std::cout << "Traversed Node : Belt" << std::endl ;
    renderBelt();
}

void Belt::renderBelt()
{
    glScalef(.05,.5,5);
    glutSolidCube(1);
    glScalef(1,1,1);
    // std::cout << "Drawing Belt" << std::endl;
}
