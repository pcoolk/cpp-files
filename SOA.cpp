#include<iostream>
using namespace std;

int sumofarr(int num[],int n){
    int sum;
    
    for(int i=0;i<n;i++){
        sum = i+n-1;
    }
    return sum;
}

int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
        cout<<"The array is: "<< num[i];
    }
    cout<<"the sum of array is: "<<sumofarr(num,size);
    return 0;
}