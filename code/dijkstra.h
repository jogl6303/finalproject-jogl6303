#ifndef DIJKSTRA_H__
#define DIJKSTRA_H__

#include <memory>
#include <string>
#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <limits>

using namespace std;

// Number of vertices (teams)
#define stads 5


// node structure contains stadiums and whether or not they have been visited
class Node {
private:
  string data;
  bool visited;        

public:
  Node(string s);
  ~Node();
  string getData();
  bool getVisited();
};


// edge structure contains start stadium, end stadium, and and distance between stadiums
class Edge {
private:
  Node* a;  // start node
  Node* b;  // end node
  int distance; // distance between nodes
public:
  Edge(Node* n1, Node* n2, int distance);
  ~Edge();
  Node* getStart();
  Node* getEnd();
  int getDistance();
};


// graph structure contains stadiums (nodes) and connection between stadiums (edges)
class Graph {
public:
  Graph();
  ~Graph();
  vector<Node*> getNodes();
  vector<Edge*> getEdges();
  void addNode(Node* n);
  void addEdge(Edge* e);
  void removeNode(Node* n);
  void removeEdge(Edge* n);

  // main Dijkstra's algorithm
  vector<int*> dijkstra(Graph* graph);
  
private:
  vector<Node*> nodes;
  vector<Edge*> edges;
  vector<Node*> search_nodes;
  vector<Edge*> search_edges;

};



#endif // DIJKSTRA_H__
