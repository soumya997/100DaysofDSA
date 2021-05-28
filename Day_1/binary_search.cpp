#include<bits/stdc++.h>
// #include "C"
using namespace std;

int binary_search(int arr[],int n, int key){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = (s+e)/2;

        if( arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1; //return -1 if that element is not present

}

int main(){
    //take i/p
    int arr[4] = {12,14,15,16};
    int key=17;

    int idx = binary_search(arr,4,key);
    cout<<idx;
}
