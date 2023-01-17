#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;

void ReverseArray(int arr[], int n, int i, int j){

    while (i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }    
}

int main(){
    int arr[] = {4, 5, 1, 2};
    ReverseArray(arr, 4, 0, 3);
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i];
    }
        
    return 0;
}