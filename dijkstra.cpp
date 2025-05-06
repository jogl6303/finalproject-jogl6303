//  Author: <Joel Gleghorn>
//  CU ID: <jogl6303>


#include "dijkstra.h"

#include <memory>
#include <string>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

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


// Node class functions
// constructor - build nodes
Node::Node(string s) {
  data = s;
}

// destructor
Node::~Node() {}

string Node::getData() {
  return data;
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







