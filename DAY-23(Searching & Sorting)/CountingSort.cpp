#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <limits.h>
using namespace std;

void countSort(int arr[], int n){

    int count[8] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    //Sorting
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (count[i]>0)
        {
            arr[j] = i;
            j++;
            count[i]--;
        }
        
    }
    

}

int main(){

    int arr[] = {1,4,1,3,2,4,3,7};
    int n = 8;
    countSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}

    