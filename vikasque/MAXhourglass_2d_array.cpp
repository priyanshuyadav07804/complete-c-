#include<bits/stdc++.h>
using namespace std;

int maxhgs(int p[4][4]){
    int max=p[0][0];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(p[i][j]>=max){
                max=p[i][j];
            }
        }
    }
    return max;
}

int hourglasssum(int arr[6][6]){
    int arsum[4][4],a,b,c,d,e,f,g;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            a=arr[i][j];
            b=arr[i][j+1];
            c=arr[i][j+2];
            d=arr[i+1][j+1];
            e=arr[i+2][j];
            f=arr[i+2][j+1];
            g=arr[i+2][j+2];
            arsum[i][j]=a+b+c+d+e+f+g;
        }
    }
    return maxhgs(arsum);
}

int main(){
    int arr[6][6];
    cout<<"enter array's elements"<<endl;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<"arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    // cout<<"array = "<<endl;
    // for(int i=0;i<6;i++){
    //     for(int j=0;j<6;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }

    cout<<"max hourglasssum = "<<hourglasssum(arr);
    return 0;
}
