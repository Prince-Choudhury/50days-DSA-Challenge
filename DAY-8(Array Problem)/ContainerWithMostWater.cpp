#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;


int maxArea(vector<int> &height)
{

    int i = 0;
    int j = height.size() - 1;
    int area = 0;
    while (i < j)
    {
        if (height[i] <= height[j])
        {
            // width = j-i
            // if arr[i]<=arr[j] then length = arr[i]
            // area = max(area, length*width)
            // else length = arr[j]
            // area = max(area, length*width)
            area = max(area, height[i] * (j - i));
            i++;
        }
        else
        {
            area = max(area, height[j] * (j - i));
            j--;
        }
    }

    return area;
}

/*
Brute Force Approach T.C. O(n^2)

int MaxArea(int arr[], int n){

    int area = 0;
    for (int i = 0; i < n; i++)
    {
        for (int  j= 0; j < n; j++)
        {
            int height = min(arr[i], arr[j]);
            int base = j-i;

            area = max(area, height * base );
        }

    }

    return area;
}
*/
int main()
{

    vector<int> arr{1,8,6,2,5,4,8,3,7};

    cout << maxArea(arr);

    return 0;
}