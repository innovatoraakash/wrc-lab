
#include<iostream>
using namespace std;
struct Node
{
   int data;
   struct Node* next;
   
};
static int count;
struct Node *head;
int temp;

void Insert(int data, int n)
{  
    count++;
   struct Node* temp1 = new Node();
   struct Node* temp2 = head ;
   if (n == 1){

    temp1->next = head;
    temp1->data= data;
    head = temp1;
    return;
   }

   for (int i = 1; i < n-1; i++){
    temp2 = temp2->next;
   }
            temp1->next= temp2->next;
             temp2->next = temp1;
             temp1->data = data;

}

void print()
{
    struct Node* temp11 = head;
    
    while(temp11 != NULL){
        cout << temp11->data<<",";
        temp11 = temp11->next;
    }
    printf("\n");
}
int main()
{
    head = NULL; //empty linked list
    Insert(7,1); //List: 7    
    Insert(5,2); //List: 7,5 
    Insert(8,1); //List: 8,7,5 
    Insert(6,2); //List: 8,6,7,5  
	print();
   

}
