#include "Binary_Search_Tree.h"
#include<iostream>
using namespace std;

Binary_Search_Tree::Binary_Search_Tree()
{
	root = nullptr;
}
void Binary_Search_Tree::insert(int d)
{
    if (root != NULL)
        insert(root, d);
    else
    {
        root = new Node;
        root->Value = d;
        root->LeftChild = NULL;
        root->RightChild = NULL;
    }
}
void Binary_Search_Tree::Search( int data)
{
    int depth = 0;
    Node* temp = new Node;
    temp = root;
    while (temp != nullptr)
    {
        depth++;
        if (temp->Value == data)
        {
            cout << "value found"  << " "<<depth << endl;
            return;
        }
        // Shift pointer to left child.
        else if (temp->Value > data)
            temp = temp->LeftChild;
        // Shift pointer to right child.
        else
            temp = temp->RightChild;
    }
}
void Binary_Search_Tree::inorderTraversal(Node* temp)
{
    if (temp != nullptr)
    {
        inorderTraversal(temp->LeftChild);//L
        cout << temp->Value << " ";
        inorderTraversal(temp->RightChild);//R
    }
}
void Binary_Search_Tree::PreoderTraversal(Node* temp)
{
    if (temp != nullptr)
    {
        cout << temp->Value << "  ";
        PreoderTraversal(temp->LeftChild);//L
        PreoderTraversal(temp->RightChild);//R
    }
}
void Binary_Search_Tree::postorderTraversal(Node* temp)
{
    if (temp != nullptr)
    {
        postorderTraversal(temp->LeftChild);//L
        postorderTraversal(temp->RightChild);//R
        cout << temp->Value << " ";
    }
}
void Binary_Search_Tree::display()
{
    inorderTraversal(root);
    cout << endl;
}
Binary_Search_Tree::~Binary_Search_Tree()
{
    delete root;
}