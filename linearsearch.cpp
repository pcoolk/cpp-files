#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
        for(int i=0;i<size;i++){
            if(arr[i]==key){
                return 1;
            }
        }
        return 0;
    }
int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"enter the elements "<<i+1<<":";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter the key: ";
    cin>>key;
    bool found = search(arr,size,key);
    if (found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present";
    }
    
    return 0;
}