#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;


int search(int arr[], int n, int target) {
    
        int s = 0 , e = n-1;

        while(s <= e){
            int mid = s +(e-s)/2;
            if(arr[mid] == target) return arr[mid];
            
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

    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n);

    int target = arr[0];

    cout<<search(arr, n, target);

    return 0;
}


/*class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int minval=INT_MAX;
        while(s<=e){
            if(nums[s]<nums[e]){
                minval=min(minval,nums[s]);
                break;
            }
            int mid = s +(e-s)/2;
            
            if(nums[s]<=nums[mid]){
                minval=min(minval,nums[s]);
                s=mid+1;
            }
            else{
                minval=min(minval,nums[mid]);
                e=mid-1;
            }
        }
        return minval;
    }
};*/