#include"LinkedList.h"
#include<iostream>
using namespace std;

template<class T>
LinkedList<T>::LinkedList()
{
	head=NULL;
}

template<class T>
LinkedList<T>::LinkedList(const LinkedList<T>&obj)

{
         if (obj.head == NULL)
		 { 
               head = NULL;
         }
       else 
	  {
        head = new Node<T>;
        Node<T> *current = head;
        Node<T>*objHead = obj.head;
        Node<T>*currentObj = objHead;
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
	   Node<T>*temp = new Node<T>;
		temp->data = val;
		temp->next =head;
		head = temp;
	}

	template<class T>
	void LinkedList<T>::print()const
	{
		Node<T>*current=head;
		while(current!=NULL)
		{
			cout<<current->data<<"->";
			current=current->next;
		}
	}
	template<class T>
	bool LinkedList<T>::isempty()const
	{
		return head==NULL;
	}
	template<class T>
	void LinkedList<T>::rotate_LinkedLists(int n, int m, int k)
	{
		if (k < m-n+1)
		{
			k = (k % n - m + 1);
		}
		Node<T>*current = head;
		while (current!=NULL)
		{
			cout << current->data << "->";
			current = current->next;
		}
		return;
		Node<T>*list;
		Node<T>*lost;
		if (m == 1)
		{
			current = list;
		}
		int size = 0;
		while (size!=NULL)
		{
			size++;
		}
		if (size == m - 1)
		{
			lost = current;
			current = list->next;
		}
		if (size == m - k)
		{
			list = current;
			current = list->next;
		}
		else
		{
			list = current;
			lost->next = list->next;
		}
	
	}
	template<class T>
	LinkedList<T>::~LinkedList()
	{
		Node<T>*temp = NULL;
		while(temp!=NULL)
		{
			temp=head;
			head=head->next;
			delete temp;
		}
	}
