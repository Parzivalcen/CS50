# Algorithms 

## Arrays
arrays don't use a single place in memory they are store bite after bite

Computers go through arrays like `{1, 2, 4, 5, 0}` one by one they don have a birds eyes like we have, so for things like sorting it has to look at every character and do the tasks one by one. 

## Big *O* Notations
They are use to measure the running time of the algorithm that we use. It is mostly to convey an idea of running time not the exact milliseconds or steps.

Some common running times are:
- O(n)
- O(n log n)
- O(n^2) 
- O(log n)
- O(1)
## Big *Ω* (omega) Notation
Is least number of steps that an algorithm can do, or how many steps in will our algorithm to run in the best case scenario, **Big *O*** how many steps it would take in the worst case scenario
- Ω(n)
- Ω(n log n)
- Ω(n^2) 
- Ω(log n)
- Ω(1)
## Big *Theta* 
It is used when the big "O" and big "Ω" are the same value  
- An algorithm with a O(1) Notation means that a constant number of steps is require, no matter the size of the problem 

## Search Algorithms 
 ### Linear
 They simply go from left to right or even right to left IIRC, checking each char in the array, it has the *O*(n) Notation, and the Ω(1) notation for the best case scenario

 ### Binary 
 Algorithms like divide and conquer are binary search algorithms, some binary pseudo code: 
```
  if no doors left
    return false

  if number behind doors[middle]
    return true
  else if number > [middle] 
    search doors[middle] through doors[n-1] 
  else if number < doors[middle]
    number doors[0] through doors[middle-1] 

```
So long as the sorting is consistent you will find the solution no matter what
- **O(log n)** Any time there is an algorithm that involves divide and conquer there are probably logarithms involve, (log n) essentially means *The numbers of time you can divide n by 2 until you end up with zero doors left*

Sometimes to make binary search algorithm you need more complex code.   

## Data Structures 
Data Structures are datatypes that we can create, they don't exist by default in C by default. They are called structs;
```c
typedef struct
{
  string name;
  string number;
}
person; //datatype name
```
- **Encapsulation** is the that related Data is grouped together, above we encapsulated the name and the number of a person. The color of a pixel with RGB might also be well represented by Data structure *It look like object in python for example, but it is totally different, **C** is not object oriented, data structures can't store functions but objects can**

## Sorting
### Selection Sort
In pseudo code;
```
for i = 0; from i to n - 1
  Find the samllest between numbers[i] and numbers[n-1]
    swap smallest with numbers[i] 
```
- The Big O for this search algo is *O*(n) and the best case scenario is Ω(n) as well because even if the array is sorted it will have to look at each instance to check it, it really is *O*(n^2), but with large number is almost the same with *O*(n) and *O*(n^2)

## Bubble sort
In pseudo code;
```
repeat n-1 times
  for i = 0 from i to n-2
    if numbers[i] and numbers[i+1] out of other
      swap them
  if no swaps
    quit
```
- Here too the algo need to run n-1 times so the big O notation is *O*(n^2) and Ω(n) if we add the optimization of no swaps

## Recursion 
Recursion is when a function calls itself  