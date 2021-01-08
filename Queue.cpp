#include"Queue.h"
#include"LinkedList.cpp"
#include<iostream>
using namespace std;

template<class Type>
Queue<Type>::Queue()
{
	currentSize = 0;
}
template<class Type>
Queue<Type>::Queue(const Queue<Type>& other)
{
	this->currentSize = other.currentSize;

	list = new Type[this->currentSize];

	for (int i = 0; i < other.currentSize; i++)
	{
		this->list[i] = other.list[i];
	}
}

template<class Type>
Queue<Type>Queue<Type>:: reverseQueue(Queue <Type>obj)
{
	
}
template<class Type>
void Queue<Type>::enqueue(Type val)
{

	list.insert_At_end(val);
	currentSize++;
}

template<class Type>
Type Queue<Type>::dequeue()
{
	list.deleteFromHead();
	currentSize--;
	return (currentSize);
}
template<class Type>
bool Queue<Type>::isempty()const
{
	return (currentSize == 0);
}
template<class Type>
void Queue<Type>::display()const
{
	list.print();
}
template<class Type>
int Queue<Type>::size()const
{
	return currentSize;
}
template<class Type>
Queue<Type>::~Queue()
{
	list.DestroyList();
}

