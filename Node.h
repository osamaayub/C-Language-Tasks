#include<iostream>
using namespace std;
template<class T>
struct Node
{
  	T data;
  	Node<T>*next;
  		Node()
  		{
  			data=0;
  			this->next=NULL;
  			
	    }
};
