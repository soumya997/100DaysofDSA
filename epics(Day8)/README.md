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
- https://afteracademy.com/blogs
- https://medium.com/afteracademy


## ERROR: inputf.in: file format not recognized; treating as linker script:
```
C;/mingw/bin/../lib/gcc/mingw32/6.3.0/../../../../mingw32/bin/ld.exe:D:\Documents\100DaysofDSA\Day_11_to_20\Day_17\inputf.in: file format not recognized; treating as linker script c:/mingw/bin/../lib/gcc/mingw32/6.3.0/../../../../mingw32/bin/ld.exe:D:\Documents\100DaysofDSA\Day_11_to_20\Day_17\inputf.in:1: syntax error collect2.exe: error: ld returned 1 exit status
```

Yeah man, this is it, this it itttt mah man...this is the error always keep bugging me, I know you are also frusted by watching that again and again. So here is what I found out while solving the problem,

1. check your c++ build system, there might be some typo or something like additional spaces or something. Check this [stackoverflow](https://stackoverflow.com/questions/60803865/how-to-use-mingw-with-a-build-system-in-sublime-text). 
2. If you are using the `c++ single file` then try to switch to `c++14` or `c++17` build system.
**Here is the c++14 build system:**  
```
{
"cmd": ["g++.exe","-std=c++14", "${file}", "-o", "${file_base_name}.exe", "&&" , "${file_base_name}.exe<inputf.in>outputf.in"],
"selector":"source.cpp",
"shell":true,
"working_dir":"$file_path"
}
```
**Here is the c++17 build tools:**
```
{
"cmd": ["g++.exe",
 "-std=c++17", "${file}",
  "-o",
   "${file_base_name}.exe",
    "&&" ,
     "${file_base_name}.exe<inputf.in>outputf.in"],
"shell":true,
"working_dir":"$file_path",
"selector":"source.cpp"
}
```
Just go to tools->build systems->new build system, then paste any on the build system code and save that according to the c++ version name.

3. And the technique that was helpfull was to load the `inputf.in` and `outputf.in` file again. cut the tab from the sublime and again load the tab. And giving the input to the `inputf.in` move your curser to the respective cpp file, and then press `ctrl+B` to build.

## Use of for loop and while loop:
when you have certain condition, like untill this value becomes greater than some other value, or similar condition like that, then you use while loop and when you have to travers a path linearly with any kind of incriment then you use for loop.
`while(i>j)` means untill i is greater than j the loop will run.

## change the color of the comments from the color scheme:
I needed to change the color of the comments in my color scheme, I'm using cobult, so it was giving me darkish blue, but i wanted it to be greenish, so I changed it.

1. go to the customize color scheme from the preference, it will open a xml file, but thats default, for changing stuff you need make changes to the json format file that open right beside it. 
2. In the variables define some color values,
3. and for changing the comments you add a rule specific to comment.Like this,
4. If you want to see other rules, like color for numbers, strings, functions, classes etc. then install `Package Resource Viewer` from control install package. then shift+ctrl+p then type `prv`, `Package Resource Viewer-Open source` will show up, go to the color scheme - default and check out any color schemes, it will open a json, from there you can see the rules.

```json
// Documentation at https://www.sublimetext.com/docs/color_schemes.html
{
    "name": "colult",
    "author": "Sublime HQ Pty Ltd",
    "variables":
    {
        // These colors are part of the hashed range
        // and should only be used in non-source
        "purple": "hsla(260, 50%, 60%, 1)",
        "blue": "hsla(200, 70%, 45%, 1)",
        "teal": "hsla(170, 70%, 45%, 1)",
        "green": "hsla(130, 70%, 45%, 1)",
        // End of hashed range colors
        "red": "hsla(0, 70%, 65%, 1)",
        "orange": "hsla(25, 90%, 60%, 1)",
        "dark_orange": "hsla(10, 90%, 60%, 1)",
        "yellow": "hsla(50, 100%, 60%, 1)",
        "brown": "hsla(30, 30%, 45%, 1)",
        "dark_brown": "hsla(30, 30%, 30%, 1)",
        "magenta": "hsla(335, 100%, 65%, 1)",
        "light_gray": "#f6f6f6",
        "dark_gray": "#333",
        "black": "black",
        "pink": "#e371f5",
        "lemon":"hsla(89, 100%, 58%, 0.92)"
    },
    "globals":
    {
        "caret": "color(var(lemon))",
    },
    "rules":
    [
        {
            "scope": "comment",
            "foreground": "#12fc73",
            "font_style": "italic"
        },

    ]
}
```  
### My Cobult(color scheme) + Guna(theme) customizations:  

```json
// Documentation at https://www.sublimetext.com/docs/color_schemes.html
{
    "name": "colult",
    "author": "Sublime HQ Pty Ltd",
    "variables":
    {
        // These colors are part of the hashed range
        // and should only be used in non-source
        "purple": "hsla(260, 50%, 60%, 1)",
        "blue": "hsla(200, 70%, 45%, 1)",
        "teal": "hsla(170, 70%, 45%, 1)",
        "green": "hsla(130, 70%, 45%, 1)",
        // End of hashed range colors
        "red": "hsla(0, 70%, 65%, 1)",
        "orange": "hsla(25, 90%, 60%, 1)",
        "dark_orange": "hsla(10, 90%, 60%, 1)",
        "yellow": "hsla(50, 100%, 60%, 1)",
        "brown": "hsla(30, 30%, 45%, 1)",
        "dark_brown": "hsla(30, 30%, 30%, 1)",
        "magenta": "hsla(335, 100%, 65%, 1)",
        "light_gray": "#f6f6f6",
        "dark_gray": "#333",
        "black": "black",
        "pink": "#e371f5",
        "lemon":"hsla(89, 100%, 58%, 0.92)"
    },
    "globals":
    {
        "caret": "color(var(lemon))",
    },
    "rules":
    [
        {
            "scope": "comment",
            "foreground": "#12fc73",
            "font_style": "italic"
        },

    ]
}
```

## writing functions is calle procedural programming and wrting classes called object oriented programming.
