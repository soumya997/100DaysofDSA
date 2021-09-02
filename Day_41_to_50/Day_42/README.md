# Things I learned in: Day_41_to_50/Day_42
**Note:** use the github provided TOC for navigaing.


# std::search_n:

https://www.geeksforgeeks.org/stdsearch_n-with-example-in-cpp/
```cpp
// C++ program to demonstrate the use of std::search_n

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, j;

    // Declaring the sequence to be searched into
    vector<int> v1 = { 1, 2, 3, 4, 5, 3, 3, 6, 7 };

    // Declaring the value to be searched for
    int v2 = 3;

    // Declaring an iterator for storing the returning pointer
    vector<int>::iterator i1;

    // Using std::search_n and storing the result in
    // iterator i1
    i1 = std::search_n(v1.begin(), v1.end(), 2, v2);

    // checking if iterator i1 contains end pointer of v1 or not
    if (i1 != v1.end()) {
        cout << "v2 is present consecutively 2 times at index "
            << (i1 - v1.begin());
    } else {
        cout << "v2 is not present consecutively 2 times in "
            << "vector v1";
    }

    return 0;
}
/*
    v2 is present consecutively 2 times at index 5
*/
```

# std::search:

https://www.geeksforgeeks.org/stdsearch-in-c/
```cpp
// C++ program to demonstrate the use of std::search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, j;

    // Declaring the sequence to be searched into
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7 };

    // Declaring the subsequence to be searched for
    vector<int> v2 = { 3, 4, 5 };

    // Declaring an iterator for storing the returning pointer
    vector<int>::iterator i1;

    // Using std::search and storing the result in
    // iterator i1
    i1 = std::search(v1.begin(), v1.end(), v2.begin(), v2.end());

    // checking if iterator i1 contains end pointer of v1 or not
    if (i1 != v1.end()) {
        cout << "vector2 is present at index " << (i1 - v1.begin());
    } else {
        cout << "vector2 is not present in vector1";
    }

    return 0;
}

/*
    vector2 is present at index 2
*/
```

# std::find_if , std::find_if_not:

https://www.geeksforgeeks.org/stdfind_if-stdfind_if_not-in-c/

```cpp
// CPP program to illustrate
// std::find_if and std::find_if_not
#include <bits/stdc++.h>

// Returns true if argument is odd
bool IsOdd(int i)
{
    return i % 2;
}

// Driver code
int main()
{
    std::vector<int> vec{ 10, 25, 40, 55 };

    // Iterator to store the position of element found
    std::vector<int>::iterator it;

    // std::find_if
    it = std::find_if(vec.begin(), vec.end(), IsOdd);
    std::cout << "The first odd value is " << *it << '\n';

        // Iterator to store the position of element found
        std::vector<int>::iterator ite;

    // std::find_if_not
    ite = std::find_if_not(vec.begin(), vec.end(), IsOdd);

    std::cout << "The first non-odd(or even) value is " << *ite << '\n';

        return 0;
}
/*
    The first odd value is 25
    The first non-odd(or even) value is 10
*/
```

# std::find_end:

https://www.geeksforgeeks.org/stdfind_end-in-cpp/
```cpp
// C++ program to demonstrate the use of std::find_end

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, j;

    // Declaring the sequence to be searched into
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 3, 4, 5 };

    // Declaring the subsequence to be searched for
    vector<int> v2 = {3, 4};

    // Declaring an iterator for storing the returning pointer
    vector<int>::iterator i1;

    // Using std::search to find the first occurrence of v2
    i1 = std::search(v1.begin(), v1.end(), v2.begin(),
                    v2.end());

    // checking if iterator i1 contains end pointer of v1 or
    // not
    if (i1 != v1.end()) {
        cout << "vector2 is present firstly at index "
            << (i1 - v1.begin());
    } else {
        cout << "vector2 is not present in vector1";
    }

    // Using std::find_end to find the last occurrence of v2
    i1 = std::find_end(v1.begin(), v1.end(), v2.begin(),
                    v2.end());

    // checking if iterator i1 contains end pointer of v1 or
    //not
    if (i1 != v1.end()) {
        cout << "\nvector2 is present lastly at index "
            << (i1 - v1.begin());
    } else {
        cout << "vector2 is not present in vector1";
    }
    return 0;
}
/*
vector2 is present firstly at index 2
vector2 is present lastly at index 7
*/
```
# std::find:

https://www.geeksforgeeks.org/std-find-in-cpp/
```cpp
// CPP program to illustrate
// std::find
// CPP program to illustrate
// std::find
#include<bits/stdc++.h>

int main ()
{
    std::vector<int> vec { 10, 20, 30, 40 };
    
    // Iterator used to store the position
    // of searched element
    std::vector<int>::iterator it;
    
    // Print Original Vector
    std::cout << "Original vector :";
    for (int i=0; i<vec.size(); i++)
        std::cout << " " << vec[i];
        
    std::cout << "\n";
    
    // Element to be searched
    int ser = 30;
    
    // std::find function call
    it = std::find (vec.begin(), vec.end(), ser);
    if (it != vec.end())
    {
        std::cout << "Element " << ser <<" found at position : " ;
        std::cout << it - vec.begin() << " (counting from zero) \n" ;
    }
    else
        std::cout << "Element not found.\n\n";
        
    return 0;
}
/*
Original vector : 10 20 30 40
Element 30 found at position : 2 (counting from zero)
*/
```

# Binary Search:
aplicable if and only if the array is sorted.

```cpp
    vector<int> v{2, 4, 5, 6, 7, 7, 78};
    int key = 7;

    if(binary_search(v.begin(),v.end(),key)){
        cout<<"hi";
    }
    else{
        cout<<"no";
    }
/*
    hi
*/
```
# lower_bound():
