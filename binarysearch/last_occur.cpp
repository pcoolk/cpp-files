#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int key, int n){
    int start = 0;
    int end = n-1;
    int res = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(v[mid]==key){
            res = mid;
            start=mid+1;
        }
        else if(key<v[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}

int main(){
    vector<int> v = {2,4,4,4,5,6};
    int key = 4;
    int n = 6;
    cout<<"The last index of 4 is: ";
    cout<<solve(v,key,n)<<endl;
    return 0;
}