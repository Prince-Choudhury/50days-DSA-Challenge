#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;

int MaxArray(int arr[], int n){

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int MinArray(int arr[], int n){

    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        
    }
    return mini;
    
}

int main(){
    int arr[] = {3, 5, 4, 1, 9};
    int ans1 = MinArray(arr, 5);
    int ans2 = MaxArray(arr, 5);
    cout<<"Minimum : "<<ans1<<endl;
    cout<<"Maximum : "<<ans2<<endl;

    return 0;
}