# First Question - kickstart

<b>Problem</b>

An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai
. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.


<b>Input</b>

The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Ai
.

<b>Output</b>

For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the length of the longest contiguous arithmetic
subarray.

# Second Question

<b>Problem</b>

Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.

<b>Constraints</b>

1 <= N <= 106
0 <= Ai <= 106

<b>Input</b>

7
1 5 3 4 3 5 6

<b>Output:</b>

2

<b>Explanation</b>

5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.

# Third Question

<b>Problem</b>

Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.

<b>Input</b>

N = 5, S = 12
A[] = {1,2,3,7,5}

<b>Output</b>

2 4

# Fourth Question

<b>Problem</b>

Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2

<b>Intuition</b>

If in O(1), we can tell if an element is present in an array, then our task will be
simpler.
For that, we will maintain a Check[ ] array, that will if an element x is present in
the array or not.
It will be of boolean type as we only need to check the presence or absence of the
number.

<b>Given Array</b> 

[0, -9, 1, 3, -4, 5]