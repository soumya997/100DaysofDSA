// https://youtu.be/8ymiMHQPgZY
// https://github.com/darkprinx/ACM-SOLUTION/blob/master/Spoj%20Solutions/FILRTEST%20-%20File%20Recover%20Testing.cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    // vector<int> v(3);
    while(n--){
        int sum1 = 0;
        int sum2 = 0;
        int sum3 = 0;
        int a,b,c;

        for (int i = 0; i < n; i++) {
            // for (int j = 0; j < 3; j++) {
            //     cin >> v[j];
            // }
            cin>>a>>b>>c;

            sum1 = sum1 + a;
            sum2 = sum2 + b;
            sum3 = sum3 + c;

        }

        // cout<<(sum1 + sum2 + sum3)<<endl;
        if (sum1 ==0 and sum2 == 0 and sum3 == 0) {
            cout << "YES"<<endl;
        }
        else {
            cout << "NO"<<endl;
        }
        // print_vec(v);
    }

}