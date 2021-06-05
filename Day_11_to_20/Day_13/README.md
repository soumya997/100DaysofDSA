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
Its binary tree, because it can have max two children for every parent node. one is called left child and right child.
non linear data structure/ hirerchical data structure.
e.g: file structure in a computer.

- here 8 is the parent; 10,3 is his children; 10 is parent and 1 and 6 is his children.
- sibling: children of the same parent. here 10,3 is sibling then 1,6 is sibling etc.
- leafnode: which dont have any children, eg 4,7 and 13.

### Build tree:
top down approach, algorithm is like,
1. build the root
2. recursively build left and right sub tree 
```cpp
// return type is node* as it will return address of the root node
node* buildTree(){ 
    int d;          //d means data
    cin>>d;

    if(d==-1){      // if the user encounters -1 then it will return NULL
        return NULL;
    }
    node * root = new node(d);  // creating the node 1st
    root->left = buildTree();   // here you are assigning the user input to 
                                // left sub tree
    root->right = buildTree();  // same as right
    return root;
}
```
### Preorder traversal of BT:
if any node is NULL, then return, else 1st print the root data then recursively call left subtree and right subtree to print the data. 
```cpp
void print_bt(node* root){
    if(root == NULL){       //if any node is NULL, then return
        return;
    }
    //otherwise root/data->left->right
    cout<<root->data;       // 1st print the root data
    print_bt(root->left);   //recursively call left subtree and right subtree 
    print_bt(root->right);  // to print the data.
}
```
### traversal of a binary tree:
**Tree Traversal**:
<br>
it is a process where we visit each node of a tree one times in some order.
here visiting means reading the data of the node.There are two type of tree traversal,
1. breadth first
    - Level order traversal
2. Depth first
    - Preorder -> <root>,<left>,<right>
    - Inorder -> <left>,<root>,<right>
    - Postorder -><left>,<right>,<root>

Code is as same as `Preorder` just ordering of the print is changed.
```cpp
void printIn(node*root){
    if(root==NULL){
        return;
    }
    //Otherwise Left -> data/Root-> Right
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}

void printPost(node*root){
    if(root==NULL){
        return;
    }
    //otherwise left->right->data/root
    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}
```

### Calculate height:
- Img
```cpp
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs)+1;
}
```
### Level order traversal:
- **printing kth level:** k is the level we want to print, and every time we pass the call to the children of the root, we reduce k by one(each step k = k-1), and when k will be equal to 1 then we will print the data of that node.
- **printing all level:** I guess code explains itself very accurately.
    - 1st calaculate the height
    - 2nd loop through each level and use `print_kth_level()` to print each level.
- complexity of this algorithm is O(N^2)
```cpp
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
```
### BFS for level order traversal:
- complexity is O(N), better than the recursive one

**this is how it works:**

- make a queue of the size of no of the nodes in the queue.
- queue 1st gets filled up by the root node, after that we pop it and push its children, then we gradually remove the children and push its own children in the queue, by doing this again and again you will finally travers all the nodes of the tree.
```cpp
void bfs(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        cout<<f->data<<", ";
        q.pop();
        if(f->left){            // if f->left is not NULL
            q.push(f->left);        
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return;
}
```
### Full code:
```cpp
#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){            // constructer
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

    print_kth_level(root,3);

    print_all_level(root);

return 0;
}
```
