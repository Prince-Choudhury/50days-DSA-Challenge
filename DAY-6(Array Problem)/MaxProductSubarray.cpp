#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;

int getMaxSubarrayProduct(int arr[], int n){

    int ans = INT_MIN;
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        product = product*arr[i];

        ans = max(ans, product);

        if (product < 0)
        {
            product = 1;
        }  
    }
    return ans;    
}

int main(){

    int arr[] = {2,3,-2,4};
    cout<<"Maximum subarray product is : "<<getMaxSubarrayProduct(arr, 4);

    return 0;
}