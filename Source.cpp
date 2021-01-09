#include"Adjancey_List.h"
#include"Graph.h"
#include"Node.h"
#include<iostream>
using namespace std;
int main()
{
	Graph g(6);
	g.add_Edge(0, 1);
	g.add_Edge(0, 4);
	g.add_Edge(1, 5);
	g.add_Edge(1, 4);
	g.add_Edge(2, 3);
	g.add_Edge(3, 4);
	g.print_Graph();

	return 0;
}