#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }

    /*  EXAMPLE:
        here it iterates through each element of array. Ex. arr = [1,2,3,1,3].
        
        Key   : Value
        ------------
        1     : 2
        2     : 1
        3     : 2

    */

    map<int,int> mpp;
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"How many queries you wanna ask?: ";
    cin>>q;
    cout<<"enter the queries: ";
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    return 0;
}