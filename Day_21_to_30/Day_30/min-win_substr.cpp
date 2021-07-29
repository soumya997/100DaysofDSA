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

int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    // 1st init i and j then start moving i,is the desired charecter
    // frequency is achieved then stop i and start moving j
    // if again the freq is less then move i.
    // start storing the strings as j moves.


    string s = "ADOBECODEBANC";
    string t = "ABC";
    string ans = "";
    int cnt=0;
    unordered_map<char,int> mp;
    unordered_map<char,int> mp2;

    for(int i=0;i<t.length();i++){
        mp[t[i]]++;
    }

    int j=0;
    int lettercount=0;
    int min_len = INT_MAX;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(mp.find(s[i])!=mp.end()){
            mp2[s[i]]++;
            if(mp2[s[i]]<=mp[s[i]]){
                lettercount++;
            }
        }


        if(lettercount>=t.length()){
            while(mp.find(s[j])==mp.end() || mp2[s[j]]>mp[s[j]]){
                mp2[s[j]]--;
                j++;
            }
            if(i-j+1<min_len){
                min_len = i-j;
                ans = s.substr(j,i);
            }
        }
    }

    for(auto p:mp2){
        cout<<p.first<<","<<p.second<<endl;
    }
    cout<<ans;
}

int main1(){
    string s = "ADOBECODEBANC";
    string t = "ABC";
    unordered_map<char,int> map1;
    unordered_map<char,int> map2;
    int check=INT_MAX;
    string result;
    for(char &ch:t)map1[ch]++;
    int slow=0,fast=0,lettercounter=0;
    for(;fast<s.length();fast++)
    {
        char ch=s[fast];
        if(map1.find(ch)!=map1.end())
        {
            map2[ch]++;
        if(map2[ch]<=map1[ch])
            lettercounter++;
        }
        if(lettercounter>=t.length())
        {
            while(map1.find(s[slow])==map1.end()||map2[s[slow]]>map1[s[slow]])
            {
                map2[s[slow]]--;
                slow++;
            }
            if(fast-slow+1<check)
            {
                check=fast-slow+1;
                result=s.substr(slow,check);
            }
        }
    }
    // for(auto p:map2){
    //     cout<<p.first<<","<<p.second<<endl;
    // }
    cout<<result;
}






















