# Charecter array:
```cpp
int main(){
    char char_array1[] = {'a','b','c','d','\0'};
    cout<< char_array1;   //abcd

    char char_array2[] = {'x','y','z'};
    cout<<char_array2;    //xyzabcd

    char char_array3[] = "xyz"; 
    cout<<char_array3;    //xyz
}
```

Wile creating an charecter array always put a `\0` charecter at the end other wise it will store garbage. Thats why in the end case we got `xyzabcd` instade of `xyz`.

# `cin.getline()` method:
You cant just use `cin` to take a whole sentance as input as cin dont excepts spaces, so if it get any space in the input it terminates the input right there. Here comes `cin.getline()` comes to help. 
it take some arguments,
- 1st the name of the char array
- 2nd the max length of the char array
- (optional) the Delimiter (e.g. '\0','$' etc.)


# String:
- string contains char array internally.
```cpp
int main(){
    string s1 = "hello world";
    char arr[] = {'h','e','l','l','o','\0'};

    string s2(arr);
    cout<< s2;              // hello
}
```
- check a array is empty or not.
```cpp
int main(){
    string s1 = "hello world";
    if(s1.empty()){          // returns bool value
        cout<<"its empty";
    }

}
```
- append a string with a string,
```cpp
int main(){
    string s1 = "hello world";
    s1.append(" its soumyadip");
    cout<<s1;                // hello world its soumyadip
}
```
- clear all charecter from a string,
```cpp
int main(){
    string s1 = "hello world";
    cout<<s1.length();                 // 11
    s1.clear();
    cout<<s1.length();                // 0
}
```
- compare two strings,
```cpp
int main(){
    string s1 = "hello world";
    cout<<s1.compare(s1);  //0
    string s2 = "wejofnjsafnlds";
    cout<<s1.compare(s2);  // some value may be -ve or +ve
}
```
you can also use less than and greater than operators to compare. This comparison happens lexographically.

- find and remove a substring
```cpp
int main(){
    string s1 = "hello world";
    int idx = s1.find("world");
    cout<<idx<<endl;            // 7
    // erase
    string word = "world";
    int len = word.length();
    s1.erase(idx,len+1);
    cout<<s1<<endl;            // "hello "
    
}
```








