
#pragma once
#include"LinkedList.h"
template<class Type>
class Queue
{
private:
	LinkedList<Type> list;
	int currentSize;

public:
	Queue<Type>();
	Queue<Type>(const Queue<Type>& obj);
	void enqueue(Type _value);
	Queue<Type> reverseQueue(Queue <Type>obj);
	Type dequeue();
	void display()const;
	int size()const;
	bool isempty()const;
	~Queue();
};
