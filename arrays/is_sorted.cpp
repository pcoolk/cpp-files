// the question is to check if the given array is sorted or not
#include<iostream>
using namespace std;

bool is_sorted(int arr[], int n){
    for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int arr[] = {1,6,2,5,7};
    bool ans = is_sorted(arr,5);
    cout<<ans;    
    return 0;
}
// 1- true, 0- false