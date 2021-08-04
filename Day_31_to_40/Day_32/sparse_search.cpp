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
int sparse_search(string a[],int n,string key){

    // sparse search
    int s=0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        int mid_left = mid - 1;
        int mid_right = mid + 1;
        if(a[mid]==""){
            while(1){
                if(mid_left<s and mid_right>e){
                    return -1;
                }
                else if(mid_right<=e and a[mid_right]!=""){
                    mid = mid_right;
                    break;
                }
                else if(mid_left>=s and a[mid_left]!=""){
                    mid = mid_left;
                    break;
                }
                mid_left--;
                mid_right++;
            }
        }
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    string arr[] = {"ai", "", "","bat", "","","car","cat","","","dog",""};
    int n = 12;

    string f;
    cin>>f;
    cout<<sparse_search(arr,n,f)<<endl;


    return 0;
}


