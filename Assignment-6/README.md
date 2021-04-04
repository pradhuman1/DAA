# Assignment-06

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
cd Assignment-6
```
---

Run the code
```
Approach 1
g++ approach1.cpp
./a.out

Approach 2
g++ approach2.cpp
./a.out
```
---

**Test case**

```
Approach-1 
Test Case-1
Input:
1
0 50
Output:
0 1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45
#--------------------------#
Test Case-2
Input:
1
1 200
Output:
1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45 54 56 65 67 76 78 87 89 98 101 121 123



Approach-2
Test Case-1
Input:
1
0 50
Output:
0 1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45
#--------------------------#
Test Case-2
Input:
1
1 200
Output:
1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45 54 56 65 67 76 78 87 89 98 101 121 123



```
---

### Theory

**Breadth First search**

Breadth-first search is an algorithm for traversing or searching tree or graph data structures. It starts at the tree root, and explores all of the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level

**Algorithm Design**<br>
Approach 1<br>
1. Its a brute force approach
2. Iterate  over  all  number  between  [n,m]  and  checking number is stepping number or not.
3. Iterate  through  all  digits  of  x  and  compare  difference between value of previous and current digits, if difference >1or  <-1  then  its  not  stepping  number  otherwise  storing  x  in answer.
4. Print all number in answer which are stepping numbers between n and m.
<br>
<br>
Approach 2<br>
1. This approach is based on graph traversing bfs.
2 .We are using the fact that single digit number is stepping number..
3. Then we are generating graph as follow .
4. Every node in the graph represents a stepping number. there will be a directed edge from a node U to V if V can be transformed from U.
5. An adjacent number V can be:  <br>
     U*10 + lastDigit + 1 (Neighbor A)<br>
     U*10 + lastDigit – 1 (Neighbor B)<br>
6. then checking if node value is between n and m. which means this node is required stepping number and storing it into answer array.
7. Print all number in answer which are stepping numbers between n and m.
<br>
<br>
---

### Analysis

**Time Complexity**

Approach 1<br><br>
For each number, to check that it is stepping number can be checked in some number of operation which is equivalent to constant time. Since we are checking all numbers between n to m therefore execution time is  directly proportional to (m-n)<br>
So the time complexity will be :  O(m-n)<br><br>
Approach 2<br><br>

During BFS, once we encounter a number 'x' from the queue which is greater or equal to M, we don't need to push its stepping numbers in the queue as they will obviously again be greater than M. this gives you an upper bound. Now we are creating sort of 9 trees with root [1,9] respectively. <br>
for each node of the tree the the next child node has a number obtained after a multiplication factor of 10, mean taking jumps in powers of 10, which means a logarithmic sol with an upper bound M. So the number of nodes in the tree has to be log(M) moreover as its a tree number of edges are V-1.<br>
So the above approach would be log(M)<br><br>

**Space Complexity**

We not storing anything so space complexity is almost constant<br><br>

---

### References

[1] 'Queue-Data-Structures', Wikipedia<br>
[2] 'Breadth First Search', GeeksforGeeks<br>
[3] Chirag Agarwal, 'Stepping Numbers',GeeksforGeeks,2020<br>
