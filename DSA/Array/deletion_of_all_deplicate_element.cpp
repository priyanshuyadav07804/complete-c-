#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,3,3,4,4,4,4,4,63,63,63,63,63};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element,count = 0;
    for(int x=0;x<size;x++){
        element = arr[x];
        for(int z = x;z<size;z++){
            if(arr[z]==element){
                count++;
            }
        }
        for(int i = 0;i<count-1;i++){
            for(int y= x+1;y<size;y++){
                arr[y-1]=arr[y];
            }
        size = size-1;
        }
    }
    for(int j = 0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
