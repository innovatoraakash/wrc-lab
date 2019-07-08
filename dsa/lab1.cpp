#include<iostream> 
using namespace std; 
void display(int a[], int n){
    cout<<"the current array is";
  for (int  i = 0; i < n; i++)
  { 
      cout<<"a"<<"["<<i<<"]=";
      cout<<a[i]<<endl;
  }
}
 int main(){
 int n,m,b;
 int* a = new int[n];
 cout<<"enter the size of array : ";
 cin>>n;
 //decleration of array
  for (int  i = 0; i < n; i++)
  {
      cout<<"a"<<"["<<i<<"]=";
      cin>>a[i];
  }
  display(a,n);
//   insertion of the array element
cout<<"enter the index and the value to insert : ";
cin>>m>>b;
    int* a1 = new int[n+1];
for (int i = 0; i <= n; i++)
{   if(i<m)
     a1[i]=a[i];
    a1[m]=b;
    if(i>m)
     a1[i]=a[i-1];
    /* code */
   
}
    delete[] a;
    a=a1;
display(a,n+1);

// deletion of array
cout<<"enter the index to delete : ";
cin>>m;
int* a2 = new int[n];
for (int i = 0; i <= n; i++)
{   if(i<m)
     a2[i]=a[i];
    if(i>m)
     a2[i-1]=a[i];
    /* code */
 }
 delete[] a;
 a= a2;
 display(a,n);
 delete[] a2;
 delete[] a1;

 }
 