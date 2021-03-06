// https://youtu.be/8ymiMHQPgZY
#include<bits/stdc++.h>

using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
#define print_vec(x) for(auto i:x) cout<<i<<" "; // prints elements of an int vector


typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

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

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*===============================================================================================================================*/

// int compress(vector<char>& chars) {
//     // vector<char> chars={'a'};
//     vector<char> result;

//     int cnt=1;
//     int temp;
//     for(int i=0;i<chars.size();i++){
//         if(chars.size()<=1){
//             return chars.size();
//         }
//         if(chars[i]==chars[i+1]){
//             cnt++;
//             // cout<<cnt<<" ";
//         }
//         else if(chars[i] != chars[i+1]){
//             result.push_back(chars[i]);
//             // cout<<to_string(cnt);
//             // char sr = cnt;
//             // cout<<sr<<" ";
//             // result.push_back(to_string(cnt));
//             string s = cnt;
//             for(string k:s){
//                 result.push_back(k);
//             }
//             cnt=1;
//         }

//     }

//     chars = result;
//     for(auto i:chars){
//         cout<<i<<" ";
//     }

//     return result.size();
//     goto endp;
// print:
//     cout<<temp<<"bye";
// endp:
//     cout<<result.size()<<"hi";
// }

int compress(vector<char>& chars) {
    int i = 0;
    for(int j = 1, count = 1; j <= chars.size(); j++, count++) {
        if(j == chars.size() || chars[j] != chars[j - 1]) {
            chars[i++] = chars[j - 1];
            if(count >= 2)
                for(char digit : to_string(count))
                    chars[i++] = digit;
            count = 0;
        }
    }
    return i;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    vector<char> chars= {'a','a','b','b','c','c','c'};
    // vector<char> chars={'a'};
    cout<<compress(chars);
    //     vector<char> result;

//     int cnt=1;
//     int temp;
//     for(int i=0;i<chars.size();i++){
//         if(chars.size()<=1){
//             temp = chars.size();
//             goto print;
//         }
//         if(chars[i]==chars[i+1]){
//             cnt++;
//             // cout<<cnt<<" ";
//         }
//         if(chars[i] != chars[i+1]){
//             result.push_back(chars[i]);
//             // cout<<to_string(cnt);
//             char sr = cnt;
//             // cout<<sr<<" ";
//             result.push_back(sr);
//             cnt=1;
//         }
//     }

//     goto endp;
// print:
//     cout<<temp<<"bye";
// endp:
//     cout<<result.size()<<"hi";
    // for(auto x:result){
    //     cout<<x<<" ";
    // }
    // cout<<nline;


}
