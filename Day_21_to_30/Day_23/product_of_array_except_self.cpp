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
int arrayProduct(vector<int>& v){
    int initialProduct = 1;
    return accumulate(v.begin(), v.end(), initialProduct, multiplies<int>());
}

auto increment(int n,vector<int>::iterator it){
    for(int i=0;i<n;i++){
        it++;
    }
    return it;
}

// int main() {
// #ifndef ONLINE_JUDGE
//     freopen("errorf.in", "w", stderr);
// #endif

//     fastio();
//     vector<int> nums{-1,1,0,-3,3};
//     int l = nums.size();
//     vector<int> arr(10000);
//     for(int i=0;i<nums.size();i++){
//         vector<int> nums1(nums);
//         vector<int>::iterator it = nums1.begin();
//         auto inc = increment(i,it);
//         nums1.erase(inc);
//         vector<int> after_ers(nums1);
//         arr[i] = arrayProduct(after_ers);
//     vector<int> v;
//     for(int i=0;i<l;i++){
//         v[i] = arr[i];
//     }
//     for(auto p:v){
//         cout<<p<<" ";
//     }
// }

// int main(){
// #ifndef ONLINE_JUDGE
//     freopen("errorf.in", "w", stderr);
// #endif
//     fastio();


//     vector<int> nums{-1,1,0,-3,3};
//     int l = nums.size();
//     vector<int> arr(l);
//     for(int i=0;i<nums.size();i++){
//         vector<int> nums1(nums);
//         nums1[i] = 1;
//         vector<int> after_ers(nums1);
//         arr[i] = arrayProduct(after_ers);
//     }

//     // vector<int> v;
//     // for(int i=0;i<l;i++){
//     //     v[i] = arr[i];
//     // }
//     for(auto p:arr){
//         cout<<p<<" ";
//     }
// }

int main(){
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif
    fastio();
    // precomputing
    /*
        https://youtu.be/9w2_CWmR0Iw
        first compute the prefix arrar
        and then create the result array. fill
        up result array by multiplying prefix
        element with the onthe fly calculated
        postfix value.

        Concept: its called precomputing, we are computing
        pre and post array to solve the problem.

        eg: input arr [1,2,3,4]
            // pre array is the product of all element before that element
            // for 1 pre product of all element is 1, for 2 its 1*1 = 1,
            // for 3 it is 1*2=2, for 4 it is 1*2*3=6
            pre array [1,1,2,6]
            post array [24,12,8,6]

    */
    vector<int> nums{1,2,3,4};
    int l = nums.size();
    vector<int> pre(l);
    vector<int> ans(l);
    pre[0] = 1;
    int prefix = 1;
    int postfix=1;
    for(int i=1;i<l;i++){
        pre[i] = prefix*nums[i-1];
        prefix = pre[i];
    }

    for(int i=l-1;i>=0;i--){
        ans[i] = postfix*pre[i];
        postfix *= nums[i];
    }

    for(auto x:pre){
        cout<<x<<" ";
    }

}