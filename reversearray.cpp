#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start=0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void PrintArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){

    int arr[100];
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    for(int i =0;i<size;i++){
        cout<<"enter the element "<<i+1<<":"<<" ";
        cin>>arr[i];
    }
    PrintArray(arr,size);
    reverse(arr,size);
    cout<<endl;
    cout<<"reversed array: ";
    PrintArray(arr,size);
    
    return 0;
}