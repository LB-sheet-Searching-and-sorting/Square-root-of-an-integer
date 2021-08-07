/*

The values of i * i is monotonically increasing, so the problem can be solved using binary search. 

i=> 2 3 4  5  6  7   8
    4 9 16 25 36 49 64

Algorithm: 
Take care of some base cases, i.e when the given number is 0 or 1.
Create some variables, lowerbound l = 0, upperbound r = n, where n is the given number, mid and ans to store the answer.
Run a loop until l <= r , the search space vanishes
Check if the square of mid (mid = (l + r)/2 ) is less than or equal to n, If yes then search for a larger value in second half of search space, i.e l = mid + 1, update ans = mid
Else if the square of mid is more than n then search for a smaller value in first half of search space, i.e r = mid – 1
Print the value of answer ( ans)

Time complexity: O(log n). 
The time complexity of binary search is O(log n).

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
    
    // Do Binary Search for floor(sqrt(x))
    int start = 1, end = x, ans;
    while (start <= end) 
	{
        int mid = (start + end) / 2;   //start + (end-start)/2
        /*
        cout<<"\n\nstart => "<<start;
        cout<<"\nend => "<<end;
        cout<<"\nmid => "<<mid;
        */
        // If x is a perfect square
        if (mid * mid == x)
        {
        	return mid;
		}
		else  if(mid * mid > x)
		{
			end = mid - 1;
		}
		else if(mid * mid < x)
		{
			//floor nikaalo
			//ex: x=11 ans = 3
			
			//i^2 => 1  4  9  16  25  36   49 64 81 100 121
			// i=>   1  2  3  4    5   6   7  8  9  10  11   
			if(((mid+1)*(mid+1)>=x))
			{
				return mid;
			}
			else 
			{
				start=mid+1;
			}
		}
	}
	
}

// Driver program
int main()
{
    int x = 48;
    cout << floorSqrt(x) << endl;
    return 0;
}
