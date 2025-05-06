//  Author: <Joel Gleghorn>
//  CU ID: <jogl6303>


#include "dijkstra.h"

#include <memory>
#include <string>
#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <limits>

using namespace std;

// Graph class functions
// constructor - build graph
Graph::Graph() {}

// destructor
Graph::~Graph() {}

vector<Node*> Graph::getNodes() {
  return nodes;
}

vector<Edge*> Graph::getEdges() {
  return edges;
}

void Graph::addNode(Node* n) {
  nodes.push_back(n);
}

void Graph::addEdge(Edge* e) {
  edges.push_back(e);
}

void Graph::removeNode(Node* n) {
  for (vector<Node*>::iterator it = nodes.begin(); it != nodes.end(); it++) {
    if (n == *it) {
      nodes.erase(it);
      break;
    }
  }
}

void Graph::removeEdge(Edge* e) {
  for (vector<Edge*>::iterator it = edges.begin(); it != edges.end(); it++) {
    if (e == *it) {
      edges.erase(it);
      break;
    }
  }
}

// PRIMARY ALGORITHM //
vector<int*> dijkstra(Graph* graph) {
  
  Graph* g = graph;
  vector<int> distances(stads);
  
  for (int i = 0, i < stads, i++) {
    double minDist = numeric_limits<double>::infinity();
    double x = -1;
    for (int j = 0, j < stads, j++) {
      if (g->getNodes[i]->visited == false && distances[i] < minDist) {
        minDist = distances[i];
        x = j;
      }
    }
    
    if (x = -1) {
      break;
    }

    g->getNodes[x]->visited = true;

    for (int k = 0, k < stads, k++) {
      if (g->getEdges[k]->distance != 0 && g->getNodes[k]->visited = false) {
        double alternate = distances[x] + g->getEdges[k]->distance;
        if (alternate < distances[k]) {
          distances[k] = alternate;
        }
      }
    }
  }

  return distances;
}


// Node class functions
// constructor - build nodes
Node::Node(string s) {
  data = s;
  visited = false;
}

// destructor
Node::~Node() {}

string Node::getData() {
  return data;
}

bool Node::getVisited() {
  return visited;
}


// Edge class functions
// constructor - build edges 
Edge::Edge(Node* n1, Node* n2, int d) {
  a = n1;
  b = n2;
  distance = d;
}

// destructor
Edge::~Edge() {}

Node* Edge::getStart() {
  return a;
}

Node* Edge::getEnd() {
  return b;
}

int Edge::getDistance() {
  return distance;
}






