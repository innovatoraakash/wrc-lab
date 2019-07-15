#include<iostream>

using namespace std;
      
     void binarySearch(int arr[], int value, int left, int right) {

      while (left <= right) {

            int middle = (left + right) / 2;

            if (arr[middle] == value)
                   {
                 cout<<"value pressent at position "<<middle+1;
                  break;}

            else if (arr[middle] > value)

                  right = middle - 1;

            else

                  left = middle + 1;

      }

     }

        void LinearSearch(int arr[], int value, int n)

        {   int found = 0,i;

            for (i = 0; i < n ; i++) {

                if (value == arr[i] ){

                    found = 1;
                    break;
                }

            }

            if (found == 1)
                 cout<<"Element is present in the array at position "<<i+1<<endl;

            else
                cout<<"Element is not present in the array.\n";

        }


int  main()

{  int num;

    int i,  keynum, found = 0;

    cout<<"Enter the number of elements   ";

    cin>>num;

    int array[num];

    cout<<"Enter the elements one by one \n";

    for (i = 0; i < num; i++)

        cin>> array[i];

    cout<<"Enter the element to be searched   ";

    cin>>keynum;

    LinearSearch(array,keynum,num);
    binarySearch(array,keynum,0,num);

    return 0;

}