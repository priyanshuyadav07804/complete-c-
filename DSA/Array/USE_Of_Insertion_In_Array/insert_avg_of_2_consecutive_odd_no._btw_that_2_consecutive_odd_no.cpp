#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {2,3,5,6,7,9,10};
//     o/p = {2,3,4,5,6,7,8,9,10};
    int size = 7;
    int temp = 0;
    int count = 0;
    int avg;
    for(int i = 0;i<size;i++){
        if(arr[i]%2!=0){
            temp= arr[i] + temp;
            count++;
            if(count == 2){
                if(arr[i]-arr[i-1] == 2){
                    avg = temp /2;
                    count = 0;
                    temp = 0;
                    int pos = i+1;
                    if(pos>=0 && pos<=size){       
                        for(int i = size ; i>=pos-1; i--){
                            arr[i+1]=arr[i];
                        }
                    }
                    arr[i] = avg;
                    i++;
                }   
            }
        }
    }
    for(int i = 0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
