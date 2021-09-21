# Things I learned in: Day_41_to_50/Day_46
**Note:** use the github provided TOC for navigaing.

# char and string

## taking input in char:

```cpp
//1st way 
char a[100];

// 2nd way
char a[10] = {'a','b','c'};
// this doesn't include the '\0' in the length
// thats why cout<<strlen(a) gives 5 as output;
cout<<a; // prints -> abck53kqkas which is `abc` with some garbage values
//                       --------
// to stop this we need to add '\0' as the last entry of the char array.
// we dont need this for string type of input like way 3.

// 3rd way 
char a[10] = "hello"; 
// this includes the '\0' in the length
// thats why cout<<strlen(a) gives 6 as output;

// 4th way: using cin.getline() to take input
// 1. define where to store the input
char a[1000];
cin.getline(a,1000);
// alternte of 4th way:
string s;
getline(cin,s);


/*
    special case for char
    >> if you cout the char variable(in our case it is `a`) it will give
    >> all the elements of the char, in case of int array it gives the base address 
*/
```

## string remove consecutive duplicates:
- a string is given with consicutive duplicates(eg: ccodding)
- and we need to get it back to normal or remove the duplicate charecters
- we need to do this in the same string, and perform an inplace operation
  to do so.

```cpp
int main(){
    const int n = strlen(s1);
    int prev = 0;               // keep a previous pointer(previous of current)
    for(int i=1;i<n;i++){       // start the loop from the 1th position
        if(s1[i] !=s1[i+1]){    // main point: 
                                    // if the two consicutive does not match up
                                    // then increment prev and copy the 
                                    // current element in the previous place 
            prev++;
            s1[prev] = s1[i];
        }
    }
    s1[prev+1] = '\0';          // put the '\0' in the prev+1 place.
}
```

