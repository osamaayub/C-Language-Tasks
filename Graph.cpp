#include<iostream>
using namespace std;
#include "Graph.h"
#include"Node.h"
#include"Adjancey_List.h"

Graph::Graph(int vertices)
{
	this->vertices = vertices;
	array = new AdjList[vertices];
	for (int i = 0; i < vertices; i++)
	{
		array[i].head = NULL;
	}
}
void Graph::add_Edge(int source, int Destination)
{
	Node* newNode = new Node;
	newNode->value = Destination;					//consider src = 0 and dest = 1		0<----->1 for undirected graph
	newNode->next = NULL;		//  1----->NULL
											//adding nodes at beginning of each list just like in linked list//
	newNode->next = array[source].head;		//*next(of dst) storing address of head->next node i.e.. 1--->2 (first node from head)
	array[source].head = newNode;				//	0-->1-->2

	 // Since graph is undirected, add an edge from dest to src also
	newNode = new Node; 				 //now newNode storing data(src)
	newNode->value = source;
	newNode->next = NULL;				// 0--->NULL

	newNode->next = array[Destination].head;	// 0---->NULL (bcuz.. 1-->NULL)
	array[Destination].head = newNode;			// 1---->0
}
void Graph::print_Graph()
{
	int V = 0;
	Node*temp = array[V].head;
	while (temp)
	{
		cout << "->" << temp->value;
		temp = temp->next;
	}
	cout << endl;
}


