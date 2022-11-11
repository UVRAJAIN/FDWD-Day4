#include<bits/stdc++.h>
using namespace std;
#define size 5
int Linear_Queue[size];
int front =0;
int rear =0;



bool isfull()
{
	if(rear ==size)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool isempty()
{
	if(front == rear )
	{
		return true;
	}
	else
	{
		return false;
	}
}

void EnQueue(int data)
{
	if(isfull())
	{
		cout<<"Queue is Full.\n";
	}
	else
	{
		Linear_Queue[rear]=data;
		rear++;
	}
	
}

void DeQueue()
{
	if(isempty())
	{
		cout<<"Queue is Empty.\n";
	}
	else
	{
		int del_element=Linear_Queue[front];
		cout<<"Deleted element : "<<del_element<<endl;
		front++;
		if(front == rear)
		{
			front =0;
			rear=0;
		}
	}
	
}

void front_element()
{
	if(isempty())
	{
		cout<<"Queue is Empty.\n";
	}
	else
	{
		cout<<"Front Element is: "<<Linear_Queue[front]<<endl;
	}
}

void rear_element()
{
	if(isempty())
	{
		cout<<"Queue is Empty.\n";
	}
	else
	{
		cout<<"Rear Element is: "<<Linear_Queue[rear-1]<<endl;
	}
}

void display()
{
	if(isempty())
	{
		cout<<"Queue is Empty.\n";
	}
	else
	{
		cout<<"Elements in Linear Queue :-\n";
		for(int i=front;i<rear;i++)
		{
			cout<<Linear_Queue[i]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	EnQueue(1);
	EnQueue(2);
	EnQueue(3);
	EnQueue(4);
	EnQueue(5);
	
	DeQueue();
	DeQueue();
	
	display();
	
	front_element();
	rear_element();
	
	cout<<"Queue is Full :\n";
	EnQueue(6);
}
