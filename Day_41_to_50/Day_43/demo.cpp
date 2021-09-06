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
#define fo(i,n) for(int i=0;i<n;i++) // for loop
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
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Code Below ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

void pattern_1(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j<=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern_2(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j>=6-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


void pattern_3(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


void pattern_4(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j<=6-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern_5(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=9;j++){
            if(j>=(6 - i) and j<=(4+i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern_6(){
    for(int i=1;i<=5;i++){
        int k=1;
        for(int j=1;j<=9;j++){
            if(j>=(6 - i) and j<=(4+i) and k){
                cout<<"*";
                k=0;
            }
            else{
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
}

void pattern_7(){
    for(int i=1;i<=5;i++){
        int k=1;
        for(int j=1;j<=9;j++){
            if(j<=(6 - i) or j>=(4+i)){
                cout<<"*";
            }

            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int kadens(vector<int> v){
    int cs = 0;
    int mx = INT_MIN;
    int left=0;
    int right=0;
    for(int i=0;i<v.size();i++){
        cs = cs + v[i];
        if(cs<0){
            cs = 0;
            left = i;
        }
        // mx = max(mx,cs);
        if(mx>cs){
            mx = mx;
        }
        if(cs>mx){
            mx = cs;
            right = i;
        }
    }

    debug(left);
    debug(right);

    return mx;
}

// template<typename T>
class stack{
private:
    vector<int> v;
public:
    /*
        1. push
        2. empty
        3. pop
        4. top
    */

    void push(int d){
        v.push_back(d);
    }

    bool empty(){
        return v.size()==0;
    }
    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];
    }
};


class queue{
    int *arr;
    int f,r,cs,ms;

public:
    Queue(int ds = 5){
        arr = new int(ds);
        cs = 0;
        ms = ds;
        f = 0;
        r = ms-1;
    }

    bool full(){
        return cs ==ms;
    }
    void push(int data){
        if(!full()){
            r = (r+1)%ms;
            arr[r] = data;
            cs++;
        }
    }

    ~Queue(){
        if(arr!=NULL){
            delete [] arr;
            arr =NULL;
        }
    }
};

class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left=right=NULL;
    }
};

node* build_tree(){
    int d;
    cin>>d;
    if(d=-1){
        return NULL;
    }

    node* root = new node(d);
    root->left = build_tree();
    root->right = build_tree();

    return root;
}

void print_kth_level(node* root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<",";
        return;
    }
    print_kth_level(root->left,k-1);
    print_kth_level(root->right,k-1);
    return;
}

int position(vector<int> v,int s,int e){
    int i = s-1;
    int j= s;
    int p = v[e];
    for(int i=0;i<=e;i++){
        if(v[i]<p){
            swap(v[i],v[j]);
            i++;
        }
    }
}


void quick_sort(vector<int> v,int s, int e){
    if(s>e){
        return;
    }

    int p = position(v,s,e);
    quick_sort(v,s,p-1);
    quick_sort(v,p+1,e);

}


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    // pattern_7();
    vector<int> v{-4,1,3,-2,6,2,-1,-4,-7};
    // cout<<kadens(v);
}
