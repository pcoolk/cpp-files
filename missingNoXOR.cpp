#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>&a, int n){
    int xor1=0; int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1 = xor1^n;
    return(xor1^xor2);
}

int main(){
    int n=5;
    vector<int> a = {1,3,4,5};
    int ans = missing(a,n);
    cout<<"The missing number is: "<<ans<<endl;
    return 0;
}