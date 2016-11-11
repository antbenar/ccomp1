#include "Graph.h"
#include <map>
#include <vector>
using namespace std;

Graph::Graph(const vector &starts, const vector &ends){
    for(int i =0;i<starts.size();i++)
        map[starts[i]].push_back(ends[i]);
}

int Graph::numOutgoing(const int nodeID) const{
     return adjacent(nodeID).size();
}

const vector<int> &Graph::adjacent(const int nodeID) {
    map<int, vector <int> >::iterator it;
    it = mapa.find(nodeID);
    return it->second;

}

void Graph::imprimir(){
    for (map<char,int>::iterator it=mapa.begin(); it!=mapa.end(); ++it)
    cout << it->first << " => " << it->second << '\n';
}


