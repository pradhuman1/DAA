# Assignment-02

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019001  |   Harsh Mahajan | harsh-8989 |
|    IIB2019002  |  Pradhuman Singh Baid  | pradhuman1 | 
|    IIB2019003  |   Vasu Gupta | Cipher-vasu |

**Group No-**"20"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Given an NxN chessboard and a Knight at position (x,y). The Knight has to
take exactly K steps, where at each step it chooses any of the 8 directions
uniformly at random. What is the probability that the Knight remains in
the chessboard after taking K steps, with the condition that it can’t enter
the board again once it leaves it? Solve using Dynamic programming.

---
## How to use code

```
#Download project
git clone https://github.com/pradhuman1/DAA.git
```
Project Initialize 
```
cd DAA
cd Assignment-2
```
---

Run the code
```
g++ solution.cpp
./a.out
```
---

**Test case**

```
Test Case-1
Input:
3 2
0 0
Output:
0.0625
#--------------------------#
Test Case-2
Input:
8 3
0 0
Output:
0.125
#--------------------------#
Test Case-3
Input:
8 8
0 0
Output:
0.030863
```

---

### Theory

**Dynamic Programming**

Dynamic Programming (DP) is an algorithmic technique for solving an optimization problem by breaking it down into simpler subproblems and utilizing the fact that the optimal solution to the overall problem depends upon the optimal solution to its subproblems

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
Therefore, Time complexity is O(log(n))
<br>

**Space Complexity**

We need space for the input array of size n only, and for rest of the variables<br>
we are using constant amount of space so <br>
`Space Complexity : O(n)`

---

### References

[1] Wikipedia: Dynamic Programming,
https://en.wikipedia.org/wiki/Dynamic_programming <br/>
[2] GeeksforGeeks: Dynamic Programming,
https://www.geeksforgeeks.org/dynamic-programming/
