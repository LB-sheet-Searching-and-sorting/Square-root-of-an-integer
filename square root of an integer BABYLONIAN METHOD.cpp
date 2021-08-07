/*

Simple Approach: To find the floor of the square root, try with all-natural numbers starting from 1. 
Continue incrementing the number until the square of that number is greater than the given number.

Algorithm: 
Create a variable (counter) i and take care of some base cases, i.e when the given number is 0 or 1.
Run a loop until i*i <= n , where n is the given number. Increment i by 1.
The floor of the square root of the number is i – 1

Time Complexity: O(root n). 
Only one traversal of the solution is needed, so the time complexity is O(v n).

Space Complexity: O(1). 
Constant extra space is needed.

*/

#include<bits/stdc++.h>

using namespace std;

// Returns floor of square root of x
int floorSqrt(int x)
{
	// Base cases
    if (x == 0 || x == 1)
    return x;
    
    // Staring from 1, try all numbers until
    // i*i is greater than or equal to x.
    int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
	
}

// Driver program
int main()
{
    int x = 81;
    cout << floorSqrt(x) << endl;
    return 0;
}
