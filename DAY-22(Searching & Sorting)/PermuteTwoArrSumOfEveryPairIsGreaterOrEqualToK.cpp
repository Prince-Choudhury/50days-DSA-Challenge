#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <limits.h>
using namespace std;


bool isPossible(int a[], int b[], int n, int k)
{
	// Sort the array a[] in decreasing order.
	sort(a, a + n);

	// Sort the array b[] in increasing order.
	sort(b, b + n, greater<int>());

	for (int i = 0; i < n; i++)
		if (a[i] + b[i] < k)
			return false;

	return true;
}

int main()
{
	int arr1[] = { 2, 1, 3 };
	int arr2[] = { 7, 8, 9 };
	int k = 10;
	int n = 3;

	isPossible(arr1, arr2, n, k) ? cout << "Yes" : cout << "No";
	return 0;
}

