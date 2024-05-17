#include<iostream>
using namespace std;

void rec(int i, int n){
    if(i<1){
        return;
    }
    
    rec(i+1,n);
    cout<<i<<endl;
    
}

int main(){
int n;
cin>>n;
rec(n,n);
    return 0;
}