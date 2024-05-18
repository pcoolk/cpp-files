/*
In bubble sort also we sort in ascending order. We swap adjacent elements of the array and push the max number to the last with
each step.
for example:  [13,46,24,52,20,9]
in step 1: since 13 and 46 are in correct order, 13<46, therefore they are not swapped.
24 is swapped with 46, 52 is swapped with 20 and 9 is swapped with 52 and hence the max number is pushed to last. that is 52.
new array after step 1: [13,24,46,20,9,52]
loop continues until all the elements are sorted.
*/

#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

 void PrintArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
   int main(){
    
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Input array: ";
    PrintArray(arr,size);
    bubble(arr,size);
    cout<<"Sorted array: ";
    PrintArray(arr,size);
    return 0;
   }