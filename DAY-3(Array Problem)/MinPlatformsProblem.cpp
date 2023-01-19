#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;


int findPlatform(int arr[], int dep[], int n)
{
    sort(arr, arr+n);
    sort(dep, dep+n);

    int platform = 1;
    int ans = INT_MIN;

    int i = 1;
    int j = 0;
    while (i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            platform++;
            i++;
        }

        else 
        {
            platform--;
            j++;
        }

        ans = max(ans, platform);
    }
    
    return ans;
}

int main()
{
  
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000} ;
    
    int ans = findPlatform(arr, dep, 6);
    cout<<ans;


    return 0;
}