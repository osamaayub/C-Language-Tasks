
#include"Node.h"
#include"LinkedList.h"
#include<iostream>
using namespace std;
template<class T>
LinkedList<T>::LinkedList()
{
	head = NULL;
}

template<class T>
LinkedList<T>::LinkedList(const LinkedList<T>& obj)

{
	if (obj.head == NULL)
	{
		head = NULL;
	}
	else
	{
		head = new Node<T>;
		Node<T>* current = head;
		Node<T>* objHead = obj.head;
		Node<T>* currentObj = objHead;
		while (currentObj->next != NULL)
		{
			current->next = new Node<T>;
			currentObj = currentObj->next;
			current = current->next;
		}
	}
}
template<class T>
void LinkedList<T>::insert_At_end(T val)
{
	Node<T>* temp = new Node<T>;
	temp->data = val;
	temp->next = head;
	head = temp;
}

template<class T>
void LinkedList<T>::print()const
{
	Node<T>* current = head;
	while (current != NULL)
	{
		cout << current->data << "->";
		current = current->next;
	}
}
template<class Type>
bool LinkedList<Type>::isempty()const
{
	return head == NULL;
}
template<class T>
T LinkedList<T>::deleteFromHead()
{
	T el = head->data;
	Node <T>* temp = head;
	if (head == head->next)
		head = NULL;
	else
		head = head->next;
	delete temp;
	return el;
}
template<class T>
void LinkedList<T>::DestroyList()
{
	Node<T>* temp = NULL;
	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}
