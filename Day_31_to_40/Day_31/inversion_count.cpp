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

int merge(vector<int> &array,int s,int e){
    int i = s;
    int m = (s+e)/2;
    int j = m + 1;

    vector<int> temp;

    int cnt = 0;

    while(i<=m and j<=e){
        if(array[i] < array[j]){
            temp.push_back(array[i]);
            i++;
        }
        else{
            cnt += (m - i + 1);
            temp.push_back(array[j]);
            j++;
        }
    }

    //copy rem elements from first array
    while(i<=m){
        temp.push_back(array[i++]);
    }

    // or copy rem elements from second array
    while(j<=e){
        temp.push_back(array[j++]);
    }

    //copy back the eleemtns from temp to original array
    int k = 0 ;
    for(int idx = s; idx <=e ;idx++){
        array[idx] = temp[k++];
    }
    return cnt;
}

//sorting method
int inversion_count(vector<int> &arr,int s,int e){
    //base case
    if(s>=e){
        return 0;
    }
    //rec case
    int mid = (s+e)/2;
    int C1 = inversion_count(arr,s,mid);
    int C2 = inversion_count(arr,mid+1,e);
    int CI =  merge(arr,s,e);
    return C1 + C2 + CI;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    vector<int> arr{0,5,2,3,1};

    int s = 0;
    int e = arr.size()-1;
    cout<< inversion_count(arr,s,e) <<endl;

    cout<<endl;
    return 0;
}
