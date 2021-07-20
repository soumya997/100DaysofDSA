# Things I learned in: Day_29
**Note:** use the github provided TOC for navigaing.

1. use map if you need to find any element from an array. It can do that in order 1 time.
Like, 

```cpp
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        // if you wanna find any element from the range of i to j
        // in the arr, u can use map. only one condition you need, insert the 
        // elements and its indexes in the map before hand.
        // check out the longest unique substring question,LC:3.
        // using count() function for finding the element. 
    }
}

```
2. The longest unique substring question,LC:3 is a dynamic sliding window problem,as the size of the window is not fixed.

```cpp
int i=0;
int j=0;

int max_len = 0;
int window_len = 0;
int start_window = -1;
if(s.length() == 0){
    return 0;
}
map<string,int> m;
while(j>s.length()){
    char ch = s[j];
    if(m.count(ch) and m[ch]>=j){
        i = m[ch]+1;
        window_len = j-1;
    }

    m[ch] = j;
    window_len++;
    j++;
    if(window_len>max_len){
        max_len = window_len;
        start_window = i;
    }
}
return max_len;
// return s.substr(start_windoe,max_len);
```
