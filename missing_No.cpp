#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>&a,int n){
    vector<int> hash(n+1,0);                 
    for(int i = 0;i<n-1;i++){               
        hash[a[i]]++;
    }
    for(int i=1;i<n;i++){               
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int n = 5;
    vector<int> a={1,3,4,5};
    int ans = missing(a,n);
    cout<<"The missing Number is: "<<ans<<endl;
    return 0;
}