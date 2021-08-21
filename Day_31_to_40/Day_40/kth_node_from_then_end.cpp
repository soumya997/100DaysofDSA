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

class node{
public:
    int data;
    node*next;

    node(int d){
        data = d;
        next = NULL;
    }
    ~node(){
        if(next!=NULL){
            delete next;
        }
    }
};

void print_ll(node* head){   // at the print time we dont pass by reference
    while(head!=NULL){
        cout<<head->data<<", ";
        head = head->next;
    }
    cout<<endl;
}

void insert_head(node*& head,int d){    //passing by reference
    if(head == NULL){
        head = new node(d);             // creating node in dynamic memory
                                        // which only returns the address of
                                        // created node
        return;
    }

    node *n = new node(d);
    n->next = head;
    head= n;
}

node* take_input(){
    int d;
    cin>>d;                     // taking the data
    node* head = NULL;          // creating the head pointer

    while(d!=-1){              // - + untill user provides -1 as the input we ill keep taking input from user
        insert_head(head,d);   //   | and insert in the head(we can use other insert operations too)
        cin>>d;                //   | and take input from the user, which will eventually update d.
    }                          // - +
    return head;               // we return head as we are not taking head in the function input.
}


node* take_input_txt(){
    int d;
    node* head = NULL;

    cin>>d;
    while(d!=-1){
        insert_head(head,d);
        cin>>d;
    }

    return head;
}


ostream& operator<<(ostream &os,node* head){
    print_ll(head);
    return os;
}

istream& operator>>(istream &is, node*&head){
    head = take_input_txt();
    return is;
}


// reverse Linked List using recursion
void reverse_ll(node* &head){
    // think this is a ll: 1->2->3->NULL
    node* prev = NULL;
    node* c = head;
    node* n;
    while(c !=NULL){
        n = c->next;  // now n is pointing to 2
        c->next = prev;
        prev = c;
        c =n;
    }
    head = prev;
    return;
}

node* reverse_rec(node* &head){
    if(head=NULL or head->next == NULL){
        return head;
    }

    // do recurcive case
    node* shead = reverse_rec(head->next);
    node* temp = shead;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    head->next = NULL;
    temp->next = head;

    return shead;
}

// https://ide.codingblocks.com/s/610493
node* kth_element(node*&head,int k)
{
    node * slow = head;
    node * fast = head;
    while(k--)
    {
        fast = fast->next;
    }
    while(fast!=NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    node*head;
    cin>>head;
    cout<<head;
    cout<<nline;
    reverse_ll(head);
    cout<<head;
    // node*head2;

    // cin>>head2;
    // cout<<nline;
    // cout<<head2;
}
