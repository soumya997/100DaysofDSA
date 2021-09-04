# Things I learned in: Day_41_to_50/Day_41
**Note:** use the github provided TOC for navigaing.


# revision qsns:
1. merge sort
2. binary search
3. quick sort

# virtual function?
<p align="center">
  <img width="300" height="250" src="https://imgur.com/gallery/JqaGCmu">
</p>


# Volatile Qualifier:
if the value of an variable is changeable in future then, using 
`volatile` keyword with the variable helps the compiler not to 
optimize the variable, as the compiler usually stores a copy of each
variable so that compiler dont need not make copy that variable 
over and over again.
`volatile int a;`


What is a virtual destructor?
What is the order of objects destroyed in the memory?
What is a friend class?
What is a container class?
When should we use the register storage specifier?
What is a static variable?
What is the purpose of extern storage specifier.
What is a class template?
What is a friend function?


# What is a namespace?
A namespace is the logical division of the code which can be used to resolve the name conflict of the identifiers by placing them under different name space.
# Explain the pointer – this.
This, is the pointer variable of the compiler which always holds the current active object’s address. refers to current object of the class.

# Which key word is used to perform unconditional branching?
->goto
# S++ or S = S+1, which can be recommended to increment the value by 1 and why?
-> S++, as it is single machine instruction (INC) internally.

# What is difference between including the header file with-in angular braces < > and double quotes “ “
If a header file is included with in < > then the compiler searches for the particular header file only with in the built in include path. If a header file is included with in “ “, then the compiler searches for the particular header file first in the current working directory, if not found then in the built in include path

# Can we create and empty class? If so what would be the size of such object.
We can create an empty class and the object size will be 1.

#Is it legal to assign a base class object to a derived class pointer?
No, it will be error as the compiler fails to do conversion.

# Does an abstract class in C++ need to hold all pure virtual functions?
Not necessarily, a class having at least one pure virtual function is abstract class too.

# What is the first string in the argument vector w.r.t command line arguments?
Program name.

# What is the maximum length of an identifier?
Ideally it is 32 characters and also implementation dependent.

# What are valid operations on pointers?
The only two permitted operations on pointers are

Comparision ii. Addition/Substraction (excluding void pointers)

# How can we refer to the global variable if the local and the global variable names are same?
We can apply scope resolution operator (::) to the for the scope of global variable.
# Can we resize the allocated memory which was allocated using ‘new’ operator?
No, there is no such provision available.
# What are the different ways of passing parameters to the functions? Which to use when?
Call by value − We send only values to the function as parameters. We choose this if we do not want the actual parameters to be modified with formal parameters but just used.

Call by address − We send address of the actual parameters instead of values. We choose this if we do want the actual parameters to be modified with formal parameters.

Call by reference − The actual parameters are received with the C++ new reference variables as formal parameters. We choose this if we do want the actual parameters to be modified with formal parameters.

# What is a preprocessor?
Preprocessor is a directive to the compiler to perform certain things before the actual compilation process begins.

# What is a token?
A C++ program consists of various tokens and a token is either a keyword, an identifier, a constant, a string literal, or a symbol.
# Where an automatic variable is stored?
Every local variable by default being an auto variable is stored in stack memory
# Can a program be compiled without main() function?
Yes, it can be but cannot be executed, as the execution requires main() function definition.
