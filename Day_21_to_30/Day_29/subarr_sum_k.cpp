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

int findSubarray(vector<int> nums, int sum)
{

    if(nums.size() == 1 and sum == 0){
            return 0;
    }
    // maintains the sum of the current window
    int windowSum = 0;

    // maintain a window `[low, high-1]`
    int low = 0, high = 0;
    int cnt = 0;

    int n = nums.size();

    // consider every subarray starting from the `low` index
    for (low = 0; low < n; low++)
    {
        // if the current window's sum is less than the given sum,
        // then add elements to the current window from the right
        while (windowSum < sum && high < n)
        {
            windowSum += nums[high];
            high++;
        }

        // if the current window's sum is equal to the given sum
        if (windowSum == sum)
        {
            cnt++;
        }

        // At this point, the current window's sum is more than the given sum.
        // Remove the current element (leftmost element) from the window
        windowSum -= nums[low];
    }

    return cnt;
}

int main(void)
{
    // an array of positive integers
    vector<int> nums = { 1,2,3 };
    int sum = 3;

    // int n = sizeof(arr)/sizeof(arr[0]);

    cout<<findSubarray(nums, sum);

    return 0;
}