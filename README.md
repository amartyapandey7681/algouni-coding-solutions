# algouni-coding-solutions
code for compititive problems
#here i will give the questions of good problems i have given solution to in my repo

########################################################################################
#graph.cpp
A connected component of a graph is called a snowflake if it contains exactly one node that has a degree not equal to 1.
A snowflake is Beautiful if there are no other snowflakes in the graph that are the same as it. Two snowflakes are the same if they have the same number of nodes.

Given a graph, how many Beautiful snowflakes does it contain?

Note
Do not use BFS/DFS, think simple : )
Recall, degree of a node is number of edges connected to it.
Input
The first line will contain two integers: n and m : the number of nodes & edges
m lines follow, each containing two unique integers in the range [1, n] inclusively, describing an edge:-
2 ≤ n ≤ 100
0 ≤ m ≤ 100
Output
Output a single integer, the number of Beautiful snowflakes in the graph

Example
Input
11 8
1 2
2 3
4 5
6 5
7 5
8 5
9 5
10 5
Output
3
#################################################################################################
