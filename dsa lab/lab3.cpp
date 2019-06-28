#include<iostream> 
using namespace std;
 
#define MAX 5
 
int front=-1,rear=-1,queue[MAX];
void enqueue();
void dequeue();
void display();
 
int main()
{
	int ch;
	
	while(1)	//exit on choice 4
	{
		cout<<"\n*** queue Menu ***";
		cout<<"\n\n1.enqueue\n2.dequeue\n3.Display\n4.Exit";
		cout<<"\n\nEnter your choice(1-4):";
		cin>>ch;
		
		switch(ch)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
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
 
void enqueue()
{
	int val;	
	if(rear==MAX-1)
		printf("\nqueue is full!!");
	else
	{
		printf("\nEnter element to insert:");
		cin>>val;
		rear=rear+1;
		queue[rear]=val;
        if (front==-1)
         front=0;   
	}
}
 
void dequeue()
{
    
	if(front==-1||front>rear)
		printf("\nStack is empty!!");
	else
	{
		printf("\nDeleted element is %d",queue[front]);
		front=front+1;
         if (front>rear)
         {
             front=-1;
             rear=-1;
         }
         
	}
}
 
void display()
{
		if(rear==-1)
		printf("\nqueue is empty!!");
	else
	{
		printf("\nqueuq is...\n");
		for(int i=front;i<=rear;i++)
			printf("%d\n",queue[i]);
	}
}