#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]={5,1,9,2,6,8,7};
    
//  int o/p[]={9,1,8,2,7,5,6};

    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i+=2){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        for(int k = i+2;k<size;k++){
            if(arr[i+1]>arr[k]){
                int temp = arr[k];
                arr[k]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
