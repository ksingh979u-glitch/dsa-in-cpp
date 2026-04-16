#include<iostream>//dynamic memory
using namespace std;
int main(){
char *hero;
int a;
cout<<"enter how many numbers u want to  print";
cin>>a;
hero=new char [a];
for (int i = 0; i < a; i++)
{
    cout<<"enter the number";
    cin>>hero[i];
}
for (int i = 0; i < a; i++)
{
    cout<< hero[i];
 
}
delete[] hero;


return 0;
}