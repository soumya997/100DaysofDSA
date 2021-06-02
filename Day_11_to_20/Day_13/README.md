# Things I learned in: Day_13
**Note:** use the github provided TOC for navigaing.

# Queue:
- simple/physical example is queue at the ATM,Bank,food stall etc. 
- It works in FIFO(first in first out) order.
- push happens from the back and pop happens from the front.

```cpp
#include <iostream>
#include <array>
#include <span>
#include <string>
using namespace std;

class queue{
    int *arr;
    int f,r,cs,ms;
public:
    queue(int ds=5){
        arr = new int[ds];
        cs = 0;
        ms=ds;
        f=0;
        r=ms-1;
    }
    bool full(){
        return cs==ms;
    }
    bool empty(){
        return cs==0;
    }
    void push(int data){
        if(!full()){
            r = (r+1)%ms;
            arr[r] = data;
            cs++;
        }
    }
    void pop(){
        if(!empty()){
            f = (f+1)%ms;
            cs--;
        }
    }
    int front(){
        if(!empty()){
            return arr[f];
        }
    }
    ~queue(){
        if(arr!=NULL){
            delete [] arr;
            arr=NULL;
        }
    }
};

int main(){
    queue q(100);
    for(int i=0;i<6;i++){
        q.push(i);
    }

    q.pop();
    q.pop();

    q.push(34);

    while(!q.empty()){
        cout<<q.front()<<", ";
        q.pop();

    }
}
```
## queue implelntation using Linkedlist;
- If we use linkedlist for creating the queue then its not possible that a queue will be full.
```cpp
#include<list>      // doubly Linkedlist
class queue{
    int cs;
    list<int> l;
private:
    queue(){
        cs = 0;
    }
    bool is_empty(){
        return cs==0;
    }
    void push(int data){
        l.push_back(data);
        cs++;
    }
    void pop(){
        if(!is_empty()){
            l.pop_front();
            cs--;
        }
    }
    int front(){
        l.front();
    }
};
int main(){
    queue q;
    for(int i=0;i<6;i++){
        q.push(i);
    }

    // q.pop();
    // q.pop();

    // q.push(34);

    while(!q.is_empty()){
        cout<<q.front()<<", ";
        q.pop();

    }
}
```

## Queue STL:
ordering process in amazon, first order gets served first.
```cpp
int main(){
    queue<int> q;
    for(int i=0;i<6;i++){
        q.push(i);
    }

    q.pop();
    q.pop();

    q.push(34);

    while(!q.is_empty()){
        cout<<q.front()<<", ";
        q.pop();

    }
}
```
## Binary Tree:
Its binary tree, because it can have only two children. one is called left child and right child.
non linear data structure/ hirerchical data structure.
e.g: file structure in a computer.

- here 8 is the parent; 10,3 is his children; 10 is parent and 1 and 6 is his children.
- sibling: children of the same parent. here 10,3 is sibling then 1,6 is sibling etc.
- leafnode: which dont have any children, eg 4,7 and 13.


```cpp
#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void print(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

void printIn(node*root){
    if(root==NULL){
        return;
    }
    //Otherwise Left Root Right
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}

void printPost(node*root){
    if(root==NULL){
        return;
    }
    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs)+1;
}
void print_kth_level(noe*root,int k){
    if(root==NULL){
        return;
    }
    if(k=1){
        cout<<root->data<<" ";
        return;
    }
    print_kth_level(root->left,k-1);
    print_kth_level(root->right,k-1);
    return;
}
void print_all_level(node*root){
    int H = height(root);
    for(int i=1;i<=H;i++){
        print_all_level(root,i);
        cout<<endl;
    }
    return;
}
int main(){ 
    node* root = buildTree();
    print(root);
    cout<<endl;

    printIn(root);
    cout<<endl;
    printPost(root);

    cout<<height(root);

    print_kth_level(root,3)

    print_all_level(root);

return 0;
}
```
