# Things I learned in: Day_15
**Note:** use the github provided TOC for navigaing.
## Binary search tree:
### Building a BST:
- if the data is <= root then it will go to left of root, otherwise right.
- you check the inserted data is less than the root or not, if yes then put it at the right and return that nodes address, do the same for the right part(in case of right inserted data should be greater than root).
```cpp
node* insert_in_bst(node*root,int data){
    // Base case
    if(root==NULL){
        return new node(data);
    }
    //resursive case
    if(data<=root->data){
        root->left = insert_in_bst(root->left,data);
    }
    else{
        root->right = insert_in_bst(root->right,data);   
    }
}

node* build(){
    // read a list of number till -1 and also these numbers will be inserted into BST
    int d;
    cin>>d;
    node* root==NULL;
    while(d!=-1){
        root = insert_in_bst(root,d);
        cin>>d;
    }
    return root;
}
```
### BST searching:
- BST is very effecient in searching.
- complexity if O(H), in average case, in max case its O(N) in min case its O(logN).

```cpp
bool search(node*root,key){
    if(root==NULL){
        return false;
    }
    if(key==root->data){
        return true;
    }
    // recursive case
    if(key<=root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
```
### Deletion in BST:
it has mainly three case,
1. is the node has no children
2. if node has noly one children
3. if the node has two children

```cpp
node* delet_bst(node* root, int data){
    if(root==NULL){
        return NULL;
    }
    else if(data<root->data){
        root->left = delet_bst(root->left,data);
        return root;
    }
    else if(data==root->data){
        // found the node to delete 3 cases
        // 1st. Node has 0 children
        if(root->left==NULL && root->right==NULL){
            node* temp = root->left;
            delete root;
            return NULL;
        }
        //2. node has 2 children
        if(root->left!=NULL && root->right==NULL){
            node*temp = root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            node*temp = root->right;
            delete root;
            return temp;
        }
        //3. node has 2 children
        node *replace = root->right;
        // find the inorder successar from the right subtree
        while(replace->left!=NULL){
            replace = replace->left;
        }
        root->data = replace->daata;
        root->right = delet_bst(root->right,replace->data);
        return root;
    }
    else{
        root->right = delet_bst(root->right,data);
        return root;
    }
}
```
### check BST or not:
