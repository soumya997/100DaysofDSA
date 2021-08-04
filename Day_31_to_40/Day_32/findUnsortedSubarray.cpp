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
// bool sort_check(vector<int> nums){
//     bool flag = false;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i+1]>=nums[i]){
//             flag = true;
//         }
//         else{
//             flag = false;
//         }
//     }
//     return flag;
// }

int findUnsortedSubarray(vector<int>& nums) {
    // vector<pair<int,int>> temp;
    vector<int> temp;
    vector<int> g{1,2,3,4};
    if(is_sorted(nums.begin(),nums.end())){
        return 0;
    }
    else{
        int j = 0;
        while(j<nums.size()-1){
            if(nums[j+1]>=nums[j]){
                j++;
            }
            else{
                swap(nums[j+1],nums[j]);
                temp.push_back(j);
                j++;
            }
        }

        return temp[temp.size()-1]+1 - temp[0] +1;
    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
    
#endif

    fastio();
    vector<int> nums{1,2,3,4};
    cout<<findUnsortedSubarray(nums);

}


