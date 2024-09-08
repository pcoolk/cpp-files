// Find the longest sub-array with given sum k.
// Ex - [2,3,5], K = 5. In this we have to print the size of longest sub array which is = k. 
// output - 2. this is the size of [2,3].
// This has 3 approches.


#include<bits/stdc++.h>
using namespace std;
// Brute force approach
// We will generate all possible sub-arrays.

// int getLongestSubarray(vector<int>& a, long long k) {
//     int n = a.size(); // size of the array.

//     int len = 0;
//     for (int i = 0; i < n; i++) { // starting index
//         for (int j = i; j < n; j++) { // ending index
//             // add all the elements of
//             // subarray = a[i...j]:
//             long long s = 0;
//             for (int K = i; K <= j; K++) {
//                 s += a[K];
//             }

//             if (s == k)
//                 len = max(len, j - i + 1);
//         }
//     }
//     return len;
// }

// Better Approach - using hashing

int getLongestSubarray(vector<int>& a,long long k){
    int n = a.size();
    map<long long,int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i =0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem = sum -k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen = max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]==i;
        }
    }
    return maxLen;
}

int main(){        
    
    vector<int> arr = {2,3,5};
    long long k=5;
    int ans = getLongestSubarray(arr,k);
    cout<<"The longest sub-array is: "<<ans<<endl;
    return 0;
}