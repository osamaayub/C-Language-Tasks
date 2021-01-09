#pragma once
#include"Node.h"
#include"Adjancey_List.h"
class Graph
{
private:
	int vertices;
	AdjList *array;
public:

	Graph(int V);
	void add_Edge(int source, int destination);
	void print_Graph();
};

