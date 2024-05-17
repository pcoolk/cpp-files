#include<iostream>
#include<vector>
using namespace std;

//used vector taki badi badi array bhi initialize kr paye, aur size ko bina predefine kiye result mile

//main binary search code
int binarysearch(vector<int> &arr,int key){
    int start = 0;
    int end=arr.size()-1;
    int mid = start+ (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start+ (end-start)/2;
    }
    return -1;
}
//binary search code ends here 

void Printarray(const vector<int> &arr){
    for(int num: arr){
        cout<<num<<" ";

    }
    cout<<endl;
    }
int main(){
    vector<int> even = {2,3,4,5,6,7,8,9,10,12,13,14,15,16,17,18,19,20};
    vector<int> odd = {2,3,4,5,6,7,8,9,90,91,93,94,95,96,97,98,99};
    int key, choice;    
    
    cout<<"1. Even Array: "<<endl;
    Printarray(even);
    cout<<"2. Odd Array: "<<endl;
    Printarray(odd);
    cout<<"Which array you want to choose?: ";
    cin>>choice;

    cout<<"enter key: ";
    cin>>key;

    if(choice==1){
    cout<<"The index of "<<key<<" is: "<<binarysearch(even,key);}
    else if(choice==2){
        cout<<"The index of "<<key<<" is: "<<binarysearch(odd,key);}
    else{
        cout<<"Invalid!";
    }
    
    return 0;
}