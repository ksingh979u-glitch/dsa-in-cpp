#include<iostream>
using namespace std;
int main(){
const int a=10;//when we put constant before variable it become constant variable
int b;
//a=20; // This line will cause a compilation error because 'a' is declared as const
cout<<"enter  b:";
cin>>b;
cout<<"sum=: "<<a+b<<endl;

return 0;
}