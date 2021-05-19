#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[],int n){
    for (int i=1;i<=n-1;i++){
        int e=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>e){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = e;
    }
}

int main(){
    int arr[4]={2,10,20,4};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);

    for (int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }

}
