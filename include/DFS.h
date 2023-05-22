#pragma once

#include <map>
#include <stack>
#include <vector>

using std::map;
using std::stack;
using std::vector;

/**
 * DFS traversal class
 */
class DFS {
  
  public:

    vector<int> Traverse(int v, map<unsigned long, unsigned int> &adj);

};

#include "../src/DFS.cpp"
