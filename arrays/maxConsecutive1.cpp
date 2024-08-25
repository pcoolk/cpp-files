#include<bits/stdc++.h>
using namespace std;

int maxconsecutive(vector<int>& nums){
    int cnt = 0;
    int maxi = 0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        maxi = max(maxi,cnt);

    }
    return maxi;
}


int main(){
    vector<int> nums = {1,1,0,1,1,1};
    int ans= maxconsecutive(nums);
    cout<<"Maximum no. of cosecutive 1s is: "<<ans<<endl;
    return 0;
}