#include "../code/dijkstra.h"
#include <memory>
#include <string>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;



int main() {
    mat* Teams = Graph::addGraph(stads);

    Graph::addNode(Teams, 0, "Mariners");
    Graph::addNode(Teams, 1, "Angels");
    Graph::addNode(Teams, 2, "Astros");
    Graph::addNode(Teams, 3, "Athletics");
    Graph::addNode(Teams, 4, "Rangers");

    Graph::addEdge(Teams, 0, 1, 1163);
    Graph::addEdge(Teams, 0, 2, 2316);
    Graph::addEdge(Teams, 0, 3, 752);
    Graph::addEdge(Teams, 0, 4, 2088);

    Graph::addEdge(Teams, 1, 2, 1532);
    Graph::addEdge(Teams, 1, 3, 412);
    Graph::addEdge(Teams, 1, 4, 1403);

    Graph::addEdge(Teams, 2, 3, 1940);
    Graph::addEdge(Teams, 2, 4, 258);

    Graph::addEdge(Teams, 3, 4, 1715);

    Graph::dijkstra(*Teams, "Mariners");

    return 0;

}