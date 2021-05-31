# C++ Things that I learned after some hard work:
## 1.How to use `CImg` library in c++:
Actualy its really very simple, `CImg` allows you to only use `CImg.h` header and get the job done. But only just adding that header in your includes and compiling normally sometimes dont work(did not work for me). So if you are planning to use `CImg` and just want to get started, then do the following:

1. **Add header**: download the `CImg.h` header from the github [repo](https://github.com/dtschump/CImg). Add that in your includes,and link the header with your script using `#include "includes/CImg.h`.

2. **File structure**,
```
    Some_Folder/
        |_>CImg.h
        |_>demo.cpp
        |_>demo.exe
```

3. **Basic code**,
```cpp
#include<bits/stdc++.h>
#include "CImg.h"
using namespace std;
int main(){
    /*
        Add your functions here
    */
    cout<<"hello CImg";

    return 0;
}
```

4. **compile the programe using**,
    - `g++ -o hello_world.exe HelloWorld.cpp -O2 -lgdi32 -std=gnu++0x`
    
     or

    - `g++ -o hello_world.exe HelloWorld.cpp -O2 -lgdi32 -std=gnu++11`

    Source-> https://stackoverflow.com/a/22082194/12568833

5. **Some tutorials**,
    - http://www.cs.ukzn.ac.za/~hughm/ap/cimg/html/reference/group__cimg__tutorial.html
    - Video, https://www.youtube.com/watch?v=Q9gqK4QEz3o
    - getting started according to [CImg](https://github.com/dtschump/CImg/blob/master/README.txt),
```
If you are new to CImg, you should first try to compile the different examples
  provided in the 'examples/' directory, to see what CImg is capable of
  (as CImg is a template-based library, no prior compilation of the library is mandatory).
  Look at the 'resources/' directory to ease this compilation on different platforms.

  Then, you can look at the documentation 'html/reference/' to learn more about CImg
  functions and classes. Finally, you can participate to the 'Forum' section
  of the CImg web page and ask for help if needed.
```
NB: If you are using GCC 4.7 or higher then `-std=gnu++0x` will work fine else not. 

Check out the repo https://github.com/dtschump/CImg and 🌟 it

## 2. `C++` Auto-complete for Sublime text:

I am using [EasyClangComplete](https://github.com/niosus/EasyClangComplete). 💥 Robust C/C++ code completion for Sublime Text 3.
Plugin for Sublime Text 3 for easy to use, out of the box autocompletions for
C, C++, Objective-C, and Objective-C++.

![Example](https://github.com/niosus/EasyClangComplete/blob/master/docs/img/AutoComplete.gif)

## 3. Using `print()` instade of `cout<<`:
Sometimes people comes from python, face defficulty to adjust with `cout<<`, as they are used to of using `print()`, In c++ a good way to solve this problem is using c++ macros. Here is a snippit that I use, you can also define `endl` as `endline` (commented code) or `el`(as you like to call).

```cpp
#include <iostream>
using namespace std;
#define print(x) cout << x
// #define endline endl

int main()
{
    print("Hello World!")<<endl;
    print("hi");
    // print(endline);
    int n;
    cin>>n;
    int k;
    return 0;
}
```

## Learn about `Image preprocessing` from scratch using only c++:
In future I wish to work on this, But after doing a bit searching in youtube I have found some great resources to learn it,

1. https://youtu.be/HGHbcRscFsg
2. Youtube Playlist https://www.youtube.com/watch?v=028GNYC32Rg&list=PLG5M8QIx5lkzdGkdYQeeCK__As6sI2tOY


## some blogs for cp:
- https://blog.anudeep2011.com/
- http://www.mathblog.dk/
- https://kartikkukreja.wordpress.com/
- https://cp-algorithms.com/
- https://www.codingninjas.com/blog/2019/09/21/sites-and-tools-for-competitive-programming/ 
- https://blog.codingblocks.com/
- https://codeforces.com/blog/entry/23054
- https://journeywithdp.blogspot.com/
