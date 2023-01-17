#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;

bool ContainsDuplicate(int arr[], int n){

    sort(arr, arr + n);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return true;
        } 
    }
    return false;
}

int main(){

    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    cout<<ContainsDuplicate(arr, 10);

    return 0;
}