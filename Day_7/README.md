# things I learned in Day 7:
**Note:** use the github provided TOC for navigaing.

## Recursion(I-Basics):
Recursion is a technique where we devide a bigger problem into a smaller instance of the same problem, and solve the smaller problems to solve the bigger problem.

e.g. say you want the sum of all the elemnts of an array. For that you can also use recursion. Here you will devide the array into smaller parts and do summation operation on the smaller chunk till you get the total sum.

- deviding a problem can be any type,
    + say you have an array of size N, and you deviding that like N-1,N-2...
    + say you have an array of size N, and you deviding that like N/2,N/4 and so on.
you can devied it in multiple ways, but you need to perform the same operation on all the smaller chunks.

- Always keep in mind that, a problem that can be solved using recursion also can be solved iteratively.

- we will be using recursion when we will find that the given problem can be broken into same smaller problems. e.g. factorial of an number, here we can say `factorial(N) = N * factorial(N-1)`. here we can devide the bigger problem into a same problem but for smaller input size.

