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

// Number of nodes (stadiums to visit)
#define stads 5

/*
class Node {
private:
  string data;
  bool visited;        

public:
  Node(string s);
  ~Node();
  string getData();
  bool getVisited();
  friend std::ostream& operator<<(std::ostream& out, Node node);
};*/

/*
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
  friend std::ostream& operator<<(std::ostream& out, Edge edge);
};*/



struct mat {
  int adjMat[][];
  vector<string*> nodeDatas[];
  int size;
}

// graph class contains stadiums (nodes) and connection between stadiums (edges)
class Graph {
public:
  Graph();
  ~Graph();
  Graph* addGraph(int size);
  void addNode(Graph* g, int vertex, string data);
  void addEdge(Graph* g, int a, int b, int distance);
  int minDist(int distances[], bool visiteds[], int size);

  // main Dijkstra's algorithm
  void dijkstra(int graph[][], string start);
  
  /*
  vector<Node*> getNodes();
  vector<Edge*> getEdges();
  void removeNode(Node* n);
  void removeEdge(Edge* n);
  friend std::ostream& operator<<(std::ostream& out, Graph graph);
  */


  
private:

  //vector<Node*> nodes;
  //vector<Edge*> edges;
  //vector<Node*> search_nodes;
  //vector<Edge*> search_edges;
  //string data;

  //int adjMat[][];
  //vector<char> nodeDatas[];
  //int size;



};



#endif // DIJKSTRA_H__
