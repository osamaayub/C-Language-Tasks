#include"LinkedList.cpp"
#include<iostream>
using namespace std;
int main()
{
LinkedList<int> l1;
l1.insert_At_end(1);
l1.insert_At_end(2);
l1.insert_At_end(3);
l1.insert_At_end(4);
cout<<"values in Linked Lists are:"<<endl;
 l1.print();
 LinkedList <int> L2;
 L2=l1;
 cout<<endl;
 cout<<"values in the linked lists are:"<<endl;
 L2.print();
 cout << endl;
 L2.rotate_LinkedLists(4, 5, 3);
 cout << "rotate linked lists is:" << endl;
 L2.print();
}
