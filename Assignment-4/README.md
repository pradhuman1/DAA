# Assignment-4

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019001  |   Pradhuman Singh Baid | pradhuman1 |
|    IIB2019002  |   Harsh Mahajan | harsh-8989 | 
|    BIM2015003  |   Tauhid Alam | bim2015003 |

**Group No-**"1"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Write a program to find if a given integer x appears more than n/2
times in a sorted array of n integers. Solve using divide and conquer
algorithm.

---
## How to use code

```
#Download project
git clone https://github.com/pradhuman1/DAA.git
```
Project Initialize 
```
cd DAA
cd Assignment-4
```
---

Run the code
```
g++ question1.cpp
./a.out
```
Output
```
YES, the integer : 'x' Appears more than n/2 times
or
NO, the integer : 'x' did't appear more than n/2 times
```
---

**Test case**

```
Test Case-1
Input:
6
124444
4
Output:
Yes
#--------------------------#
Test Case-2
Input:
5
13345
3
Output:
No
```

---

### Theory

**Divide and conquer**

Divide and conquer is the way of solving a problem by dividing the problem into smaller subproblems.<br>
<br>
It is a technique in which the main problem is divided into smaller subproblems and then solving the smaller subproblems and combining them to find the solution of the problem.

**Algorithm Analysis**
In the problem we need to find weather a given integer x in appearing more than n/2 times in a sorted array or not.Efficiently this problem can be solved using divide and conquer algorithm named binary search.<br>
<br>
1) First we will find out the first index where this integer x appeared.
2) We add n/2 to its index and check weather the same integer is at resulting index or not.
3) If we found same integer at resulting index then we can say it appeared more than n/2 time otherwise not appeared more than n/2 times. 
<br>
<br>
---

### Analysis

**Time Complexity**

In this algorithm at each iteration the array is divided by 2. Suppose length of array is n and after K iteration the length of array becomes 1 and then we get<br><br>
(n/2)^k=1 <br>
n = 2^k <br>
log(n) = log(2^k) <br>
log(n) = klog(2) <br>
k = log(n)

<br>
<br>
Therefore, Time complexity is O(nlog(n))
<br>

**Space Complexity**

We need space for the input array of size n only, and for rest of the variables<br>
we are using constant amount of space so <br>
`Space Complexity : O(n)`

---

### References

[1] Wikipedia: Divide-and-conquer algorithm,
https://en.wikipedia.org/wiki/Divide-and-conquer_algorithm  <br/>
[2] GeeksforGeeks: Divide and Conquer Algorithm — Introduction,
https://www.geeksforgeeks.org/divide-and-conquer-algorithm-i
