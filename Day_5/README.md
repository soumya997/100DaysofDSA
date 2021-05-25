# What I learned on the Day 5:


## Use of `find()` function:
- find a element/key from an array
```cpp
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int key = 4;

    auto it = find(arr,arr+n,key);      // returns the address of the key
    int idx = it-arr;                   // if you substract the address by the 
                                        // base then you will get the idx of key
    cout<<idx;                          // prints the index of key

    
    // find any element is not present
    if(idx==n){
        cout<<"adsent";
    }
    else{
        cout<<"present";
    }
}
```
1. as `find` returns address of the key so you can also recieve it using `*int` as the array is of int type.
2. if you substract the address by the base then you will get the idx of key.
3. it returns address of last element of the array if the **key is not present in the array**.so, if you substract that with the base address of array then you will get the length of the array.
4. this can be used for vectors too.

## use of `binary_search()`:
```cpp
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int key = 4;

    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }
}
```
1. instade of using `find`, u can also use `binary_Search()` for finding if any element present or not. 

## use `lower_bound()` and `upper_bound()`:
```cpp
int main(){
    int arr[] = {1,2,3,4,4,4,5};
    int n = 7;
    int key = 4;

    // lower bound
    auto lb = lower_bound(arr,arr+n,key);     // gives the address of the 1st
                                              // occurence element that is 
                                              // >=key
    cout<<(lb-arr)                            // prints index of lower bound 
                                              // of 4, which is 3(1st occ or 4).

    //upper bound
    auto ub = upper_bound(arr,arr+n,key);     // gives the address of the 1st
                                              // occurence element that is 
                                              // >key 
    cout<<(ub-arr);                           // prints index of upper bound 
                                              // of 4, which is 6(idx of 5).

    //calculate the frequency of the key
    cout<<ub-lb;                              // prints the frequency of key 
}
```

- use `lower_bound` to get the 1st occurence of the key.
- use `upper_bound` to get the 1st element that is greater than key.
- substract both of them and get the occurence of the key.

## Use `sort()` function:
- to sort in increasing order
```cpp
int main(){
    int arr[] = {1,2,10,4,14,41,-5};
    int n = 7;
    
    // use sort() to sort in increasing order
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
```
- to sort in decreasing order
```cpp
// this function tells the sort() func that 
// we want decreasing order
bool compare(int a,int b){
    return a>b;
}

int main(){
    int arr[] = {1,2,10,4,14,41,-5};
    int n = 7;
    
    // use sort() to sort in decreasing order
    sort(arr,arr+n,compare);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
```
- `sort()` and other above funcs also takes almost same type of input.
1st argument is start (base address), 2nd argument is end(address of last element+1), 
- sort func is start is included but end is excluded, so we pass `arr+n`. 




