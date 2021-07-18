# Things I learned in: Day_26
**Note:** use the github provided TOC for navigaing.

# String STL:
### str.find() function:
string `find()` is different than the array/vector `find()` finction.

string `find()`: 

here we are finding the 1st and the 2nd occurence of sub-string.

```cpp
int main(){

    string paragraph = "We are learning about STL strings. STL string class is quite powerful";

    string word;
    getline(cin,word);

    //find function
    int index =  paragraph.find(word);
    if(index!=-1){
        cout <<"first occ" <<index;
    }
    index = paragraph.find(word,index+1);
    if(index!=-1){
        cout<<"second occ "<<index <<endl;
    }
    return 0;
}
``` 

good source: https://www.geeksforgeeks.org/string-find-in-cpp/

### Function parameters:

- str : The sub-string to be searched.
- s : The sub-string to be searched, given as C style string.
- pos : The initial position from where the string search is to begin.
(here index+1 in the 12th line refers that start finding the sub-string from index+1 index).

## Function Return:

The function returns the index of the first occurrence of sub-string, if the sub-string is not found it returns string::npos(string::npos is static member with value as the highest possible for the size_t data structure).


### `find()` in array/vector:

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

## string `str.substr()` function:

```cpp
int main() {
    string word = "hello";
    cout<<word.substr(0,2);
}
>>> he
```