#include<iostream>
using namespace std;
template <typename T, typename U>
auto add (T a,U b){
    return b;
}
int main(){
int a;
float b;
cout<<"enter two numbers: ";
cin>>a>>b;
cout<<"the division is: "<<add(a,b);
return 0;
}
// when we initialise a variable we assign it a data type which goes in the function then according to  the data type function  recived  auto changes to that data type
// like if we give int and float then auto becomes float
// if we give int and int then auto becomes int
// if we give float and float then auto becomes float
// if we give char and int then auto becomes int because char is converted to int according to ascii value if we do math on char it works on its ascii value otherwise we it is treated as char
// if we give char and char then auto becomes int because char is converted to int according to ascii value
// if we give double and float then auto becomes double because double has more precision than float
// if we give double and int then auto becomes double because double has more precision than int
//and more such combinations