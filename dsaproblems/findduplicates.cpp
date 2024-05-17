#include<iostream>
#include<vector>
using namespace std;

int findduplicates(vector<int>& arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i]; //in this for loop full array is XORed by ans which is = 0
                        // the output for this for-loop is 6.
    }
    for(int i=0;i<arr.size();i++){      //in this for loop the output of above for loop(6) is XORed with every index of the array, ex- 6^0, 6^1, 6^2, etc.
                                        // the output of this for loop is 7. which is the final output.
        ans=ans^i;
    }                           
    return ans;
                            
}

int main(){
    vector<int> arr={2,5,6,7,8,9,7};
    cout<<"The Duplicate elements are: "<<findduplicates(arr)<<endl;
    return 0;
}