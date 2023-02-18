# push_swap
**This is my work on the push_swap project**.

In this project, I have to write a program that can sort an array of integers using a limited set of operations.

The goal of the project is to create two programs, "push_swap" and "checker", which work together to sort an array of integers in ascending order. Here's how the programs work:

Push_swap takes an unsorted array of integers as input and outputs a series of instructions that will sort the array. 

The program can only use a limited number of operations: 
- swap: swap the first two integers on the stack.
- push: Take the first element at the top of a stack and put it at the top of the other one.
- rotate: shift the numbers of the stack so the first integer becomes the last. 
- reverse rotate: Shift down all elements of one of the stacks by 1. The last element becomes the first one.

The instructions output by push_swap must be as short as possible.
Checker takes the same input array as push_swap and reads in the series of instructions output by push_swap. It then applies those instructions to the input array and checks if the array is sorted in ascending order. If the array is sorted, checker outputs "OK"; if it is not sorted, it outputs "KO".

The Push Swap project is designed to challenge students to think creatively about how to solve a complex problem with limited resources. It requires an understanding of data structures, algorithms, and the constraints of the problem, as well as the ability to write clean, efficient code.
#
**What I have learned**
- About sorting algorithms.
- About dynamic data structures.
