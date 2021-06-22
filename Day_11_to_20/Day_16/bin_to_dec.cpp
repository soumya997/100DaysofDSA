#include<bits/stdc++.h>
using namespace std;
#define print(x) cout << x
#define deb(x) cout << #x << "=" << x << endl;
// 101 -> 5
// For binary number fedcba , Decimal number = f * 2^5 + e * 2^4 + d * 2^3 + …..+ a * 2^0.
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

int main(){
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while((t--)>0){
        long long data;
        cin>>data;
        int len = 0;
        debug(len);
        long long dec = 0;
        debug(dec);
        while(data!=0){
            dec += (data%10)*pow(2,len);
            len++;
            data /= 10;
        }
        cout<<dec<<endl;

    }
    return 0;
}

