#include<bits/stdc++.h>
using namespace std;

int Arrmax(int p[5]){
    int max=p[0];
    for(int i=0;i<5;i++){
        if(p[i]>=max){
            max=p[i];
        }
    }
    return max;
}
int Arrmin(int p[5]){
    int min=p[0];
    for(int i=0;i<5;i++){
        if(p[i]<=min){
            min=p[i];
        }
    }
    return min;
}
int Arrsum(int p[5]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=p[i];
    }
    return sum;
}
void minmaxsum(int p[5]){
    int min=Arrmin(p);
    int max=Arrmax(p);
    int maxsum=Arrsum(p)-min;
    int minsum=Arrsum(p)-max;
    cout<<minsum<<ends<<maxsum;
}
int main(){
    int arr[5];
    cout<<"enter elements of array : "<<endl;
    for(int i=0;i<5;i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    minmaxsum(arr);
    return 0;

}
