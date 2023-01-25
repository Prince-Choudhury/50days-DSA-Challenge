#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k)
{

    sort(arr, arr + r + 1);

    return arr[k - 1];
}

int main(){

    int arr[] = {7, 10, 4, 3, 20, 15};

    cout<<kthSmallest(arr, 0, 5, 3);

    return 0;
}