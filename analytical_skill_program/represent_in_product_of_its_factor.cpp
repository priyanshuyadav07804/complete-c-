//write a program to represent a number if form of product of its two different factors and also find no of ways to do it
#include <iostream>
using namespace std;
// 1 2 3 4 6 12
int main() {
	int n=12;
	int ways=0;
	int arr[6];

	
	for(int i=1,y=0;i<=n && y<=5;i++,y++){
	    if(n%i==0){
	        arr[y]=i;
	    }
	    else{
	        y--;
	    }
	}
	for(int x =0;x<6;x++){
	    cout<<arr[x]<<ends;
	}
	cout<<endl;
	for(int j=0;j<3;j++){
	    for(int k=0;k<6;k++){
	        if(arr[j]*arr[k]==n){
	            ways++;
	            cout<<arr[j]<<"*"<<arr[k]<<" ways = "<<ways<<endl;
	        }
	    }
	}
	cout<<ways;
	return 0;
}
