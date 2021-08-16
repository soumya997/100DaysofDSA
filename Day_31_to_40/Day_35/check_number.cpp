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
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
#define print_vec(x) for(auto i:x) cout<<i<<" "; // prints elements of an int vector
#define check_all_zero(v) all_of(v.begin(), v.end(), [](int i) { return i==0; })
#define str_to_int(x) stoi(x) // converts a string to an int

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

int check(vector<int> num,int k,int n){
    if(n==0){
        return -1;
    }
    if(num[n]==k){
        return n;
    }

    return check(num,k,n-1);
}

int first_check(vector<int> num,int k,int n,int j){
    if(j==n-1){
        return -1;
    }
    if(num[j]==k){
        return j;
    }

    return first_check(num,k,n,j+1);
}

void all_check(vector<int> num,int k,int n,int j){
    if(j==n){
        return;
    }
    if(num[j]==k){
        cout<<j<<" ";
    }
    all_check(num,k,n,j+1);
}

void all_check_arr(int num[],int k,int n,int j){
    if(j==n){
        return;
    }
    if(num[j]==k){
        cout<<j<<" ";
    }
    all_check_arr(num,k,n,j+1);
}


bool check_arr(int nums[],int k,int n){
    if(n==0){
        return false;
    }
    if(nums[0]==k){
        return true;
    }
    return check_arr(nums+1,k,n-1);
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    vector<int> v{23,1,141,5,15,12,5};
    int k=5;
    int arr[7] = {23,1,141,5,15,12,5};

    // cout<<check_arr(arr,k,6);
    // all_check_arr(arr,k,7,0);
    all_check(v,k,7,0);

}
