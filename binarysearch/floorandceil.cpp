#include<bits/stdc++.h>
using namespace std;

int getFloor(int arr[],int n, int x){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int getCeil(int arr[],int n, int x){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

pair<int,int> getFloorandCeil(int arr[],int n,int x){
    int f = getFloor(arr,n,x);
    int c = getCeil(arr,n,x);
    return make_pair(f,c);
}

int main(){
    int arr[] = {3,4,4,7,8,10};
    int n = 6; int x = 5;
    pair<int,int> ans = getFloorandCeil(arr,n,x);
    cout<<"The floor is: "<<ans.first<<" "<<"The ceiling is: "<<ans.second<<endl;
    return 0;
}