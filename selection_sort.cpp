/*  In the selection sort we sort it in ascending order. For that we take minimum
    element at every step and replace it with the element at that index.
    for ex - 
    for an array - [13,46,24,52,20,9]
    1st step - The minimum element is = 9. therefore, new array is: [9,46,24,52,20,13]
    note the 9 takes place of 13 and moves to end in place of 9.
    step 2 - [9,13,24,52,20,46], 13 replaces 46 and vice versa.
    step 3 - [9,13,20,52,24,46], 20 replaces 24 as the 3rd minimum element.
    step 4 - [9,13,20,24,52,46], 24 replaces 52.
    step 5 - [9,13,20,24,46,52], 46 replaces 52.
    final sorted array  - [9,13,20,24,46,52] in ascending order.
    */

   #include<bits/stdc++.h>
   using namespace std;

   void selection_sort(int arr[],int size){
    for(int i =0;i<size-1;i++){
        int min = i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
   }

   void PrintArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
   int main(){
    
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Input array: ";
    PrintArray(arr,size);
    selection_sort(arr,size);
    cout<<"Sorted array: ";
    PrintArray(arr,size);
    return 0;
   }