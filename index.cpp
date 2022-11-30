//write a cpp program to demonstrate singly linked list
#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *link;
		node(int d)
		{
			data=d;
			link=NULL;
		}
};
class SinglyLinkedList
{
	public:
		node *head=NULL;
		void create(int d)
		{
			node *temp=head;
			if(head==NULL)
			{
				node *nptr=new node(d);
				head=nptr;
			}
			else
			{
				node *temp=head;
				while(temp->link!=NULL)
				{
					temp=temp->link;
				}
				node *nptr=new node(d);
				temp->link=nptr;
			}
		}
		void display()
		{
			node *temp=head;
			if(head==NULL)
			{
				cout<<"No lists are there"<<endl;
			}
			else
			{
				while(temp!=NULL)
				{
					if(temp->link!=NULL)
					cout<<temp->data<<"->";
					else
					cout<<temp->data<<endl;
					temp=temp->link;
				}
			}
		}
};
int main()
{
	SinglyLinkedList sll;
	int val,option;
	while(1)
	{
		cout<<"1.Create"<<endl;
		cout<<"2.Display"<<endl;
		cout<<"Enter the option";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Enter some value:";
				cin>>val;
				sll.create(val);
				break;
			case 2:
				sll.display();
				break;
			case 3:
				exit(0);
		}
	}
	return 0;
}