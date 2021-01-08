
#pragma once
#include"Node.h"
template<class T>
class LinkedList
{
private:
	Node<T>* head;
public:
	LinkedList<T>();
	LinkedList<T>(const LinkedList<T>&);
	void insert_At_end(T);
	T deleteFromHead();
	void print()const;
	bool isempty()const;
	void DestroyList();

};
