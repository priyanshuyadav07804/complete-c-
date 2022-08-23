#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,3,3,4,4,4,4,4,63,63,63,63,63};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element,count=0;
    for(int y = 0;y<size;y=y+count){
        element = arr[y];
        count = 0;
        for(int x=0;x<size;x++){
            if(arr[x]==element){
                count++;
            }
        }
        cout<<"frequency of "<<element<<" = "<<count<<endl;
    }
    return 0;
}
