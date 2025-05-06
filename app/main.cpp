#include "../code/dijkstra.h"
#include <memory>
#include <string>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;



int main() {
    Graph* Teams(new Graph);

    Teams->addNode(Teams, 0, "Mariners");
    Teams->addNode(Teams, 1, "Angels");
    Teams->addNode(Teams, 2, "Astros");
    Teams->addNode(Teams, 3, "Athletics");
    Teams->addNode(Teams, 4, "Rangers");

    Teams->addEdge(Teams, 0, 1, 1163);
    Teams->addEdge(Teams, 0, 2, 2316);
    Teams->addEdge(Teams, 0, 3, 752);
    Teams->addEdge(Teams, 0, 4, 2088);

    Teams->addEdge(Teams, 1, 2, 1532);
    Teams->addEdge(Teams, 1, 3, 412);
    Teams->addEdge(Teams, 1, 4, 1403);

    Teams->addEdge(Teams, 2, 3, 1940);
    Teams->addEdge(Teams, 2, 4, 258);

    Teams->addEdge(Teams, 3, 4, 1715);

    Teams->dijkstra(Teams, "Mariners");

    return 0;

}