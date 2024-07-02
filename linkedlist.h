#include<iostream>
using namespace std;
#include "node.h"
class LinkedList
{
	Node* start;
	public:
		LinkedList();
		void insertPos(Book&,int);
		bool deletebyId(int);
		void display();
		void display2(Node*);
		Node* searchById(int);
		bool update(int);
		void top3PriceBooks();
		~LinkedList();
};
