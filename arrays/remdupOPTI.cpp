#include<iostream>
using namespace std;

int remdup(int arr[], int n){
    int i = 0;
    for(int j= 0; j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;
        }        
    }
    return i+1;
}

void PrintArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]= {1,1,1,2,2,3,4};
    int nsize = remdup(arr, 7);
    PrintArray(arr,nsize);
    return 0;
}