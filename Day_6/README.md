
# things I learned in Day 6:
**Note:** use the github provided TOC for navigaing.


## `rotate()` function:
- rotate an array from a perticular element, say, there is an array {1,4,2,5,6} and you want to rotate it by the middel element(which is 2).so if you pass that array through `rotate()` then it will give you {2,5,6,1,4}.

<p align="center">
    <img src="../imgs/rotate.png">
</p>

```cpp
int main(){
    int arr[] = {1,2,10,4,14,41,-5};
    int n = 7;
    
    rotate(arr,arr+3,arr+n);            

    for(int i=0;i<n;i++){
        cout<<arr[i];                   //4, 14, 41, -5, 1, 2, 10, 
    }

}
```

## use `next_permutation()` function:
- use this func to rearrange the elements of an array.
```cpp
int main(){
    int arr[] = {1,2,3};
    int n = 3;
    
    next_permutation(arr,arr+n);            

    for(int i=0;i<n;i++){
        cout<<arr[i];                   //1,3,2 
    }

}

```

## use `swap()` func:
```cpp
int main(){
    int a=2;
    int b=7;

    swap(a,b);                  // swap the elements of a,b

    cout<<a<<" "<<b;
}
```

## use `min()` and `max()`:
- `min()` gives the min element b/w a and b.
- `max()` gives the max element b/w a and b.
```cpp
int main(){
    int a=2;
    int b=7;

    int min = min(a,b);                  // gives the min element b/w a and b

    int max = max(a,b);                  // gives the max element b/w a and b
    
    cout<<min;
    cout<<max;
}
```

## use `reverse()` func:
- reverse a sub part of an array or the whole array.
```cpp
int main(){
    int arr[] = {1,2,3};
    int n = 3;
    
    reverse(arr,arr+n);                  // reverses the whole array
    reverse(arr,arr+2);                  // reverses 1st two elements of the arr
    

}
```

## `pair` class:
- pairs are use full container for storing heteroginious elements.
```cpp
int main(){
                                        
    pair<int,char> p;                                  //1st way
    p.first = 10;                  // access the 1st elements using p.firse
    p.second = 'B';                // access the 2nd elements using p.second

    
    pair<int,char> p2(p);                              //2nd way
    cout<<p2.first<<" "<<p2.second;

    
    pair<int, string> p3 = make_pair(100,"group");     //3rd way

    
    pair<pair<int,int>,string> car;                    //4th way
    car.second = "tata";
    car.first.first = 100;
    car.second.second = 200;

}

```
# vector:
 
