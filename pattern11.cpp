#include<iostream>
using namespace std;
int main(){
    int rows,column;
cout<<"enter number of rows and columns:";
cin>>rows>>column;

for (int i = rows; i > 0; i--)// here the row decies which line to pint '*' and the column decides how many '*' to print in each line 
{
    for (int j = 0; j <=(column-i); j++)
    {
        cout<<" * ";
    }
     cout<<endl;
}

return 0;
}