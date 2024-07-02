#include "book.h"
Book::Book()
{
	bId=0;
	strcpy(bName,"not given");
	strcpy(author,"not given");
	price=0;
	rating=0;
	strcpy(category,"not given");	
}
Book::Book(int i,const char* n,const char* a,double p,double r,const char* c)
{
	bId=i;
	strcpy(bName,n);
	strcpy(author,a);
	price=p;
	rating=r;
	strcpy(category,c);	
}
void Book::setBid(int i)
{
	bId=i;
}
int Book::getBid()
{
	return bId;
}
void Book::setName(const char* n)
{
	strcpy(bName,n);
}
char* Book::getName()
{
	return bName;
}
void Book::setauthor(const char* a)
{
	strcpy(author,a);
}
char* Book::getauthor()
{
	return author;
}
void Book::setprice(double p)
{
	price=p;
}
double Book::getprice()
{
	return price;
	
}
void Book::setrating(double r)
{
	rating=r;
}
double Book::getrating()
{
	return rating;
}
void Book::setcategory(const char* c)
{
	strcpy(category,c);
}
char* Book::getcategory()
{
	return category;
}
void Book::display()
{
	cout<<"\n-------Book information-------";
	cout<<"\nBook ID : "<<this->bId;
	cout<<"\nBook name : "<<this->bName;
	cout<<"\nBook author : "<<this->author;
	cout<<"\nBook price : "<<this->price;
	cout<<"\nBook rating : "<<this->rating;
	cout<<"\nBook category : "<<this->category;
	cout<<"\n------------------------------------\n";
}


