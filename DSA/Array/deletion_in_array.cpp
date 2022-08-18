#include<bits/stdc++.h>
using namespace std;

int main(){
    //For Deletion we have to shift elements to lesser index
    int arr[] = {34,50,12,65,29,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    int choice;
    cout<<"press 1 for direct deleting element or press 2 for delete using index : ";
    cin>>choice;
    switch(choice){
        case 1: {     //for delete direct element from array :
            int element,index,count;
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
                return 0;
            }
            for(int j = index+1;j<size;j++){
                arr[j-1] = arr[j];
            }
            size = size-1;
            for(int j = 0;j<size;j++){
            cout<<arr[j]<<" ";
            }
        }
        case 2: {     //for delete element at given index ->
            int index ;
            cout<<"Enter index to delete the element : ";
            cin>>index;

            for(int i = index+1;i<size;i++){
                arr[i-1] = arr[i];
            }
            size = size-1;
            for(int j = 0;j<size;j++){
                cout<<arr[j]<<" ";
            }
        }
    }
    return 0;
}
