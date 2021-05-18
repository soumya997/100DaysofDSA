#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[4]={1,0,12,1};
    int s=0;
    int n=4;

    //selection sort
    for(int i=s;i<n-1;i++){
        for(int j=i;j<=n-1;j++){
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }

        }
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

}
