#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <limits.h>
#define RANGE 255
using namespace std;

class solution{
    public:
    string countSort(string arr){
        
        int freq[256]={0};
        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        string s = "";
        for (int i = 0; i < 256; i++)
        {
            for (int j = 0; j <freq[i] ; j++)
            {
                s+=char(i);
            }
            
        }
        return s;
        
    }
};

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }

    return 0;
}