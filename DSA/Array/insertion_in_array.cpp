#include<bits/stdc++.h>
using namespace std;

int main(){
    // if array is full we cant make insertion in that array 
    // we must have a empty location in array for insertion of new element 
    // insertion at particular location so shift the elements to higher index from that specific index

    int arr[7] = {43,52,56,33,18,76};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element,pos;
    cout<<"enter element to insert : ";
    cin>>element;
    cout<<"enter position to insert : ";
    cin>>pos;
    if(pos>=0 && pos<=size){       //Shifting elements to right side
        for(int i = size-2 ; i>=pos-1; i--){
           arr[i+1]=arr[i];
        }
    }
    else{
        cout<<"Wrong position detected : ";
        return 0;
    }
    arr[pos-1] = element;           //Putting elements to specific index
    cout<<"New Array = { ";
    for(int j = 0; j<size;j++){     //Traversing array
        cout<<arr[j]<<" " ;
    }
    cout<<"}";
    return 0;
}
