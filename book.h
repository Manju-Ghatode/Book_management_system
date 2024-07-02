#include<iostream>
#include<string.h>

using namespace std;
class Book
{
	int bId;
	char bName[20];
	char author[20];
	double price;
	double rating;
	char category[20];
	public:
		Book();
		Book(int,const char*,const char*,double,double,const char*);
		void setBid(int );
		int getBid();
		void setName(const char*);
		char* getName();
		void setauthor(const char*);
		char* getauthor();
		void setprice(double);
		double getprice();
		void setrating(double);
		double getrating();
		void setcategory(const char*);
		char* getcategory();
		void display();
};

