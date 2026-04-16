#include<iostream>
#include<ctime>
using namespace std;
int main(){
srand(time(NULL));//srand function is used to set the starting point for generating a series of pseudo-random integers it takes an unsigned integer as a seed value if we use same seed value we will get same random number every time
int a=(rand()%6)+1;// we use modules as if we devide a number by a number num the the remainder is always between 0 to numm-1
cout<<"random number picked is : "<<a;
return 0;
}

