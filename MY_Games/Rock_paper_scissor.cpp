#include<bits/stdc++.h>
using namespace std;

int main(){
    char y;
    string you,com;
    string choice[] = {"Stone","Paper","Scissor"};
    srand ( time(NULL) );
    cout<<"Press 'r' for ROCK, 'p' for PAPER and 's' for SCISSOR"<<endl;
    cout<<"your turn : ";
    cin>>y;
    if(y == 'r'){
        you = "Rock";
    }
    if(y == 'p'){
        you = "Paper";
    }
    if(y == 's'){
        you = "Scissor";
    }

    int i = rand() %3;     //generate a random value between 0 to 2
    com = choice[i];

    if(you == com){
        cout<<"Game draw !";
    }
    else if(you == "Rock" && com == "Scissor" ){
        cout<<"Wow! You have won the game!"<<endl;
    }else if(you == "Rock" && com == "Paper" ){
        cout<<"Oh! You have lost the game!"<<endl;
    }

    else if(you == "Paper" && com == "Rock" ){
        cout<<"Wow! You have won the game!"<<endl;
    }else if(you == "Paper" && com == "Scissor" ){
        cout<<"Oh! You have lost the game!"<<endl;
    }
    
    else if(you == "Scissor" && com == "Paper" ){
        cout<<"Wow! You have won the game!"<<endl;
    }else if(you == "Scissor" && com == "Rock" ){
        cout<<"Oh! You have lost the game!"<<endl;
    }
    else{
        cout<<"Invalid choice! Please try again"<<endl;
        return 0;
    }

    cout<<"Your Choice : "<<you<<" \t Computer Choice : "<<com<<endl;

    return 0;
}
