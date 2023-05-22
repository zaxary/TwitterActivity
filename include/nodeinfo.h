#pragma once

#include <utility>
#include <list>
using std::pair;
using std::list;

class nodeinfo {
    public: 
        int user;
        double weight;
        list<int> connections;

        pair<double, double> position;
        pair<double, double> velocity;
        // pair<double, double> nextposition;
};