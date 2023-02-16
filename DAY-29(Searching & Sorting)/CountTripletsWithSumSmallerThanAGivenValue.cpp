#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <limits.h>
using namespace std;

int countTriplets(int arr[], int n, int sum)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int s = arr[i] + arr[j] + arr[k];
            // if(s == sum){
            //     j++;
            // }
            if (s >= sum)
            {
                k--;
            }
            else
            {
                count += k - j;
                j++;
                // k--;
            }
        }
    }
    return count;
}

int main()
{

    int arr[] = {5, 1, 3, 4, 7};
    int n = 5;
    int sum = 12;

    cout << countTriplets(arr, n, sum);

    return 0;
}