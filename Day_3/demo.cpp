#include<bits/stdc++.h>
using namespace std;

void fun(int *arr,int n)
{
   int i;
   cout<<"inside func";
   for (i=0; i<n; i++){

    arr[i] = arr[i]+1;
    cout<<arr[i];
   }
}

// Driver program
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   int n = sizeof(arr)/sizeof(arr[0]);

   fun(arr, n);

   cout<<"outside func";
   for (int i=0; i<n; i++){
    cout<<arr[i];
   }
   return 0;
}
