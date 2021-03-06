#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;	
};
class list
{
		private:
		node *head, *tail;
		public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void createnode(int value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
			{	
				tail->next=temp;
				tail=temp;
			}
		}
		void display()
		{
            cout<<"\n--------------------------------------------------\n";
            cout<<"---------------Displaying All nodes---------------";
            cout<<"\n--------------------------------------------------\n";
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
		}
		void insert_start(int value)
		{
            cout<<"\n--------------------------------------------------\n";
            cout<<"----------------Inserting At Start----------------";
            cout<<"\n--------------------------------------------------\n";
			node *temp=new node;
			temp->data=value;
			temp->next=head;
			head=temp;
		}
		void insert_position(int pos, int value)
		{
            cout<<"\n--------------------------------------------------\n";
            cout<<"-------------Inserting At Particular--------------";
            cout<<"\n--------------------------------------------------\n";
			node *pre=new node;
			node *cur=new node;
			node *temp=new node;
			cur=head;
			for(int i=1;i<pos;i++)
			{
				pre=cur;
				cur=cur->next;
			}
			temp->data=value;
			pre->next=temp;	
			temp->next=cur;
		}
		void delete_first()
		{
            cout<<"\n--------------------------------------------------\n";
            cout<<"----------------Deleting At Start-----------------";
            cout<<"\n--------------------------------------------------\n";
			node *temp=new node;
			temp=head;
			head=head->next;
			delete temp;
		}
		void delete_last()
		{
            cout<<"\n--------------------------------------------------\n";
            cout<<"-----------------Deleting At End-------------------";
            cout<<"\n--------------------------------------------------\n";
			node *current=new node;
			node *previous=new node;
			current=head;
			while(current->next!=NULL)
			{
				previous=current;
				current=current->next;	
			}
			tail=previous;
			previous->next=NULL;
			delete current;
		}
		void delete_position(int pos)
		{
            cout<<"\n--------------------------------------------------\n";
            cout<<"--------------Deleting At Particular--------------";
            cout<<"\n--------------------------------------------------\n";
			node *current=new node;
			node *previous=new node;
			current=head;
			for(int i=1;i<pos;i++)
			{
				previous=current;
				current=current->next;
			}
			previous->next=current->next;
		}
};
int main()
{
	list obj;
	while(choice!=9)
{   
   cout << "Menu\n1.Insert Value\n2.Insert at Particular Index\n3.Delete at Particular Index\n4.Print\n5.Insert at Start\n6.Insert at End \n7.Delete at Start \n8. Delete at End\n9.Exit\nChoice: ";
   cin>>choice;
	if(choice==1)
	{
		int number;
		cout << "Enter Number: ";
		cin >> number;
		obj.createnode(number);
	}
	else if(choice==2)
	{
		int index, number;
		cout << "Enter Index at which value will take place:";
		cin>>index;
		cout << "Enter Number to be inserted: ";
		cin>>number;
		obj.insert_position(index,number);
	}
	else if(choice==3)
	{
		int index;
		cout << "Enter Index: ";
		cin>>index;
		obj.delete_position(index);
	}
	else if(choice==4)
	{   cout << obj.display();
	}
	else if(choice==5)
	{   int number;
		cout << "Enter Number: ";
		cin >> number;
        cout << obj.insert_start(number);
	}
	else if(choice==6)
	{   int number;
        cout<<"\n--------------------------------------------------\n";
        cout<<"-----------------Inserting At End-----------------";
        cout<<"\n--------------------------------------------------\n";
	{   cout << "Enter Number: ";
		cin >> number;
        cout << obj.createnode(number);
	}
	else if(choice==7)
	{   cout << obj.delete_first();
	}
	else if(choice==8)
	{   cout << obj.delete_last();
	}
	
}
cout<<"Program Has Ended Successfully";
exit(0);
return 0;

}