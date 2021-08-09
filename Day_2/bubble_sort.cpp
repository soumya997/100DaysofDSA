#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[],int n){
    //take the bigger at the end
    for(int i=1;i<=n-1;i++){
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
