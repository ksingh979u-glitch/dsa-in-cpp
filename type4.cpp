#include<iostream>
using namespace std;
typedef int i;
typedef string str;
using fl=float;//using keyword creates an alias name for an existing data type and is more powerful than typedef as it can be used with templates
int main(){
i n=10;//typedef creates an alias name for an existing data type
str name="Hello Typedef";
fl pi=3.14;
cout<<"Value of pi: "<<pi<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Value of n: "<<n<<endl;
return 0;
}