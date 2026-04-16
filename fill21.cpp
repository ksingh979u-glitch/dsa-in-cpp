#include<iostream>
using namespace std;// if i need to initialise  100 element in an array typing it manually is tough so
//we can use fill(begin ,end, value)
int main(){
    string arry[100];
    fill(arry,arry+100,"virat kohli");
    for (int i = 0; i <100; i++)
    {
        cout<<arry[i]<<endl;
    }
    //if i want to initialise 2 diffrent thing in half then we will do this
    /* fill(arry,arry+100/2,"virat kohli");
    fill(arry+100/2,arry+100,"king"); */

return 0;
}