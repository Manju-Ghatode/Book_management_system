#include "linkedlist.h"

LinkedList::LinkedList()
{
	start=NULL;
}

void LinkedList::insertPos(Book &d,int pos)
{
	Node* temp=new Node(d);
	if(start==NULL)
	{
		start=temp;
		return;
	}
	//insert at beginning
	if(pos==1)
	{
		temp->setNext(start);
		start=temp;
		return;
	}
	int i=1;
	Node *p=start;
	while(i<pos-1 && p->getNext()!=NULL)
	{
		p=p->getNext();
		i++;
	}
	temp->setNext(p->getNext());
	p->setNext(temp);
}


bool LinkedList::deletebyId(int id)
{
	if(start==NULL)
	{
		return false;
	}
    Node* p=start;
	if(p->getData().getBid()==id)
	{
		start=p->getNext();
		delete p;
		return true;
	} 
	while(p->getNext()!=NULL)
	{
		Node* q=p->getNext();
		if(q->getData().getBid()==id)
		{
			p->setNext(q->getNext());
			delete q;
			return true;
		}
        p=p->getNext();
	} 
	return false;
}


void LinkedList::display()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	else
	{
		Node* p=start;
		while(p!=NULL)
		{
			//p->getData is an object
			p->getData().display();
			p=p->getNext();
		}
	}
}

void LinkedList::display2(Node* i)
{
	i->getData().display();
}


Node* LinkedList::searchById(int id)
{
	if(start==NULL)
	{
		return NULL;
	}
	else
	{
		Node* p=start;
		while(p!=NULL)
		{
			if(p->getData().getBid()==id)
			{
			    return p;
		    }
			p=p->getNext();
		}
	}
	return NULL;
}

bool LinkedList::update(int ele)
{
	Node* i=searchById(ele);
	if(i==NULL)
	{
		return false;
	}
	else
	{
		int op;
		double price,rating;
		i->getData().display();
		cout<<"\nEnter what you want to update:\n1:Price \n2. Ratings";
	    cin>>op;
	    if(op==1)
	    {
		    cout<<"\nEnter updated price of book :";
		    cin>>price;
		    Book b=i->getData();
		    b.setprice(price);
		    i->setData(b);
		    return true;
	    }
	    else if(op==2)
	    {
	    	cout<<"\nEnter updated rating of book :";
		    cin>>rating;
		    Book b=i->getData();
		    b.setrating(rating);
		    i->setData(b);
		    return true;
		}
	    else
	    {
	        cout<<"\nInvalid choice...";
	    }
	}
}

void LinkedList::top3PriceBooks()
{
	int i,count=0;
	Book temp;
	if(start==NULL)
	{
		cout<<"\nlinkedlist is empty";
		return;
	}
	else
	{
		LinkedList lt2;
		Node* p=start;
		for(int i=1;p!=NULL;i++)
		{
			lt2.insertPos(p->getData(),i);
			p=p->getNext();
			count++;
		}
		cout<<"no of nodes="<<count;
		for(Node* p=lt2.start;p->getNext()!=NULL;p=p->getNext())
		{
			for(Node* q=p->getNext();q!=NULL;q=q->getNext())
			{
				if(p->getData().getprice()<q->getData().getprice())
				{
					temp=p->getData();
					p->setData(q->getData());
					q->setData(temp);	
				}
			}
		}
		int i=0;
		p=lt2.start;
		while(i<count)
		{
			p->getData().display();
			p=p->getNext();
			i++;
		}
    }
}
//////////////////////////////////
//void LinkedList::top3RatingBooks()
//{
//	int i,count=0;
//	Book temp;
//	if(start==NULL)
//	{
//		cout<<"\nlinkedlist is empty";
//		return;
//	}
//	else
//	{
//		LinkedList lt2;
//		Node* p=start;
//		for(int i=1;p!=NULL;i++)
//		{
//			lt2.insertPos(p->getData(),i);
//			p=p->getNext();
//			count++;
//		}
//		cout<<"no of nodes="<<count;
//		for(Node* p=lt2.start;p->getNext()!=NULL;p=p->getNext())
//		{
//			for(Node* q=p->getNext();q!=NULL;q=q->getNext())
//			{
//				if(p->getData().getrating()<q->getData().getrating())
//				{
//					temp=p->getData();
//					p->setData(q->getData());
//					q->setData(temp);	
//				}
//			}
//		}
//		int i=0;
//		p=lt2.start;
//		while(i<3 && i<count)
//		{
//			p->getData().display();
//			p=p->getNext();
//			i++;
//		}
//    }
//}
//////////////////////////////////
LinkedList::~LinkedList()
{
	while(start!=NULL)
	{
		Node* p=start;
		start=start->getNext();
		delete p;
	}
}
