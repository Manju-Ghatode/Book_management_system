#include<iostream>
#include "book.h"
using namespace std;
class Node
{
	Book data;
	Node* next;
	
	public:
		Node(Book&);
		void setData(Book&);
		Book& getData();
		void setNext(Node*);
	    Node* getNext();
};
