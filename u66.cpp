#include<iostream>
using namespace std;
int main(){
int a=0,b=0;
cout<<"enter a and b ";
cin>>a>>b;
try
{
    if (b==0)
    {
        throw "can not devide by zero";
    }
    cout<<a/b;

}
catch(const char *k){
    cout<<"exception found "<<k<<endl;
}


return 0;
}