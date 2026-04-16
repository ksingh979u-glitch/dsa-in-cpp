#include<iostream>
using namespace std;
namespace first{
    
        int a=10;

    }
    namespace second// namespace is used to avoid name conflicts by using same names but different values as long as namespaces are different
    {
       int a=30; 
    } 
    namespace third
    {
         void display(){
        
           cout<<"Hello from third namespace"<<endl;
       } 
    }   
    

int main(){
int a=3;
cout<<a<<endl;               //prints local a
cout<<first::a<<endl;       //prints first namespace a
cout<<second::a<<endl;      //prints second namespace a
third::display();           //calls display function from third namespace
return 0;
}