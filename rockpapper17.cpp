#include<iostream>
#include<ctime>
using namespace std;
int main(){
   
    int guess;
    srand(time(NULL));
    
do{
    cout<<"for stone enter 1, for paper enter 2, for scissors enter 3"<<endl;
    cout<<"if want to exit the game enter 0"<<endl;
    cout<<"enter: ";
    cin>>guess;
    int a=(rand()%3)+1;
    
    if(guess==0)
    {
        cout<<"thanks for playing"<<endl;
        break;
    }
    
    
    if (guess == 1&&a==1)
    {
        cout<<"computer chose stone"<<endl;
        cout<<"it's a tie"<<endl;
    }
    else if (guess == 1&&a==2)
    {
        cout<<"computer chose paper"<<endl;
        cout<<"you lose"<<endl;
        
    }
    else if (guess == 1&&a==3)
    {
        cout<<"computer chose scissors"<<endl;
        cout<<"you win"<<endl;
        
    }
    else if (guess == 2&&a==1)
    {
        cout<<"computer chose stone"<<endl;
        cout<<"you win"<<endl;
    }
    else if (guess == 2&&a==2)
    {
        cout<<"computer chose paper"<<endl;
        cout<<"it's a tie"<<endl;
    }
    else if (guess == 2&&a==3)
    {
        cout<<"computer chose scissors"<<endl;
        cout<<"you lose"<<endl;
    }
    else if (guess == 3&&a==1)
    {
        cout<<"computer chose stone"<<endl;
        cout<<"you lose"<<endl;
    }
    else if (guess == 3&&a==2)
    {
        cout<<"computer chose paper"<<endl;
        cout<<"you win"<<endl;
    }
    else if (guess == 3&&a==3)
    {
        cout<<"computer chose scissors"<<endl;
        cout<<"it's a tie"<<endl;
    }
    else{
        cout<<"invalid input try again"<<endl;
    }
}while(guess!=0);
    


return 0;
}