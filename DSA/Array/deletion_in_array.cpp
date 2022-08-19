#include<bits/stdc++.h>
using namespace std;
// It is important to put break in every case of Switch Statement
void direct_del(int* arr,int size){
    int element,index,count=0;
    cout<<"enter element to delete : ";
    cin>>element;
    for(int i = 0;i<size;i++){
        if(arr[i]==element){
            index = i;
            count++;      //this come into game when element not present in array 
            break; 
        }  
    }
    if(count==0){
        cout<<element<<" not found in array";
        return;
    }
    for(int j = index+1;j<size;j++){
        arr[j-1] = arr[j];
    }
    size = size-1;
    for(int j = 0;j<size;j++){
    cout<<arr[j]<<" ";
    }
}
void index_del(int* arr,int size){
    int index ;
    cout<<"Enter index to delete the element : ";
    cin>>index;
    if(index>=size){
        cout<<"Index is not valid";
        return ;
    }
    for(int i = index+1;i<size;i++){
        arr[i-1] = arr[i];
    }
    size = size-1;
    for(int j = 0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}
int main(){
    //For Deletion we have to shift elements to lesser index
    int arr[] = {34,50,12,65,29,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    int choice;
    cout<<"press 1 for direct deleting element or press 2 for delete using index : ";
    cin>>choice;
    switch(choice){
        case 1:{
            direct_del(arr,size);    //for delete direct element from array ->
            break;
        }  
        case 2: {
            index_del(arr,size);     //for delete element at given index ->     
            break;
        }
    }
    return 0;
}
