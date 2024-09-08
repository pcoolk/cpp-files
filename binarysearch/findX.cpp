// this question is an intro to binary search. Q- Find x in a sorted array using binary search.

#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    
   while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target) return mid;
    else if(target>arr[mid]) low=mid+1;
    else high=mid-1;
   }
   return -1;
}


int main(){
    vector<int> arr={1,3,13,43,56,67,68,77};
    int target = 56;
    int ans = search(arr,target);
    if(ans==-1)cout<<"Target not present."<<endl;
    cout<<"Target is at index: "<<ans<<endl;
    return 0;
}