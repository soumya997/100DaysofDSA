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

// https://ide.codingblocks.com/s/609663

bool rat(char maze[][1001],int sol[][1001],int i,int j,int n,int m)
{
    if(i==n && j==m)
    {
        sol[n][m]=1;
        for(int i=0;i<=n;i++) //change
        {
            for(int j=0;j<=m;j++) //change
            {
                cout<<sol[i][j]<<" ";

            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

        if(i>n || j>m)
        return false;

        if(maze[i][j]=='X') //change
        return false;

        sol[i][j]=1;
        if(j+1<=m && maze[i][j+1]!='X')
        {
            bool right=rat(maze,sol,i,j+1,n,m);
            if(right)
            {
                return true;
            }
        }
        if(i+1<=n && maze[i+1][j]!='X')
        {
            bool down=rat(maze,sol,i+1,j,n,m);
            if(down)
            {
                return true;
            }
        }

        // bool right=rat(maze,sol,i,j+1,n,m);
        // bool down=rat(maze,sol,i+1,j,n,m);

        sol[i][j]=0;

        // if(right || down){
        //     return true;
        // }


        return false;

}
int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    int n,m;
    cin>>n>>m;

    char maze[1001][1001];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>maze[i][j];
        }
    }
    int sol[1001][1001]={0};

   bool ans= rat(maze,sol,0,0,n-1,m-1);
   if(ans==false)
   cout<<"-1"<<endl;
    return 0;
}
