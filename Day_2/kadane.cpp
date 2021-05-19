#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7]={2,10,-1,4,-6,1,0};
    int n = 7;
    int curr_sum = 0;
    int ms = 0;
    for (int i=0;i<n;i++){
        curr_sum = curr_sum+arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }

        ms = max(curr_sum,ms);

    }

    cout<<ms;
}
