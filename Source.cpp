#include"Queue.cpp"
#include<iostream>
using namespace std;
int main()
{
	Queue<int>q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	q1.display();
	cout << endl;
	q1.reverseQueue(q1);
	cout << "reverse of the Queue elements:" << endl;
	q1.display();
	return 0;
}