#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* head = NULL;   
void insert(int new_data) { 
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = head; 
   head = new_node; 
} 
void display() { 
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main() { 

   char ch='y';
   int a;
	A:
	cout<<"enter element to add";
	cin>>a;
	insert(a);
   cout<<"wants to add more??(y/n)";
   cin>>ch;
	if(ch=='y')
	    goto A;
   cout<<"The linked list is: ";
   display(); 
   return 0; 
   
} 
