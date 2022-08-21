#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,1,9,2,6,1,8,9,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Smallest = "<<arr[0]<<endl;
    cout<<"2nd Smallest = ";
    for(int i = 0;i<size;i++){
        if(arr[0]!=arr[0+i]){
            cout<<arr[0+i]<<endl;
            break;
        }
    }
    cout<<"Largest = "<<arr[size-1]<<endl;
    cout<<"2nd Largest = ";
    int temp= 0;
    for(int k=size-1;k>=0;k--){
        if(arr[size-1]!=arr[size-1-temp]){
            cout<<arr[size-1-temp]<<endl;
            break;
        }
        else temp+=1;
    }
    return 0;
}
