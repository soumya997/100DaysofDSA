# Things I learned in: Day_12
**Note:** use the github provided TOC for navigaing.

# Stack Data structure:
It follows LIFO order, which means Last in first out. Whcih means that the element that had been inserted last will come out first. Here we add element from the top and remove element from the top.

```cpp
class Stack{
private:
    vector<int> v;    
public:
    void push(int data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
             v.pop_back();
        }
    }
    int top(){
        return v[v.size()-1];
    }
};

int main() {
    Stack s;

    for(int i=1;i<=5;i++){
        s.push(i*i);
    }
    //Try to print the content of the stack by popping each element
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    

return 0;
}
```

## Using template for creating the class:
- it is a stack of multiple data type, means if you do `Stack<int,char> S` this means we have a stack that can hold integer type as well as charecter type data.
```cpp
template<typename T,typename U>
class Stack{
private:
    vector<T> v; 
    vector<U> v2;   
public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
             v.pop_back();
        }
    }
    T top(){
        return v[v.size()-1];
    }
};

int main() {
    Stack<char,int> s;

    for(int i=65;i<=70;i++){
        s.push(i);
    }
    //Try to print the content of the stack by popping each element
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
```

## Stack STL:
```cpp
#include <iostream>
#include<stack>
using namespace st;

int main(int argc, char const *argv[])
{
    stack<int> s;
    for(int i=0;i<=5;i++){
        s.push(i);      // push is used to push an element in the stack 

    }
    // loop
    while(!s.empty()){   // using empty to check that the stack is empty or not
        
        cout<<s.top()<<", "; // top is used to get the top most element
        s.pop();             // pop is used to pop out a element(we know it 
                             // works in LIFO order)
    }
    return 0;
}
```
