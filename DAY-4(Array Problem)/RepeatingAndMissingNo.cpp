#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;

void RepeatAndMissingNo(int arr[], int n){

    sort(arr, arr + n);

    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + arr[i];
    }

    int sum2 = (n*(n+1))/2;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i+1])
        {
            cout<<"Repeating Element : "<<arr[i]<<endl;
            sum1 = sum1 - arr[i];
        }
        
    }
    int ans = sum2 - sum1;
    cout<<"Missing Element : "<<ans;

}

int main(){
    int arr[] = {4,3,6,2,1,1};
    
    RepeatAndMissingNo(arr, 6);

    return 0;
}