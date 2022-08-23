#include<bits/stdc++.h>
using namespace std;

void direct_del(int arr[],int size){
    int element,index,count=0;
    cout<<"enter element to delete : ";
    cin>>element;
    for(int i = 0;i<size;i++){
        if(arr[i]==element){
            index = i;
            count++;                       //this come into game when element not present in array.
        }  
    }
    if(count==0){
        cout<<element<<" not found in array";
        return;
    }
    int del = 0;                           //only for deleting duplicate elements.
    for(int i = 0;i<count;i++){
        for(int j = index+1-del;j<size;j++){
            arr[j-1] = arr[j];
        }
        del++;
        size = size-1;
    }
    for(int j = 0;j<size;j++){
    cout<<arr[j]<<" ";
    }
}

int main(){
    //For Deletion we have to shift elements to lesser index
    int arr[] = {34,50,12,12,65,29,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    direct_del(arr,size);    //for delete direct element from array ->

    return 0;
}
