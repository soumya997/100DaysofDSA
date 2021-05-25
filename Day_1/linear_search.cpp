#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,key;
    cin>>n;
    cout<<"insert the number of elements: ";
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"insert the key: ";
    cin>>key;

    // Linear search algorithm
    // -> going through each element of the array and if any element matches the
    // key then break out of the loop and pront the index
    int i;
    for (i=0;i<n;i++){
        if(arr[i]==key){
            cout<<key<<" found at "<<i<<" index";
            break;
        }

    }
    // if index gets more than n, then print not found
    if(i==n){

            cout<<"not found";
        }

    return 0;
}
