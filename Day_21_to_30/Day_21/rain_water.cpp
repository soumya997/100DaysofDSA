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

int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
    int n= height.size();
    cout<<"len "<<n;
    cout<<nline;

    if(n<=2){
        return 0;
    }
    vector<int> left{n,0},right{n,0};
    // int left_max=0;
    // int right_max=0;
    // insert the values for max left and max right
    // at the beginning and add the rest of the elements
    // using for loop

    // we are considering the max ele at the left/right of the array
    // considering the count from current element,its like max(height[i],height[i-1])



    left[0] = height[0];
    right[n-1] = height[n-1];

    // for(int i=1;i<n;i++){
    //     left[i] = max(left[i-1],height[i]);
    // }
    // for(int i=n-2;i<=0;i--){
    //     right[i] = max(right[i+1],height[i]);
    // }
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],height[i]);
        right[n-i-1] = max(right[n-i],height[n-i-1]);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + (min(left[i],right[i])-height[i]);
    }
    cout<<sum;
}

