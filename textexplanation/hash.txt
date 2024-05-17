/* hashing basics
example array [1,2,1,3,2]
this is used to find frequency(no. of occurences of an element) in an array.

brute force approach can be of linear search
int key;
cin>>key;
for(int i=0;i<arraysize;i++){
 if(i==key){
 count++;
} 
}
but we have to do it using hashing.

first option is to use hash array.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // first we have to input the size of the array.
    int n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    // then input the array elements.
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    //this is the part where hashing is done:

    /*13 hash array ka size hai. ye kuch bhi ho skta hai but just experiment k liye 13 liye hai because ham maximum 12 size ki array hee use 
    kar rahe hai isme. aur iss samay iski value 0 hai jo aagey badhegi.*/
    int hash[13] = {0};
    // ab ham isko initialize karenge
    for(int i=0;i<n;i++){
        // iss step pe hash array ki value badh rahi hai +1 se.
        hash[arr[i]]+=1;
    }
    // iss step k baad niche print karni value.

    // take input of how many queries we will ask, that is how many numbers we will ask.
    int q;
    cout<<"how many queries you want to ask? ";
    cin>>q;
    // then we will input the queries of number we want to check frequency off.
    cout<<"enter the numbers: ";
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl; //yaha number print ho rha hai.
    }

    return 0;
}

// now the second option is to use a hash map.
// hash map is in other file, hashmap.cpp