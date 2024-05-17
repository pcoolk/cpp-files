// This is first DSA problem of array
// swap alternatives
// We need to swap alternate elements of the array

#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapalternatives(int arr[], int size){
    for(int i=0;i<size;i+=2){                   //here instead of i++ we have to initialize by 2 which is i+=2, so that it does not swap every other element.
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {2,3,4,5,6};

    cout<<"Original arrays:"<<endl;
    PrintArray(even,6);
    cout<<endl;
    PrintArray(odd,5);
    cout<<endl;

    cout<<"Array after swapping: ";
    swapalternatives(even,6);
    cout<<endl;
    swapalternatives(odd,5);

    PrintArray(even,6);
    PrintArray(odd,5);

    return 0;
}