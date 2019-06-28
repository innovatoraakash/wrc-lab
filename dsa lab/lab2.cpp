#include<iostream> 
using namespace std;
 
#define MAX 5
 
int top=-1,stack[MAX];
void push();
void pop();
void display();
 
int main()
{
	int ch;
	
	while(1)	//exit on choice 4
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		cin>>ch;
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default:
         printf("\nWrong Choice!!");
          main();
		}
	}
}
 
void push()
{
	int val;
	
	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		cin>>val;
		top=top+1;
		stack[top]=val;
	}
}
 
void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top]);
		top=top-1;
	}
}
 
void display()
{	
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(int i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}