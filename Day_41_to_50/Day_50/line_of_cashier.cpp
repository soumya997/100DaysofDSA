#include<bits/stdc++.h>
using namespace std;

#define MOD 10e9+7
int m[100000];
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>m[i];
    int v=1000000000;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int e=0; e<m[i]; e++){
            int a;
            cin>>a;
            sum+=5*a;
            sum+=15;
        }
        v=min(v,sum);
    }
    cout<<v<<endl;
    return 0;
}
