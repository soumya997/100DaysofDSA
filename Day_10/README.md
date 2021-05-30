# Things I learned in: Day_9
**Note:** use the github provided TOC for navigaing.

# Linked List:
- LL is not a linear data structure.
- everytime you get a new data point you allocate a small chunk of memory, and store your data in it.
- we also store the ordering in which the data is comming
- For storing both the data and the ordering we use a custom data structure that we called a `node`.
- `Node` is devided into two parts,
    1. where data gets stored
    2. where address(ordering) gets stored.
- And a LL is formed like below, 
- `Some times we also need to store the address of the tail done` for doing any kind of operation with the end of the linked List(e.g updating the tail node).

## Linked List implementation:
### object oriented approach:
```cpp
class node(){
public:
    int data;
    node* next;
 
    //constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

// linked list class
class linked_list(){
    node* head;
    node* tail;
public:
    void insert(int d){

    }
    ...
    ...
}
int main(){
    
    return 0;
}
```
### only function:
```cpp
//defining the node
class node(){
public:
    int data;
    node* next;
 
    //constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

//passing by reference
void insert_head(node*& head,int d){
    if(head == NULL){
        head = new node(d);
        return;
    }

    node *n = new node(d);
    n->next = head;
    head= n;
}
void insert_tail(node*&head,int data){

    if(head==NULL){
        head = new node(data);
    }
    else{
        node*temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new node(data);
    }
}
int length(node *head){
    int len=0;
    while(head){
        len++;
        head = head->next;
    }
    return len;
}

void insert_middle(node*&head,int data,int p){

    if(p==0){
        insert_head(head,data);
        return;
    }
    else if(p>=length(head)){
        insert_tail(head,data);
        return;
    }
    else{
        node*temp = head;
        int jump = 1;
        
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        node*n =  new node(data);
        n->next = temp->next;
        temp->next = n;
    }
    return;
}

// printing the ll
void print_ll(node* head){
    while(head!=NULL){
        cout<<head->data<<", ";
        head = head->next;
    }
    cout<<endl;
}

void delete_head(node* head){
    node* temp = head->next;
    delete head;
    head = temp;
}

node* search_recursion(node*head,int key){
    if(head==NULL){
        return NULL;
    }
    if(head->data==key){
        return head;
    }
    else{
        return search(head->next,key);
    }
}

bool search_recursion_bool(node*head,int key){
    if(head==NULL){
        return false;
    }
    if(head->data==key){
        return true;
    }
    else{
        return search(head->next,key);
    }
}

bool search(node* head,int key){
    node* temp = head;
    while(temp->next==NULL){
        if(head->data == key){
            return true;
        }
    }
    return false;
} 

node* take_input(){
    int d;
    cin>>d;
    node* head = NULL;

    while(d!=-1){
        insert_head(head,d);
        cin>>d;
    }
    return head;
}
// take input from input.txt
node* take_input_txt(){
    int d;
    node* head = NULL;

    while(cin>>d){
        insert_head(head,d);
    }

    return head;
}


// driver code
int main(){
    node* head = NULL;
    insert_head(head,1);
    insert_head(head,2);
    insert_head(head,3);
    insert_head(head,4);
    
    print_ll(head);                     // prints-> 4, 3, 2, 1,
    delete_head(head);                  // prints-> 3,2,1,
}
```









 




























# terms to remember:
1. dereference, we use it in pointer to get the value
2. when we pass by a variable reference using `&` in the function(e.g-> fun(int& age)), then it updates the value for the main function if any operation happens with the variable.  
