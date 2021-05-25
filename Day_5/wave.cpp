#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10][10]={0};
    int m,n;
    cin>>m>>n;
    int flag = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            }
    }

    for (int i=0;i<m;i++){
        if(flag%2==0){

            for(int j=0;j<n;j++){
                cout<<arr[j][i]<<", ";
                // cout<<"if";
            }
            flag++;
        }
        else{
             // if(flag%2!=0)
            for(int j=n-1;j>=0;j--){
                cout<<arr[j][i]<<", ";
                // cout<<"elif";
            }
            flag++;

        }

    }
    cout<<"END";

    return 0;
}

// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44


