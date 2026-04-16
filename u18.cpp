#include<iostream>
using namespace std;
class complex{
    public :
    int real=0;
    int imag=0;
    complex(){
        cout<<"enter real part: ";
        cin>>real;
        cout<<"enter imaginary part: ";
        cin>>imag;
        cout<<real<<" + "<<imag<<"i";
        
    }              
};
int main(){
complex c1;


return 0;
}