# Final Project

I have loved sports my entire life, specifically baseball. Ever since I was a child, one of the items on my bucket list has been to attend a baseball game at every MLB stadium. Soon enough, I am going to embark on a road trip to visit every stadium.

I am going to use this project to help plan my trip, making it as efficient as possible so I have to take off the least amount of work.

To do this, I am utilizing a weighted graph data structure. I am going to set each node as a stadium, and the undirected (but weighted) edges will be the driving distance between every stadium.

The Graph structure alone is all fine and dandy, but if I don't have a method of finding the shortest route through the graph, then it is kind of pointless. To find the shortest route, I am utilizing Dijkstra's Algorithm.

Dijkstra's algorithm is a very common "shortest path" algorithm. It finds the shortest route starting at one node, then visiting all other nodes. Dijkstra's algorithm traverses the graph by repeatedly "checking" the nearest unvisited node, then calculating the distance to all the unvisited neighboring nodes. It often utilizes a min-priority queue to select the shortest paths.


When I began this project, I was hoping to maybe map a route to every MLB stadium. However, this would require manuall creating sum(1:29) = 435 edges... That was a bit optimistic. So instead I will be using this algorithm to find the shortest route through the American League West (Los Angeles, Sacramento, Houston, Seattle, and Dallas) beginning in Seattle with the Mariners. I have this repository in my personal github, so I will continue working on it for fun to see if I can build out a route visiting every single stadium. It will take a lot of time and effort, but I think I'll be able to do it because I have the framework built and it's just data entry at that point.


There is nothing to run for this program, just a final result. It is possible to adjust some of the edge weights (distances) to see what that does to the path, but that is more just an example to see the code working.