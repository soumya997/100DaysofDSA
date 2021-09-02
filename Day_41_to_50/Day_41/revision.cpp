// https://youtu.be/8ymiMHQPgZY
// https://github.com/darkprinx/ACM-SOLUTION/blob/master/Spoj%20Solutions/FILRTEST%20-%20File%20Recover%20Testing.cpp
#include<bits/stdc++.h>

using namespace std;

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

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
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Code Below ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

void merge(vector<int>&v,int s,int e){
    int i = s;
    // int k=e;
    int mid = (i+e)/2;
    int j=mid+1;

    vector<int> temp;
    while(i<=mid and j<=e){
        if(v[i]<v[j]){
            temp.push_back(v[i]);
            i++;
        }
        else{
            temp.push_back(v[j]);
            j++;
        }

    }

    while(i<=mid){
        temp.push_back(v[i]);
        i++;
    }

    while(j<=e){
        temp.push_back(v[j]);
        j++;
    }


    int idx=0;
    for(int k=s;k<=e;k++){
        v[k] = temp[idx++];
    }


    // return;
}


void merge_sort(vector<int> & arr,int s,int e){

    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);

    merge(arr,s,e);
    // print_vec(arr);

}


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    // vector<int> arr{1,1,1,1,5,1};
    // merge_sort(arr,0,arr.size()-1);
    // print_vec(arr);
    // for(auto t:arr){
    //     cout<<t<<",";
    // }
    // vector<int> temp(6);
    // cout<<temp.size();
    string s = "cowofourownbarn";
    unordered_map<char,int> mp;

    for(int i=0;i<s.length();i++){
        if(mp.count(s[i])){
            mp[s[i]]++;
        }
        else{
            mp[s[i]] = mp[s[i]] +1;
        }
    }
    for(auto p:mp){
        cout<<p.first<<"->"<<p.second<<endl;
    }

}


