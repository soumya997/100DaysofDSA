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
// find size of int array
# define size(x) sizeof(x)/sizeof(int)
#define deb(x) for(int i=0;i<sizeof(x)/sizeof(int);i++) cerr<<x[i]<<" ";

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
// Function area //
void pair_search(int arr[],int s,int n){
    int k;
    sort(arr,arr+n);        // -6 1 10
    int vidx,vjdx;
    // O(NlogN) approach
    for(int i=0;i<n;i++){
        k = s -  arr[i];
        if(k != arr[i]){
            auto it = find(arr,arr+n,k);
            int idx = it - arr;
            cout<<arr[idx]<<" "<<arr[i]<<nline;
            break; // as it says to print only the 1st pair
        }
    }
}

/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    int n,s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>s;
    // [10,5,2,3,-6,9]
    // 4  -> [10,-6]
    // O(N^2) approach
    // https://afteracademy.com/blog/check-for-pair-in-an-array-with-a-given-sum
    debug(s)
    for(int i=0;i<size(arr);i++){
        for(int j=i+1;j<size(arr);j++){
            debug(i)
            debug(j)
            if(arr[i]+arr[j]==s){
                cout<<arr[i]<<" "<<arr[j]<<nline;
            }

        }
    }

    // uncomment to use the binary search implementation
    // pair_search(arr,s,n);


}




















