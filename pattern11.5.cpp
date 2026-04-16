#include <iostream>
using namespace std;
int main()
{
    for (int i = 9; i>0; i--)
    { 
        for (int k = 0;  k< (i-1); k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j<(2*(9-i)+1) ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 9; i>0; i--)
    { 
        for (int k = 0;  k< (i-1); k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j<(2*(9-i)+1) ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   
    return 0;
}
