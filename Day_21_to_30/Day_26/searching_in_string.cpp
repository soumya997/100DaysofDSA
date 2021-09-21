// https://youtu.be/8ymiMHQPgZY
#include<bits/stdc++.h>
// #include <iostream>
// #include<string>
// #include <vector>
// #include<set>
// #include<map>

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

int space_count(char word[]){
    int cnt = 0;
    for(int i=0;i<strlen(word);i++){
        if(word[i] == ' '){
            cnt++;
        }
    }
    // cout<<cnt;
    return cnt;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    char word[100]= "hello world, how are you?";
    /*
    // U also can use replace all method doing the problem.

    for(int i=0;i<word.length();i++){
        if(word[i] == ' '){
            word.replace(i,1,"%20");
        }
    }
    */


    /*
        Below method:
        1. we expect there there is extra space,
        2. we count the length of the final array
        3. we need to understand that if we replace
           the spaces with '%20' then we will need 2 extra
           spaces for all the space(eg, ' ').
           eg: 'abc d', in this case length of the final array
           would be 2*1+5=7 where 2-> extra two spaces, 1->one
           space present in the string, and total 5 elements are
           there in the string(ncluding the space).
        4. then if you find space in the ith element,then
           replace i+1,i+2 and i+3 by '0','2' and '%' respectively.
           else, copy the ith element in the expended portion.
    */
    /*
        analysis:

        1. some qsn might seem like string problem, but they are easy
        to solve using char.
        2. if you find a space then moving each elemnts two place backward
           is a time consuming operation.thats why we are following the below
           approach
    */
    int cnt = 0;
    for(int i=0;i<strlen(word);i++){
        if(word[i]==' '){
            cnt++;
        }
    }
    int num = 2*cnt+strlen(word);
    word[num] = '\0';
    for(int i=strlen(word)-1;i>=0;i--){
        if(word[i] == ' '){
            word[num-1] = '0';
            word[num-2] = '2';
            word[num-3] = '%';
            num = num-3;
        }
        else{
            word[num-1] = word[i];
            num--;
        }
    }

    cout<<word;

}
