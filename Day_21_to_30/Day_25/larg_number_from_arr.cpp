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
#define str_to_int(x) stoi(x) // converts a string to an int
#define check_all_zero(v) all_of(v.begin(), v.end(), [](int i) { return i==0; })


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
//https://leetcode.com/problems/largest-number/discuss/1270419/A-big-edge-case-revealed!!-Fully-explained-code!
static bool cmp(string a,string b){
    return a+b > b+a;
}
string largestNumber(vector<int>& nums){
    vector<string> strcontain;
    for(int i : nums)  strcontain.push_back(to_string(i)); //convert all nums to char/string
    sort(strcontain.begin(),strcontain.end(),cmp);
    // print_vec(strcontain);
    cout<<nline;
    string result;
    for(int i=0;i<strcontain.size();i++)  result+=strcontain[i];
    // print_vec()
    // if you dont write this line the for i/p [0,0] output will be
    // "00" but expected is "0"
    string res = result[0]=='0'? "0" : result;
    // cout<<result[0]<<nline;
    return res;
}
string largest_number(vector<int>& nums) {
        int x = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                x++;
            }
        }
        if(x==nums.size()){
            return "0";
        }
        vector<string> str(nums.size(),"");
        for(int i=0;i<nums.size();i++){
            str[i] = to_string(nums[i]);
        }

        sort(str.begin(),str.end(),cmp);
        string s = "";
        for(int i=0;i<str.size();i++){
            s = s+str[i];
        }

        return s;
}
string largest_num(vector<int> arr){
    if(check_all_zero(arr)){
        return "0";
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i])
        for(int j=i+1;j<arr.size();j++){
            string num1 = to_string(arr[i]);
            string num2 = to_string(arr[j]);
            if(str_to_int(num1+num2)>str_to_int(num2+num1)){
                continue;
            }
            else if(str_to_int(num1+num2)<str_to_int(num2+num1)){
                swap(arr[j],arr[i]);
            }
        }
    }
    string ans = "";
    for(auto i:arr){
        ans = ans + to_string(i);
    }

    return ans;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    vector<int> arr{0,0,0};
    cout<<largest_num(arr);
}
