#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include <vector>
#include "Node.h"

using namespace std;

class Scene : public Node
{
public:
    Scene();
    ~Scene();

    void traverseNode();
};

#endif // SCENE_H
