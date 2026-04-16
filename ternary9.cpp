#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter a value:";
cin>>a;
//ternary operator syntax: condition ? expression1 : expression2; if condition is true, expression1 is executed, otherwise expression2 is executed it is a shorthand for if-else statement
a>=100 ? cout<<"a is greater than or equal to 100"<<endl : cout<<"a is less than 100"<<endl;
return 0;
}