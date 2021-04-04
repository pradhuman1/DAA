# Assignment-05

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
Given two integers ‘n’ and ‘m’, find all the stepping numbers in range [n, m]. A number is
called stepping number, if all adjacent digits have an absolute difference of 1. 321 is a
Stepping Number while 421 is not.

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
Approach-1 
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
<br>
```
Approach-2
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

Breadth-first search is an algorithm for traversing or searching tree or graph data structures. It starts at the tree root, and explores all of the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level

**Algorithm Analysis**
1) One thing that we can observe is that at every step
the Knight has 8 choices to choose from. Suppose, the
Knight has to take k steps and after taking the Kth step
the knight reaches (x,y). There are 8 different positions
from where the Knight can reach to (x,y) in one step,
and they are: (x+1,y+2), (x+2,y+1), (x+2,y-1), (x+1,y2), (x-1,y-2), (x-2,y-1), (x-2,y+1), (x-1,y+2).<br>
2) The final probability after K steps will simply be equal
to the ( probability of reaching each of these 8 positions
after K-1 steps)/8.<br>
3) We are dividing by 8 because each of these 8 positions
has 8 choices and position (x,y) is one of the choices.<br>
4) For the positions that lie outside the board, we will either
take their probabilities as 0 or simply neglect it.<br>
5) Since we need to keep track of the probabilities at each
position for every number of steps, we need Dynamic
Programming to solve this problem
<br>
<br>
---

### Analysis

**Time Complexity**

In this method, we are working on n × n elements and there
are k layers considered.
<br>
<br>
So Time complexity would be O(n^2×k)
<br>

**Space Complexity**

The size of parentBoard and childBoard vectors is  n× n and some constant variables are used.
<br>
<br>
Therefore, Space complexity is O(n^2)
<br>

---

### References

[1] Wikipedia: Dynamic Programming,
https://en.wikipedia.org/wiki/Dynamic_programming <br/>
[2] GeeksforGeeks: Dynamic Programming,
https://www.geeksforgeeks.org/dynamic-programming/
