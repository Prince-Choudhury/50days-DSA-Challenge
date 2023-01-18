#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;

int search(int arr[], int n, int target) {
    
        int s = 0 , e = n-1;

        while(s <= e){
            int mid = s +(e-s)/2;
            if(arr[mid] == target) return mid;
            
            //if left half is sorted 
            if(arr[s] <= arr[mid]){
                // check if target lies in left side
                if(target <= arr[mid] && target >= arr[s]) e = mid-1;
                else s = mid + 1;
            }    
            //if right side is sorted 
            else{
                // check if target lies in right side
                if(target >= arr[mid] && target <= arr[e]) s = mid+1;
                else e = mid-1;
            }
        }
        return -1;
    }

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int target = 0;

    cout<<search(arr, 7, target);

    return 0;
}