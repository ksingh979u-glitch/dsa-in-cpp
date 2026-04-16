#include<iostream>
using namespace std;
void sortarry(int arry[]){
    int temp;
for (int i = 0; i <10 ; i++)
{
    for (int j = 0; j <=9; j++)
    {
        if (arry[j]>arry[j+1])
        {
            temp =arry[j];
        arry[j]=arry[1+j];
        arry[j+1]=temp;
        }
        
        
    }
   
}

    
}
int main(){
int arry[]={8,10,3,9,6,7,2,1,5,4};
sortarry(arry);
for (int i = 0; i <=9; i++)
{
 cout<<"  "<<arry[i]<<"  ";
}


return 0;
}