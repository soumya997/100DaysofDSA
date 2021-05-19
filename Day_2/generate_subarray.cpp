#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4]={2,10,20,4};
    int n = 4;
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            for(int k=i;k<=j;k++){
                cout<<" "<<arr[k]<<",";
            }
            cout<<endl;
            count++;
        }
    }

    cout<<count;
}
