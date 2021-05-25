#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    cout<<arr[n-1];
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }

    return 0;
    // cout<<"hello problems, get out of my way.";
    // return 0;
}
