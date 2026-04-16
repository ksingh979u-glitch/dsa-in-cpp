#include<iostream>
using namespace std;
int main(){
    //sizeof() it can tell the storage in bytes
    int a=9;
    double b=2.4;
    string c="kushagra";
    char d[]="sdcs,scscd";
    cout<<sizeof(a) <<endl;
    cout<<sizeof(b) <<endl;
    cout<<sizeof(c) <<endl;
    cout<<sizeof(d) <<endl;//we can also find number of elements in array by deviding it by the data type stored
   //no. of elements in the aaray = sizeof(d)/sizeof(char)
    return 0;
}
