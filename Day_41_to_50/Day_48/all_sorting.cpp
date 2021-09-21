// https://youtu.be/8ymiMHQPgZY
// https://github.com/darkprinx/ACM-SOLUTION/blob/master/Spoj%20Solutions/FILRTEST%20-%20File%20Recover%20Testing.cpp
#include<bits/stdc++.h>

using namespace std;


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


void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

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
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i=0;i<n;i++) // for loop
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
#define print_vec(x) for(auto i:x) cout<<i<<" "; // prints elements of an int vector
#define check_all_zero(v) all_of(v.begin(), v.end(), [](int i) { return i==0; })
#define eps 1e-9
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define check_sorted(v) is_sorted(all(v)) // to check a vector is sorted or not

#define str_to_int(x) stoi(x) // converts a string to an int
#define str_to_char(buffer,str) strcpy(buffer,str.c_str())// convert str to char
#define char_to_str(chr) string(chr); // convert char to str
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Code Below ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//


void bubble_sort(vector<int> &v){
    int n = v.size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<(n-i-1);j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

void selection_sort(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }

}

void merge(vector<int>&v,int s,int e){
    int i = s;
    int mid = (s+e)/2;
    int j = mid+1;

    vector<int> temp;
    while(i<=mid and j<=e){
        if(v[i]<=v[j]){
            temp.push_back(v[i]);
            i++;

        }
        if(v[j]<=v[i]){
            temp.push_back(v[j]);
            j++;
        }

    }

    while(i<=mid){
        temp.push_back(v[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(v[j]);
        j++;
    }

    int idx = 0;
    for(int k=s;k<=e;k++){
        v[k] = temp[idx++];
    }
}


void merge_sort(vector<int> &v,int s,int e) {
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
    merge_sort(v,s,mid);
    merge_sort(v,mid+1,e);

    merge(v,s,e);
}

int partition(vector<int> &v,int s,int e){
    int pivot = v[e];
    int i = s-1;

    for(int j=s;j<e;j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[e]);
    return i+1;
}

void quick_sort(vector<int> &v,int s,int e){
    if(s>=e){
        return;
    }

    int p = partition(v,s,e);
    quick_sort(v,s,p-1);
    quick_sort(v,p+1,e);

}

void insertion_sort(vector<int> &v){
    // int i=0;
    int n = v.size();
    for(int i=1;i<n;i++){
        int  j = i-1;
        int c = v[i];
        while(j>=0 and v[j]>c){
            v[i] = v[j];
            j--;
        }
        v[j+1] = c;
    }

}


int cal(vector<vector<int>> v,int i1,int j1,int i2,int j2){
    int left = abs((i1+1) - (i2+1));
    int right = abs((j1+1)-(j2+1));
    debug(left);
    debug(right);
    int res = v[i1][j1] + v[i2][j2] - left - right;
    return res;
}




int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    /*
        1. bubble sort [x]
        2. selection sort [x]
        3. merge sort[x]
        4. insersion sort[x]
        5. quick sort[x]
    */

    int n;
    cin>>n;

    vector<vector<int> > v;
    int val;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            cin >> val;
            temp.push_back(val);
        }
        v.push_back(temp);
        temp.clear();
    }

    // int mx = INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         for(int k=i;k<n;k++){
    //             for(int l=j;l<n;l++){
    //                 debug(l);
    //                 debug(k);
    //                 int curr_res = cal(v,i,j,k,l);
    //                 mx = max(mx,curr_res);
    //             }
    //         }
    //     }
    // }

    // cout<<mx<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         for(int k=i;k<n;k++){
    //             for(int l=j+1;l<n;l++){
    //                 debug(l);
    //                 debug(k);
    //                 // cout<< v[i][j]<<endl;
    //                 cout<<v[k][l]<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
