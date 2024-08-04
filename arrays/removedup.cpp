// Remove duplicates from the sorted array
// Brute Force method
#include<bits/stdc++.h>
using namespace std;

int remdup(int arr[], int n){
    set<int>set;
    for(int i =0;i<n;i++){
        set.insert(arr[i]);
    }
    int k=set.size();
    int j=0;
    for(int x:set){
        arr[j++] = x;
    }
    return k;
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,1,1,2,2,3,3,3};
    int nsize = remdup(arr,8);  //new size after removing duplicates is stored in this variable
    PrintArray(arr,nsize);
    return 0;
}