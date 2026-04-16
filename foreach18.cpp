#include<iostream>
using namespace std;
int main(){
// like in array we use for loop but there is a better way to do it which is using foreach loop
string grades[]={"kushagra","singh","mit","adt"};
for(string result : grades){// if only  i want to display the elements of array it is also less flexible
    cout<<result<<endl;
}
return 0;
}