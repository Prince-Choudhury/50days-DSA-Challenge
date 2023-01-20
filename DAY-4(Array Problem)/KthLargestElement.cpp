#include<iostream>
#include<algorithm>
#include<vector>
#include <limits.h>
using namespace std;


int findKthLargest(vector<int>& arr, int k) {

        sort(arr.begin(), arr.end());

        int n = arr.size();

        return arr[n-k];

}

int main(){

    vector<int> arr{3,2,3,1,2,4,5,5,6};

    cout<<findKthLargest(arr, 4);

    return 0;
}
