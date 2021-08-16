# Things I learned in: Day_31_to_40/Day_37
**Note:** use the github provided TOC for navigaing.



1.  There is a character array, and you need to find word "pi" and replace that with "3.14". Now to do that we will need some extra space. As we need to accommodate "14" also in the char array.
2. given a wall of size of 4XN, and tiles of size (1,4) and (4,1). In how many ways you can build the wall.
3. Given N, friends who want to go to a part on a bike, Each guy can go as singal, or as a couple, find the number of ways in which N friends can go to the party. sample i/p = 3 sample o/p = 4
4. Count binary strings of length of N, which have No consecutive ones?(https://www.youtube.com/watch?v=7N8stua0bJo). I have not coded this cause the concept is same as fibonachi. And the base case is 

```cpp
if(n==1){
    return 2;
}
if(n==2){
    return 3;
}
```