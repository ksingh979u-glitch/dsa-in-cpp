#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b;
cout<<"enter a and b:";
cin>>a>>b;
float s=sqrt(pow(a,2)+pow(b,2));
cout<<"hypotenuse is: "<<s<<endl;
return 0;
}