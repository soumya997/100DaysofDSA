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
// #define len(arr) (sizeof(arr)/sizeof(int))
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Code Below ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

void bubble_sort(int v[]) {
    int n = 5;
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= (n - i - 1); j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

void selection_sort(int arr[]) {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void merge(vector<int> &v, int s, int e) {
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    while (i <= m and j <= e) {
        if (v[i] < v[j]) {
            temp.push_back(v[i]);
            i++;
        }
        else {
            temp.push_back(v[j]);
            j++;
        }
    }

    while (i <= m) {
        temp.push_back(v[i]);
        i++;
    }

    while (j <= e) {
        temp.push_back(v[j]);
        j++;
    }

    int k = 0;
    for (int m = s; m <= e; m++) {
        v[m] = temp[k++];
    }

}

void merge_sort(vector<int> &v, int s, int e) {
    /*
        merging two sorted array by getting the middle element
        using recursion.
    */
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    merge_sort(v, s, mid);
    merge_sort(v, mid + 1, e);

    merge(v, s, e);


}

void insertion_sort(vector<int> &v) {
    // use for loop to get the current element
    // if crr is less than the prev elements
    // move the previous elements to the array and until you the
    // the proper position for the curr element
    int n = v.size();
    // start the loop from the 1st position
    for (int i = 1; i < n; i++) {
        int e = v[i];       // getting the curr element
        int j = i - 1;
        while (j >= 0 and v[j] > e) {
            v[i] = v[j];
            j = j - 1;
        }
        v[j + 1] = e;
    }
}



// void swap(vector<int> &v,int i,int j){
//     int temp = v[j];
//     v[j] = v[i];
//     v[i] = temp;
// }

int position(vector<int> &v, int s, int e) {
    int i = s - 1;
    int j = s;
    int p = v[e];

    for (int j = s; j <= e; j++) {
        if (v[j] < p) {
            i++;
            // int temp = v[j];
            // v[j] = v[i];
            // v[i] = temp;
            swap(v[i], v[j]);
        }

    }
    // swap(v,e,i+1);
    swap(v[e], v[i + 1]);

    return i + 1;

}

void quick_sort(vector<int> &v, int s, int e) {
    // get the pivot
    // get the position of the pivot
    // sort the rest of the elements recursively
    /*
        points to remember,
        1. pass the vector using reference
        2. sort from 0 to p-1 and p+1 to n-1
        3. the position function is a single loop function
        4. avg time complexity  -> O(nlogn)
        5. worst time complexity is  -> O(n^2), can be optimized using
        randomized quick sort.
        6. its a inplace algorithm.
    */

    if (s >= e) {
        return;
    }

    int p = position(v, s, e);
    quick_sort(v, s, p - 1); // as the pivit will be at his proper position
    // so we dont need to sort it, thats why p-1 is used
    quick_sort(v, p + 1, e);


}

void counting_sort(vector<int> &v){
    int mx = maxall(v);
    // int *frq = new int[mx+1]{0};
    vector<int> temp(mx+1,0);
    for(int i=0;i<v.size();i++){
        temp[v[i]]++;
    }


    int j = 0;
    for(int k=0;k<=mx;k++){
        while(temp[k]>0){
            v[j] = k;
            temp[k]--;
            j++;
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("errorf.in", "w", stderr);
#endif

    fastio();
    /*
        1. bubble sort [x]
        2. selection sort [x]
        3. merge sort [x]
        4. insersion sort[x]
        5. counting sort[x]
        6. quick sort[x]
    */

    vector<int> v{4, 5, 1, 3, 2};
    int arr[] = {4, 5, 3, 2};
    // bubble_sort(arr);
    // selection_sort(arr);
    // merge_sort(v,0,4);
    // insertion_sort(v);
    counting_sort(v);

    // quick_sort(v,0,4);
    // int m = len(arr);
    print_vec(v);
    // for(auto k:arr){
    //     cout<<k<<",";
    // }
}
