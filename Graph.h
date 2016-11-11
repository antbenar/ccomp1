#ifndef GRAPH_H
#define GRAPH_H
#include <map>
#include <vector>
using namespace std;

class Graph
{
    map<int,vector <int> > mapa;
    public:
        Graph(const vector &starts, const vector &ends);
        int numOutgoing(const int nodeID) const;
        const &adjacent(const int nodeID) const;

        virtual ~Graph();
};

#endif // GRAPH_H
