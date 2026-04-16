#include<iostream>//usefull maths function also use #include<cmath>
#include<cmath>
using namespace std;
int main(){
double a,b;
double z;
cout<<"enter a :";
cin>>a;
cout<<"enter b :";
cin>>b;
z=max(a,b);//max function returns the maximum value between a and b
cout<<"maximum value is: "<<z<<endl;
double y=min(a,b);//min function returns the minimum value between a and b
double p=pow(a,b);//pow function returns the value of a raised to the power of b
double q=sqrt(a);//sqrt function returns the square root of a
double r=abs(-9);//abs function returns the absolute value of a
double c=round(a);//round function rounds the value of a to the nearest integer
double f=ceil(a);//ceil function rounds the bigger value
double d=floor(a);//floor function rounds the value to smaller value

cout<<"absolute value of -a is: "<<r<<endl;
cout<<"minimum value is: "<<y<<endl;
cout<<"value of a raised to power b is: "<<p<<endl;
cout<<"square root of a is: "<<q<<endl;
cout<<"floor value of a is: "<<d<<endl;
cout<<"ceil value of a is: "<<f<<endl;
cout<<"round value of a is: "<<c<<endl;
return 0;
}