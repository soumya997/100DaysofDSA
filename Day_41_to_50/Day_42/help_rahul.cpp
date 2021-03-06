// https://youtu.be/8ymiMHQPgZY
// https://github.com/darkprinx/ACM-SOLUTION/blob/master/Spoj%20Solutions/FILRTEST%20-%20File%20Recover%20Testing.cpp
#include<bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, bool> pib;
typedef pair<double, double> pdd;
typedef pair<int, double> pid;
typedef pair< int, pii> ipii;


void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif


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
#define fo(i,n) for(int i=0;i<n;i++) // for loop
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
#define print_vec(x) for(auto i:x) cout<<i<<" "; // prints elements of an int vector
#define check_all_zero(v) all_of(v.begin(), v.end(), [](int i) { return i==0; })
#define str_to_int(x) stoi(x) // converts a string to an int
#define eps 1e-9
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Code Below ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

int help_for_rahul(vector<int> v,int k){
    int m = (0+(v.size()-1))/2-1;
    // int s = 0;
    // int e = v.size()-1;
    // int ans;
    if(k==v[m]){
        return m;
    }
    if(k<v[m]){
        int s = m+1;
        int e = v.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = (s+e)/2;

            if(v[mid]==k){
                return mid;
            }
            else if(v[mid]>k){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }

        return -1;
    }
    else{
        int s = 0;
        int e = m;


        while(s<=e){
            int mid = (s+e)/2;
            if(v[mid]==k){
                return mid;
            }
            else if(v[mid]>k){
                e = mid + 1;
            }
            else{
                s = mid - 1;
            }
        }

        return -1;
    }


}


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    /*
    [12,43,2,134,544,11,65]
    [2,11,12,43,65,134,544]
    [544,134,65,2,11,12,43]

    [1,2,3,4,5]
    [5,4,1,2,3]

    cout<<(0+5)/2;
    */
    vector<int> v{544,134,65,2,11,12,43};
    int a = help_for_rahul(v,2);
    cout<<a;

    // int m = (0+(v.size()-1))/2-1;
    // cout<<v[((m+1)+v.size()-1)/2];
}
