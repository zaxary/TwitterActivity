#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <set>

#include "include/file_reader.h"
#include "include/DFS.h"
#include "include/pagerank.h"
#include "include/diagram.h"

using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::multimap;
using std::string;

// Max user ID: 456,622
// user1 * 500,000 + user2

int main(int argc, char *argv[]) { 
  FileReader fr;

  if (argc == 4 && strncmp(argv[1], "dfs", 3) == 0) {

    DFS dfs;
    map<unsigned long, unsigned int> newMap = fr.GetMatrixData(argv[2], argv[3]);
    vector<int> dfsValues = dfs.Traverse(4,newMap);
    for (auto itr = dfsValues.begin(); itr != dfsValues.end(); ++itr) {
      cout << *itr << endl;
    }

  } if (strncmp(argv[1], "pagerank", 8)  == 0){

    multimap<int, int> adjacency_matrix = fr.GetPageRankData(argv[2], argv[3]);
    PageRank pr(adjacency_matrix, argv[4]);
    vector<pair<int, double>> ranked_users = pr.GetRankedUsers();

  } if (argc == 5 && strncmp(argv[1], "diagram", 7) == 0) {

    vector<pair<int, double>> pageusers = fr.ReadTopUsers(argv[2], 3);
    map<unsigned long, unsigned int> newMap = fr.ReadMatrixData(argv[3]);
    
    Diagram dr(pageusers, newMap, 20);
    dr.updateDistances(0);
    dr.drawDiagram(argv[4]);

  }

}