#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;


int findMinDiff(int arr[], int n, int m){

    sort(arr, arr + n);

    int min_diff = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = arr[i + m - 1] - arr[i];

        min_diff = min(min_diff, diff);
    }
    
    return min_diff;

}

int main(){

    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};

    cout<<findMinDiff(arr, 8, 5);

    return 0;
}
    