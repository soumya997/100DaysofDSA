# Things I learned in: Day30
**Note:** use the github provided TOC for navigaing.

# Bit mapulation:
There are mainly three types of operators,
- &  -> AND
- |  -> OR
- ~  -> NOT
- ^  -> XOR


### AND gate: 

its like both bit must be 1 to get o/p 1. 
```
1 & 1 = 1
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0
```
### OR gate:

its like if one of the two bits is 1 then it will o/p 1. 

```
1 | 1 = 1
1 | 0 = 1
0 | 1 = 1
0 | 0 = 0
```

### XOR: Exclusive OR
exactly one bit is 1.
```
1 ^ 1 = 0
1 ^ 0 = 1
0 ^ 1 = 1
0 ^ 0 = 0
```

**example:**

5^7 = 2
101
111
___
010 = 2

**Property:**
1. 5^5 = 0
2. 5^7^5 = 7, as both the  will cancel each other.

### NOT:
flip all bits, ~1 = 0 and ~0 = 1.

## Shift operator:
there are only two shift operators,
1. `>>` right shift
2. `<<` left shift

####  `<<` left shift:

####  `>>` right shift:

### Detect even and odd number in order 1 time:
the numbers which are odd generally has 1 at the last bit.
say, 5 = 101, the last bit 1(1 which is near to the comma).
reason:
```
 1   0   1   0   1
2^4 2^3 2^2 2^1 2^0
 the last bit has 2^0 which is equal to 1, means that makes the whole sum odd, coz except that every other 2^n is even.         
```

So, if the result of `a=5, a & 1` is 1 then the a is odd, else even.

```cpp
int a = 6;
cout<<(a&1);
```

#### Find ith bit:
there will be a number given say, 5 and you wanna know what is the 2nd bit is, wheather the 2nd bit is 1 or 0. 

```
create a mask, using left shift operator, say the number is 5 nd you wanna create a mask of that to find the 2nd element, so doing 1 << 2 will give you `000100`.

Now use 000100 and 000101 to find the ith bit. 
 000101
 000100
&
________
000100

now if the output is greater than 1,then its 1 other wise its 0. 
```

```cpp
int a = 5;
int i=2;
int mask = 1<<2;
int ans = (a & mask)>0?1:0;
cout<< ans;
```





