#include<iostream>//random event generatoe like prize gettor
#include<ctime>
using namespace std;
int main(){
srand(time(NULL));
int a=(rand()%6)+1;
cout<<"random number picked is : "<<a<<endl;
switch (a)
{
case 1:cout<<"you won a car"<<endl;
break;
case 2:cout<<"you won a press"<<endl;
break;
case 3:cout<<"you won a bike"<<endl;
break;
case 4:cout<<"better luck next time"<<endl;
break;
case 5:cout<<"you won a cricket bat"<<endl;
break;
case 6:cout<<"you won a cycle"<<endl;
break;
default:cout<<"error 404"<<endl;
break;
}
return 0;
}