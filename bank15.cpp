#include <iostream>// this is a failed version as it does not save the value of the input it gets reset again and again
using namespace std;
void money(float &balance, float deposit, float withdraw)
{

    balance += deposit;
    balance -= withdraw;
    cout << "your current balance is: " << balance << endl;
}
int main()
{
    int choice;
    float depo=0, with=0, che;
    cout << "the balance u have:";
    cin >> che;
    while (true){
    cout << "if u want to deposit money enter 1 or 2 if u want to withdraw money or 3 to check balance "<<endl;
    cout<<"if u want to exit enter 4"<<endl;
    cout<<"enter your choice:";
    cin >> choice;
    
    if (choice == 1)
    {
        cout << "enter amount to deposit:";
        cin >> depo;
        if(depo>0){
          money(che, depo, 0);
        }
        else{ cout<<"invalid amount"<<endl;
            
           
        }
    }
    else if (choice == 2)
    {
        cout << "enter amount to withdraw:";
        cin >> with;
        if(with>che||with<0){
            cout<<"gareeb madarchod"<<endl;
            
        }
        else{
        money(che, 0, with);
        }
    }
    else if (choice == 3)
    {
       
        money(che, 0, 0);
    }
    else if(choice==4){
        cout<<"exiting"<<endl;
        break;
    }
    else{
        cout<<"invalid input";
    }
}

    return 0;
}