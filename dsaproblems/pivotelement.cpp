#include<iostream>
#include<vector>
using namespace std;

int pivotelemnt(vector<int>& arr){
    int start = 0;
    int end = arr.size()-1;

    while(start<end){
        int mid = start+(end-start)/2;
        if(arr[mid]>arr[mid+1]){
            return arr[mid+1];
        }
        if(arr[mid-1]>arr[mid]){
            return arr[mid];
        }
        if(arr[start]<arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

    }
    return arr[0];
}

int main(){
    vector<int> nums = {7,9,1,2,3};
    cout<<pivotelemnt(nums);
    return 0;
}