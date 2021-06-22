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



int main(){
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    int t;
    cin>>t;
    while((t--)>0){
        int c1,c2,c3,c4;
        int numr,numc;
        cin>>c1>>c2>>c3>>c4;
        cin>>numr>>numc;
        int arr1[numr];
        int arr2[numc];
        debug(numr)
        for(int i=0;i<numr;i++){
            cin>>arr1[i];
        }
        for(int j=0;j<numc;j++){
            cin>>arr2[j];
        }
        int min1_r = 0;

        for(int r=0;r<numr;r++){
            min1_r += min(arr1[r]*c1,c2);
        }
        min1_r = min(min1_r,c3);

        int min1_c =0;
        for(int c=0;c<numc;c++){
            min1_c += min(arr2[c]*c1,c2);
        }
        min1_c = min(min1_c,c3);

        debug(min1_c)
        debug(min1_r)



        int ans = min(min1_r+min1_c,c4);

        cout<<ans<<nline;


        // calculating the min cost
          // Cost:
          //       \\ride\\   \\no. cab/rik\\   \\cost\\
          //           1        1(cab or rik)      c1
          //        unlimited   1(cab or rik)      c2
          //           ''            m/n           c3
          //           ''            m+n           c4

          //   single test case:
          //   1 3 7 19 -> c1,c2,c3,c4

          //   2 3 -> how many rikshwa and cab got used
          //           here its 2 rikshwa(r1,r2) and 3 cabs(cab1,cab2,cab3)

          //   2 5 -> r1 got used 2 times and r2 got used 5 times

          //   4 4 4 -> cab1,cab2 and cab3 got used 4 times each

          //   now the logic is,
          //   you can go either for c1 or c2 its like we need to find
          //   min between (no. of ride * c1) and c2, say main of this is min1
          //   min1 = sum from i=0 to i=no. of cab(min(no. of ride*c1),c2)
          //   now we need to know if min1 is less than c3 or not
          //   now, min2 = min(min1,c3)

          //   we need to calculate min2 for both cab and rik.
          //   say, min2_c + min2_r = min3

          //   After this we need to compare if min3 is less than c4 or not
          //   since, the answer would be min(min3,c4)

        /*
            Lessions learned:
                1. copy pasting code can be dangerous
                2. if you are doing arr[num], then always remember you should take the
                   input for num first then declare the array.
                3. try to reuse predefinde variables as much as possible.

        */


    }

}
