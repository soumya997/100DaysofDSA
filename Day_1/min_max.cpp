#include<bits/stdc++.h>
using namespace std;

int main(){

    int max = INT_MIN;
    int min = INT_MAX;

    //take i/p
    int arr[4] = {12,14,15,16};
    //main logic
    for (int i=0;i<4;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }


    cout<<"max"<<max<<endl;
    cout<<"min"<<min;
}
