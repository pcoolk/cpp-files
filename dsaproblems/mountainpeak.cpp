#include<iostream>
#include<vector>
#include<utility>
#include<cstdlib>

using namespace std;

    pair<int,int> mountain(vector<int>& arr){
        int start = 0;
        int end = arr.size()-1;
        int mid = start+(end-start)/2;

        while(start<end){
            if(arr[mid]<arr[mid+1]){
                start = mid+1;
            }
            else{
                end=mid;
            }
            mid = start+(end-start)/2;
        }
        return make_pair(start,arr[start]);
    }

    void printarray(vector<int>& arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main(){
    vector<int> arr={1,2,3,15,6,8,9,13,22,44,32,55};
    pair<int,int> result = mountain(arr);
    cout<<"Choose an array"<<endl;
    cout<<"Array 1:"<<endl;
    printarray(arr);
    int choice;
    cout<<"choice: ";
    cin>>choice;
    if(choice==1){
        cout<<"The Index of the peak element is: "<<result.first<<endl;
    cout<<"The element is: "<<result.second;
    }
    else{
        cout<<"Array not present."<<endl;
        exit(EXIT_SUCCESS);
    }
    
    
    return 0;
}