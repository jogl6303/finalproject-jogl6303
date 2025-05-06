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

mat* Graph::addGraph(int size) {
  mat* g(new Graph);
  g->size = size;
  g->adjMat[stads][stads] = {0};
  g->nodeDatas[] = {''};

  return g;
}


void Graph::addNode(mat* g, int vertex, char data) {
  if (vertex >= 0 && vertex < g->size) {
    g->nodeDatas[vertex] = data;
  }
}

void Graph::addEdge(Graph g, int a, int b, int distance); {
  if (a >= 0 && a < g->size && b >= 0 && v < g->size) {
    g->adjMat[a][b] = distance;
    g->adjMat[b][a] = distance;
  }
}

int Graph::minDist(int distances[], bool visiteds[], int size) {
  int min = INT_MAX;
  int minIndex = -1;

  for (int i = 0; i < size; i++) {
    if (!visiteds[i] && distances[i] <= min) {
      min = distances[i];
      min_index = i;
    }
  }
  return min_index;
}

void Graph::dijkstra(int graph[][], char start) {

  int start_vertex = -1;

  for (int i = 0; i < g->size; i++) {
    if (g->nodeDatas[i] == start) {
      start_vertex = i;
      break;
    }
  }

  int distances[g->size];
  bool visiteds[g->size];
  for (int i = 0; i < g->size; i++) {
    distances[i] = INT_MAX;
    visiteds[i] = false;
  }

  distances[start_vertex] = 0;

  for (int i = 0; i < g->size - 1; i++) {
    int a = minDist(distances, visiteds, g->size)
    visiteds[a] = true;

    for (int b = 0; b < g->size; b++) {
      if (!visiteds[b] && g->adjMat[a][b] && distances[a] != INT_MAX && distances[a] + g->adjMat[a][b] < distances[b]) {
        distances[b] = distances[a] + g->adjMat[a][b];
      }
    }
  }

  cout << "Starting Team: " << start << endl << endl;

  for (int i = 0; i < g->size; i++) {
    cout << "Distance from %c to %c: %d" << start, g->nodeDatas[i], distances[i];
  }
}

/*vector<Node*> Graph::getNodes() {
  return nodes;
}

vector<Edge*> Graph::getEdges() {
  return edges;
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

ostream& operator<<(ostream& out, Graph graph) {
  out << graph.nodes.size() << " Nodes:" << endl;
  out << "[";
  for (vector<Node*>::iterator it = graph.nodes.begin();
       it != graph.nodes.end(); it++) {
    Node* n = *it;
    out << *n << ", ";
  }
  out << "]" << endl;
  out << graph.edges.size() << " Edges:" << endl;
  out << "[";
  for (vector<Edge*>::iterator it = graph.edges.begin();
       it != graph.edges.end(); it++) {
    Edge* e = *it;
    out << *e << ", ";
  }
  out << "]";
  return out;
}

  distances[start] = 0;

  for (int j = 0; j < stads - 1; j++) {
    int k = minDist(distances, visiteds);
    visiteds[k] = true;
    for (int l = 0; l < stads; l++) {
      if (!visiteds[l] && graph[k][l] && distances[k] != INT_MAX && distances[k] + graph[k][l] < distances[l]) {
        distances[l] = distances[k] + graph[k][l];
      }
    }
  }

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
}*/


/*
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

ostream& operator<<(std::ostream& out, Node node) {
  out << node.data;
  return out;
}*/

/*
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

ostream& operator<<(std::ostream& out, Edge edge) {
  out << *edge.a << " -- " << *edge.b;
  return out;
}*/






