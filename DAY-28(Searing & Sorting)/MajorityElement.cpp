#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <limits.h>
using namespace std;

void majorityElement(int arr[], int n)
{

    int maxcnt = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }

        if (cnt > maxcnt)
        {
            maxcnt = cnt;
            index = i;
        }
    }

    if (maxcnt > n / 2)
    {
        cout << arr[index];
    }
    else
        cout<<"No Majority Element";
}

int main()
{

    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = 9;

    majorityElement(arr, n);

    return 0;
}