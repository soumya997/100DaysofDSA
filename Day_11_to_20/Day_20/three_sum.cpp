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

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int cs = 0;
//         int n = nums.size();
//         for(int i=0;i<nums.size();i++){
//             int k=i+1;
//             int l = n-1;
//             int req_sum =
//             while(k<=l){

//             }
//         }
//         return v;
//     }
// };

int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    // Solution sol;
    vector<int> nums{1,2,3,4,5,6,7,8,9,15};
    int key = 18;
    // auto result = sol.threeSum(v);
    // for(auto i:result){
    //     for(auto j:i){
    //         cout<<j;
    //     }
    //     cout<<nline;
    // }
    // int cs;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-3;i++){
        int k=i+1;
        int l = n-1;
        int req_sum = key - nums[i];
        while(k<l){
            int cs = nums[i];
            cs += nums[k];
            cs += nums[l];
            if(cs==key){
                cout<<nums[i]<<","<<nums[k]<<","<<nums[l]<<nline;
                k++;
                l--;
            }
            else if(cs>key){
                l--;
            }
            else if(cs<key){
                k++;
            }
        }
    }
    /*
        logic:
            you are iterating on every element of the array
            and for each element we will perform pair sum, and will
            check that if the sum of the pair and the array element
            is equla to the key or not.

            In our case we used two pointer approach to solve the pair sum
            problem.
    */
}





















