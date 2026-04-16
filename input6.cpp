#include<iostream>
using namespace std;
int main(){
string s;
int age;

cout<<"enter age";//whenwe we take any input  before getline() function we have to use ws(function to ignore the newline character left in the input buffer
cin>>age;
cout<<"enter name";
getline(cin>>ws,s);
cout<<"name: "<<s<<endl;
cout<<"age: "<<age<<endl;
return 0;
}