#include<bits/stdc++.h>
using namespace std;

string twosum(vector<int>& a, int target, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target)return "Yes";
        }
    }
    return "No";
}
// below code to print the indices of two elements which pair up to give target

vector<int> indextwosum(vector<int>& a,int n,int target){
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return{-1,-1};
}

int main(){
    vector<int> a={2,6,5,8,11};
    int target = 14;
    int n = 5;
    string ans = twosum(a,target,n);
    vector<int> index = indextwosum(a,n,target);
    cout<<ans<<endl;
    cout<<"The indexes are: ["<<index[0]<<","<<index[1]<<"]"<<endl;
    return 0;
}