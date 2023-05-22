#include "../include/DFS.h"

vector<int> DFS::Traverse(int v, map<unsigned long, unsigned int> &adj){  
  map<int, bool> visit;
  stack<int> tempStack;
  vector<int> dataPoints;

  tempStack.push(v);
  visit[v] = true;

  while (!tempStack.empty()) {
  	v = tempStack.top();
    tempStack.pop();
    dataPoints.push_back(v);

    for (int i = 0; i < 500000; i++) {
      if (adj.count(v * 500000 + i)) {
        if (visit[i] == false) {
          tempStack.push(i);
          visit[i] = true;
        }
      }
    }        
  }

  return dataPoints;
}
