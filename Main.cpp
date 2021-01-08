#include"LinkedList.cpp"
#include<iostream>
using namespace std;
int main()
{
	Node<int> *head = NULL;
LinkedList<int> l1;
l1.insert_At_end(1);
l1.insert_At_end(2);
l1.insert_At_end(3);
l1.insert_At_end(4);
cout<<"First Linked Lists is:"<<endl;
 l1.print();
 LinkedList <int> L2;
 L2=l1;
 cout<<endl;
 cout << "Second Linked Linked after copying First is:" << endl;
 cout << endl;
 L2.print();
 cout << endl;

 L2.deleteFromHead();
 cout << "Linked lists after deleting Node is:" << endl;
 L2.print();
 cout << endl;
 L2.deleteFromHead();
 cout << endl;

 cout << "Linked lists after Deleting Node is:" << endl;
 L2.print();
 cout << endl;
 L2.deleteFromHead();
 cout << endl;

 cout << "Linked lists after Deleting Node is:" << endl;
 L2.print();
 cout << endl;
 L2.deleteFromHead();
 cout << endl;

 cout << "Linked lists after Deleting Node is:" << endl;
 L2.print();
 cout << endl;
 L2.rotateSubList(head, 4, 5,2);
 cout << "linked lists after rotation is:" << endl;
 L2.print();
}
