// To find the element which does not repeat in a array with elements repeating once.
// ex - [1,1,2,3,3], answer = 2
#include<bits/stdc++.h>
using namespace std;

int getelement(vector<int>&arr){
    int n = arr.size();

    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
    }
    return xorr;
}

int main(){
    vector<int> arr={1,1,2,3,3};
    cout<<getelement(arr)<<endl;
    return 0;
}