#include"Node.h"
template<class T>
class LinkedList
{
	private:
		Node<T>*head;
		public:
			LinkedList<T>();
			LinkedList<T>(const LinkedList<T>&);
			void insert_At_end(T);
			void print()const;
			void rotate_LinkedLists(int , int, int);
			bool isempty()const;
			~LinkedList();
	
};
