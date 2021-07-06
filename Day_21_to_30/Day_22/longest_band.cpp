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


// this code for longest band does not work!!!


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    // 1,9,3,0,18,5,2,4,10,7,12,6,  1,12,13,14,18,19
    // vector<int> arr{1,12,13,14,18,19};
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};

    vector<int> copy{arr};

    sort(copy.begin(),copy.end());
    int left = 0;
    vector<int> update;
    for(int i=0;i<arr.size();i++){
        if(i == arr.size()-1 and copy[i-1] == copy[i]-1){
            // cout<<"end"<<copy[i]<<" ";
            update.push_back(copy[i]);
        }
        if(copy[i+1] == copy[left]+1){
            update.push_back(copy[i]);
            // cout<<copy[i]<<" ";
            left += 1;
        }
        else if(copy[i+1] != copy[left]+1){
            update.push_back(copy[i]);
            left += 1;
            update.push_back(-1);

            // if(copy[left-2]+1 == copy[left-1]){
            //     update.push_back(copy[left-1]);
            // }
        }
    }
    cout<<nline;
    // set<int> s;
    // for(int x:update){
    //     s.insert(x);
    // }
    // for(int j:update){
    //     cout<<j<<" ";
    // }
    vector<int> index{100,0};
    index.push_back(0);
    for(int i=0;i<arr.size();i++){
        if(update[i]==-1){
            cout<<i<<" ";
            index.push_back(i);
        }
    }
    cout<<nline;
    int max = 0;
    int cs = 0;
    for(int i=0;i<index.size();i++){
        cs = index[i+1]-index[i];
        if(cs>max){
            max=cs;
        }
    }
    cout<<nline;
    print_vec(index);
    cout<<max;
    cout<<nline;
    print_vec(update);
    // cout<<nline;
    // vector<int> find_ele;
    // for(int i=0;i<arr.size();i++){
    //     find_ele[i] = arr.size() - index[i];
    // }
    // int max = *max_element(find_ele.begin();find_ele.end());
    // int max=0;
    // int l;
    // int r;
    // for(int i=0;i<index.size();i++){
    //     if(index[i+1]-index[i]>max){
    //         max = index[i+1]-index[i];
    //         l = index[i];
    //         r = index[i+1];
    //     }
    // }
    // for(int i=l;i<r;i++){
    //     cout<<copy[i]<<" ";
    // }


}










