// C++ program for insertion sort ,merge sort , selection sort 
#include <iostream> 
using namespace std; 
  
void swap(int& a,int& b){
  int c;
  c=a;
  a=b;
  b=c;
}
  

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)  
{  
    int i, k, j;  
    for (i = 1; i < n; i++) 
    {  
        k=i;
        for ( j = i-1; j >=0; j--)
        {

           if( arr[j]>arr[k]){
             swap(arr[j],arr[k]);
             k=j;
           }
           else{
               break;
           }
        }
    }  
}  
  




// sorting array using merge sortinig

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;  
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[],R[] if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
   
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
      
        int m = (l+r)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  

// selection sorting
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        swap(arr[min_idx], arr[i]);  
    }  
}  


// function to print an array of size n  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
} 

////////////
int main()  
{  
    int arr[] = { 12, 11, 13, 5, 6 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
    
    cout<<"\n original array is : ";
    printArray(arr, n);

    cout<<"\n array after insertion sort :";
    insertionSort(arr, n);  
    printArray(arr, n);  

    cout<<"\n array after merge sort : ";
    mergeSort(arr,0,n-1);
    printArray(arr, n);
            
    cout<<"\n array after selection sort : ";
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;  
}  
  