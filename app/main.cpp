#include "../code/dijkstra.h"
#include <memory>
#include <string>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;


Graph* buildGraph() {
  Graph* Teams(new Graph());

  Node* ang(new Node("Angels"));
  Node* ast(new Node("Astros"));
  Node* ath(new Node("Athletics"));
  Node* mar(new Node("Mariners"));
  Node* ran(new Node("Rangers"));

  Teams->addNode(ang);
  Teams->addNode(ast);
  Teams->addNode(ath);
  Teams->addNode(mar);
  Teams->addNode(ran);

  Edge* anho(new Edge(ang, ast, 1532));
  Edge* ansa(new Edge(ang, ath, 412));
  Edge* anse(new Edge(ang, mar, 1163));
  Edge* anar(new Edge(ang, ran, 1403));

  Edge* hosa(new Edge(ast, ath, 1940));
  Edge* hose(new Edge(ast, mar, 2316));
  Edge* hoar(new Edge(ast, ran, 258));

  Edge* sase(new Edge(ath, mar, 752));
  Edge* saar(new Edge(ath, ran, 1715));

  Edge* sear(new Edge(mar, ran, 2088));

  Teams->addEdge(anho);
  Teams->addEdge(ansa);
  Teams->addEdge(anse);
  Teams->addEdge(anar);
  Teams->addEdge(hosa);
  Teams->addEdge(hose);
  Teams->addEdge(hoar);
  Teams->addEdge(sase);
  Teams->addEdge(saar);
  Teams->addEdge(sear);

  return Teams;
};

int main() {
    Graph* Teams = buildGraph();
    Teams->getNodes();
    return 0;
}