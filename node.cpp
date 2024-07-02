#include "node.h"
Node::Node(Book &d)
{
	data=d;
	next=NULL;
}
 
void Node::setData(Book &d)
{
	data=d;
}
 
Book& Node::getData()
{
	return data;
}
 
void Node::setNext(Node* nt)
{
	next=nt;
}
 
Node* Node::getNext()
{
	return next;
}
