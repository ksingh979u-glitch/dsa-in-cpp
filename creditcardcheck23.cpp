#include<iostream>
using namespace std;
int main(){
string tuf;
int sum=0;
// Math on a char works on its ASCII value, not the digit you see.
// Convert the char to a number first if you want real numeric math like this char c = '7';
                                                                                   // int digit = c - '0';
/* 1)Take the card number (as digits).

2)Start from the rightmost digit.

3)Move left, and double every second digit.

4)If a doubled digit becomes 10 or more, subtract 9 from it
(same as adding its digits).

5)Add all the digits together.

6)If the total is divisible by 10, the number is VALID.

Otherwise, it is INVALID.
*/ 
int limit=1;
cout<<"enter the credit card number: "<<endl;
getline(cin,tuf);
for(int i=tuf.length()-1 ;i>=0;i--){

    int num=tuf[i]-'0';
if (limit%2==0)
{
num=num*2;

}
if (num>=10){
    num=num-9;
}
sum+=num;
limit++;
}



if (sum%10==0){
    cout<<"it is a valid credit card number";
}
else{
    cout<<"farzi hai";
}
return 0;
}
