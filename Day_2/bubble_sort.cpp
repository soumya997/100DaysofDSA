#include<bits/stdc++.h>
using namespace std;

/*
    points to remember about bubble sort,
    1. using array for doing bubble sort or any other algorithm which involves 
       element wise swaping is better than vector, we cant use swap on vectors 
       for element wise swaping.
*/


void bubble_sort(int arr[],int n){
    //take the bigger at the end
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=(n-itr-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[4]={2,14,2,4};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);

    for (int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }

}
