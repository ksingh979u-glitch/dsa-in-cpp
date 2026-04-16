#include<iostream>
using namespace std;
int fact(int n){
    if (n==0)
    {
    return 1;
    }
    int factorial=n*fact(n-1);
    return factorial;
}
int main(){
    int n;
    cout<<"enter n";
cin>>n;
cout<<n<<"! = "<<fact(n) ;
return 0;
}