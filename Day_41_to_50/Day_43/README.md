# Things I learned in: Day_41_to_50/Day_43
**Note:** use the github provided TOC for navigaing.


# Majority Element:
O(N) time complexity with `Moore's algorithm` in c++, added explanation.

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0],cnt=1;            // assuming the 1st element is the majority element, so I have increased the count by 1
        for(int i=1;i<nums.size();i++){
            // 1,2,1  -->take it as an example
            if(nums[i] == ele){     // if we found same element consicutively then we will increase the count by doing cnt++
                cnt++;  
                ele = nums[i];      // and update the ele as nums[i]
            }
            else{                   // if the consicutive elements are not similar then increase the cnt and update the new distinct element only if the current count is zero, else decrease the cnt(this is because moores algorithm proposes to cancel elements if they are dissimilar) and we are not updating the ele at this time because cnt is not zero, means there are a majority element already exists.
                if(cnt==0){
                    ele = nums[i];
                    cnt++;
                }
                else{
                    cnt--;
                }
            }
        }

        return ele;                 // return the majority element
    }
};
```

# 1351. Count Negative Numbers in a Sorted Matrix - LeetCode
count_negetive_number.cpp

# majority element
https://leetcode.com/problems/majority-element/