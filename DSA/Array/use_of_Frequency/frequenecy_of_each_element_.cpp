#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr[10] = {"JAVA","PYTHON","DS","DBMS","JAVA","JAVA","PYTHON","DS","DS","DS"};
    int size = 10;
    string element;
    int count=0;
    int c = 0;
    int maxfr=0;
    string maxele = ""; 
    for(int y = 0;y<size;y++){
        element = arr[y];
        if(y == 0){
            for(int x=0;x<size;x++){
                if(arr[x]==element){
                    count++;
                }
            }
            // cout<<"frequency of "<<element<<" = "<<count<<endl;
            if(count>maxfr){
                maxfr = count;
                maxele = element;
            }
            count = 0;
        }
        else{
            for(int z = 0;z<y;z++){
                if(element == arr[z] ){
                    c++;
                    break;
                }
            }
            if(c==0){
                for(int x=0;x<size;x++){
                    if(arr[x]==element){
                        count++;
                    }
                }
                // cout<<"frequency of "<<element<<" = "<<count<<endl;
                if(count>maxfr){
                    maxfr = count;
                    maxele = element;
                }
                count = 0;
            }
        }
    }
    cout<<maxele<<" lecture is repeating "<<maxfr<<" times"<<endl;
    return 0;
}
