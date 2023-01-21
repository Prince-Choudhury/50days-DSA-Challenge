#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int rainwater(vector<int> &arr)
{
    int n = arr.size();
    int left[n];
    int right[n];

    left[0] = arr[0];
    right[n - 1] = arr[n - 1];

    // left
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }
    // right
    for (int i = (n - 2); i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    // final answer
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (min(left[i], right[i])) - arr[i];
    }
    return sum;
}

int main()
{

    vector<int> arr{3, 1, 2, 4, 0, 1, 3, 2};

    cout<<rainwater(arr);

    return 0;
}