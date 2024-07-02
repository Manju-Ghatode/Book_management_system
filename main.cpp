#include <iostream>
#include "linkedlist.h"
int main() 
{
	LinkedList ll;
	int choice;
	do
	{
		cout<<"\n1.Insert book at position";
		cout<<"\n2.Display books";
		cout<<"\n3.Delete book";
		cout<<"\n4.Search book";
		cout<<"\n5.Update book";
		cout<<"\n6.Top3 books";
		cout<<"\n10.Exit";
		cout<<"\nEnter your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1:{
					    int id,pos;
			            char name[20],author[20],category[20];
			            double price,rating;
			            cout<<"\nEnter position :";
						cin>>pos;
				        cout<<"\nEnter Book ID :";
						cin>>id;
						cout<<"\nEnter Book name :";
						cin.ignore();
						cin.getline(name,20);
						cout<<"\nEnter Book author :";
						cin.ignore();
						cin.getline(author,20);
						cout<<"\nEnter Book price : ";
						cin>>price;
						cout<<"\nEnter Book rating :";
						cin>>rating;
						cout<<"\nEnter Book category :";
						cin.ignore();
						cin.getline(category,20);
				
						Book b(id,name,author,price,rating,category);
						
						ll.insertPos(b,pos);
						break;
				   }
			case 2:{
					    ll.display();
				 	    break;
			        }  
		    case 3:{
			    	    int id;
			    	    cout<<"\nEnter book id want to delete :";
			    	    cin>>id;
			    	    if(ll.deletebyId(id))
			    	    {
			    	    	cout<<"\nBook deleted successfully";
						}
						else
						{
							cout<<"\nNo Books to delete OR Book not found";
						}
					    break;
			       } 
				    
	        case 4:
					{
				        int id,s;
				        char ele[20];
				        Book b;
					        cout<<"\nEnter an book id want to search : ";
					        cin>>id;
					        Node* i=ll.searchById(id);
					        if(i==NULL)
					        {
					        	cout<<"\nNo Books to search OR Book not found";
							}
							else
							{
								cout<<"\nBook found!!!!! ";
								ll.display2(i);
							}
					}
		        	break;
		        	
			case 5:
					{
				        int id;
				        cout<<"\nEnter an book id want to update : ";
				        cin>>id;
				        if(ll.update(id))
				        {
							cout<<"\nBook updated successfully";
						}
						else
						{
							cout<<"\nNo Books to update OR Book not found";
						}
			       }
				    break;
				    
			case 6:
					{   int option;
			           LinkedList ll2; 
					   cout<<"\nSort top 3 Books based on price:\n1. Ratings \n";
				       cin>>option;
				       if(option==1)
				        {
				            ll.top3PriceBooks();
				        }
				        else
						{
							cout<<"\nInvalid choice...";
						}
			                
		            }
			        break;
			        
			case 10:
				cout<<"\nEnd of program!!!!!";
			      break;
			      
			default:cout<<"\nInvalid choice!!!!!";
		}
    }while(choice!=10);
	return 0;
}
