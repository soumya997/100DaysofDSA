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
bool isSubsequence(string s, string t) {

    vector<int> index(s.length());
    for(int i=0;i<s.length();i++){
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j]){
                index[i] = j;
            }
        }
        // index[i]=-1;
    }
    // reverse(index.begin(),index.end());
    for(int i=0;i<s.length();i++){
        cout<<index[i]<<" ";
    }

    for(int k=0;k<index.size();k++){
        if(index[k]<index[k+1]){
            return true;
            break;
        }
        else{
            return false;
            break;
        }
    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    string s = "abc", t = "ahbgdc";
    // string s= "axc", t = "ahbgdc";
    // vector<int> index(s.length());
    // for(int i=0;i<s.length();i++){
    //     for(int j=0;j<t.length();j++){
    //         if(s[i]==t[j]){
    //             index.push_back(j);
    //         }
    //     }
    // }

    // for(int k=0;k<index.size();k++){
    //     if(index[k]<=index[k+1]){
    //         return true;
    //         break;
    //     }
    //     else{
    //         return false;
    //         break;
    //     }
    // }

    // if(isSubsequence(s,t)){
    //     cout<<"hi";
    // }
    // else{
    //     cout<<"no";
    // }
    bool p = isSubsequence(s,t);


}
