#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]={5,1,4,1,9,2,6,8,7};

    int size=sizeof(arr)/sizeof(arr[0]);
	int k=0;
	
    for(int i = 0;i<size;i++){
		if(arr[i]%2==0){
			for(int j=i;j>0+k;j--){
				int temp = arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		 	k++;			//{even,even,...,odd,odd...in order as they appear in input}
			// k+=2;		//{even,odd,...,even,odd...in order as they appear in input}
		}
		
	}
	
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
