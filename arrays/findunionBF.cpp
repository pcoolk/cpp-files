// Find the union of two arrays.
// This is Optimal approach- using Set

#include<bits/stdc++.h>
using namespace std;

vector<int>find_union(int arr1[],int arr2[],int n,int m){
    set<int>s;
    vector<int>Union;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    for(auto & it:s){
        Union.push_back(it);       
    }
    return Union;

}

int main(){
    int arr1[]= {1,2,3,4,5,6,7,8,9,10};
    int arr2[]= {2,3,4,4,5,11,12};
    vector<int>Union = find_union(arr1,arr2,10,7);
    cout<<"The union of array 1 and 2 is: "<<endl;
    for(auto&val:Union){
        cout<<val<<" ";
    }
    return 0;
}