#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <limits.h>
using namespace std;


int FindMaxSum(vector<int> arr, int n)
{
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    int i;
 
    for (i = 1; i < n; i++) {
        // Current max excluding i
        excl_new = max(incl, excl);
 
        // Current max including i
        incl = excl + arr[i];
        excl = excl_new;
    }
 
    // Return max of incl and excl
    return max(incl, excl);
}
 

int main()
{
    vector<int> arr = { 5, 5, 10, 100, 10, 5 };
    int n = arr.size();
 
    
    cout << FindMaxSum(arr, n);
    return 0;
}