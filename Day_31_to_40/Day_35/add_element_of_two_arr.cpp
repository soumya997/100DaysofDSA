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
// #define str_to_int(x) stoi(x) // converts a string to an int

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
// void add_element(vector<int> a,vector<int> b,vector<int> &ans,int n,int m,int j,int i){
//     if(j==n or i==m){
//         return;
//     }

//     // while(j<a.size() and i<b.size()){
//     if(j<a.size() and i<b.size()){
//         int sum = a[j] + b[i];
//         string st = to_string(sum);
//         for(int i=0;i<st.length();i++){
//             char stin = st[i];
//             ans.pb(stin - '0');
//         }
//         add_element(a,b,ans,n,m,j+1,i+1);
//     }

//     // j++;
//     // i++;
//     // }

//     if(j<a.size()){
//         int sum = a[j];
//         string st = to_string(sum);
//         for(int i=0;i<st.length();i++){
//             char stin = st[i];
//             ans.pb(stin - '0');
//         }
//         // j++;
//         add_element(a,b,ans,n,m,j+1,i);
//     }

//     if(i<b.size()){
//         int sum = b[i];
//         string st = to_string(sum);
//         for(int i=0;i<st.length();i++){
//             char stin = st[i];
//             ans.pb(stin - '0');
//         }
//         // i++;
//         add_element(a,b,ans,n,m,j,i+1);
//     }

// }

void split_number(int num, vector<int> &result)
{
    if (num > 0)
    {
        split_number(num/10, result);
        result.push_back(num % 10);
    }
}

void add(vector<int> const &a, vector<int> const &b, vector<int> &result)
{
    int m = a.size(), n = b.size();

    int i = 0;
    while (i < m && i < n)
    {
        int sum = a[i] + b[i];

        split_number(sum, result);

        i++;
    }

    while (i < m) {
        split_number(a[i++], result);
    }

    while (i < n) {
        split_number(b[i++], result);
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    vector<int> a{ 23, 5, 2, 7, 87 };
    vector<int> b{ 4, 67, 2, 8 };
    vector<int> ans;
    // print_vec(ans);

    // code for char to int

    // string s = "4343";
    // char s1 = s[2];
    // int num = stoi(s1);
    // int n;
    // stringstream ( s1 ) >> n;
    // cout<<s1 - '0';

    add(a,b,ans);

    print_vec(ans);
    cout<<nline<<ans.size();
}
