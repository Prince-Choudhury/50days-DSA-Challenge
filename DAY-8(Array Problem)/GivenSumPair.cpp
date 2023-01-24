#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;

/*
Brute Force Approach 
T.C. : O(n^2)

bool PairWithSum(int arr[], int sum, int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)

                return true;
        }
        
    }
    
    return false;
}
*/

//Time Complexity : O(n)
bool pairInSortedRotated(int arr[], int sum, int n)
{
	// Find the pivot element
	int i;
	for (i = 0; i < n - 1; i++){
		if (arr[i] > arr[i + 1])
			break;
    }

	// l is now index of smallest element
	int l = (i + 1) % n;

	// r is now index of largest element
	int r = i;

	// Keep moving either l or r till they meet
	while (l != r) {

		// If we find a pair with sum x,
		// we return true
		if (arr[l] + arr[r] == sum)
			return true;

		// If current pair sum is less,
		// move to the higher sum
		if (arr[l] + arr[r] < sum)
			l = (l + 1) % n;

		// Move to the lower sum side
		else
			r = (n + r - 1) % n;
	}
	return false;
}

int main()
{
	int arr[] = { 11, 15, 6, 8, 9, 10 };
	int sum = 16;
	
	if (pairInSortedRotated(arr, sum, 6))
		cout << "true";
	else
		cout << "false";

	return 0;
}