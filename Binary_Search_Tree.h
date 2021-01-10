#pragma once
#include<iostream>
#include"Node.h"
class Binary_Search_Tree
{
public:
	Binary_Search_Tree();//default constructor
	void insert(int);//insert function
	void inorderTraversal(Node* temp);
	void PreoderTraversal(Node* temp);
	void postorderTraversal(Node* temp);
	~Binary_Search_Tree();//Destructor
	void display();//print function
	void Search( int data);
private:
	Node* root;
	void insert(Node* node, int d)
	{

		// element to be inserted is lesser than node’s data
		if (d < node->Value)
		{
			// if left subtree is present
			if (node->LeftChild != NULL)
				insert(node->LeftChild, d);

			// create new node
			else
			{
				node->LeftChild = new Node;
				node->LeftChild->Value = d;
				node->LeftChild->LeftChild = NULL;
				node->LeftChild->RightChild = NULL;
			}
		}

		// element to be inserted is greater than node’s data
		else if (d >= node->Value)
		{
			// if left subtree is present
			if (node->RightChild != NULL)
				insert(node->RightChild, d);

			// create new node
			else
			{
				node->RightChild = new Node;
				node->RightChild->Value = d;
				node->RightChild->LeftChild = NULL;
				node->RightChild->RightChild = NULL;
			}
		}

	}
};

