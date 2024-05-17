#include<iostream>
using namespace std;

void evenodd(int arr[], int size){
    int even = 0;
    int odd = 0;

    for(int i=0;i<size;i++){
        if(arr[i]&1==1){
            odd++;
        }
        else
        even++;
    }
    cout<<"Even count is: "<<even<<endl;
    cout<<"Odd count is: "<<odd;
}
void Printarray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int even[7]= {1,2,3,4,5,6,7};
    Printarray(even,7);
    evenodd(even,7);
    
    return 0;
}