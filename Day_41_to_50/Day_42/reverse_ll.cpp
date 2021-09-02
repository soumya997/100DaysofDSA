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
class node{
public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = NULL;
    }
};

void insert_head(node* &head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    node* n = new node(d);
    n->next = head;
    head = n;
}
// 2nd best
node* reverse_ll(node* head){
    if(head == NULL or head->next==NULL){
        return head;
    }
    node* shead = reverse_ll(head->next);
    head->next->next = head;
    head->next = NULL;
    return shead;
}
// 2nd best
node* rec_rev(node* head){
    if(head->next == NULL){
        return head;
    }

    node* shead = rec_rev(head->next);
    head->next->next = head;
    head->next = NULL;
    return shead;
}

// best one
node* reverse_rec(node* head){
    if(head->next == NULL){
        return head;
    }
    // do recurcive case
    node* shead = reverse_rec(head->next);
    node* temp = shead;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return shead;
}

void print_ll(node* head){
    while(head !=NULL){
        cout<<head->data<<",";
        head = head->next;
    }
}

void rev_print_ll(node* head){
    if(head->next == NULL){
        cout<<head->data<<",";
        return;
    }
    rev_print_ll(head->next);
    cout<<head->data<<",";
}

// int rec_sum(node* head,int s){
//     if(head == NULL){
//         return 0;
//     }

//     // s += head->data;
//     return (head->data) + rec_sum(head->next,s);
// }

void rec_sum_1(node* head,int &s){
    if(head==NULL){
        return;
    }
    s = s + (head->data);
    rec_sum_1(head->next,s);
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    node* head =NULL;
    insert_head(head,1);
    insert_head(head,2);
    insert_head(head,3);
    insert_head(head,4);

    // print_ll(head);
    // cout<<nline;
    // rev_print_ll(head);
    // node* n = rec_rev(head);
    // // Reverse(head);
    // cout<<nline;
    // print_ll(n);
    int sum=0;
    rec_sum_1(head,sum);
    cout<<sum;
}
