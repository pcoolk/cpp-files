#include<iostream>
using namespace std;

int firstoccur(int arr[], int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end = mid-1;
        }
        else if(arr[mid]<key){           //key badi hai middle element se toh right mai jana hai  
            start = mid+1;
        }
        else{                           //key chhoti hai middle element se toh left mai jana hai
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastoccur(int arr[], int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start = mid+1;
        }
        else if(arr[mid]<key){      //key badi hai middle element se toh right mai jana hai
            start = mid+1;
        }
        else{                       //key chhoti hai middle element se toh left mai jana hai
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){

    int arr[5] = {1,2,3,4,5};
    cout<<"First occurence of 3 is: "<<firstoccur(arr,5,3)<<endl;
    cout<<"Last occurence of 3 is: "<<lastoccur(arr,5,3);
    return 0;
}