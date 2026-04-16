#include <iostream> //this has better version of bank15.cpp using function with reference variable
#include <iomanip>
using namespace std;
double money(double &balance, double deposit, double withdraw)
{

    balance += deposit;
    balance -= withdraw;
    cout << "your current balance is:$ " << setprecision(2) << fixed << balance << endl;
    return balance; //<<setprecision(2)<<fixed is used to set decimal point to 2 places
}
int main()
{
    int choice;
    double deposit, withdraw, balance;
    balance = 100;
    do
    {

        cout << "1: FOR CHECKING BALANCE" << endl;
        cout << "2: FOR DEPOSIT" << endl;
        cout << "3: FOR WITHDRAW" << endl;
        cout << "4: for exit" << endl;
        cout << "enter your choice: ";
        cin >> choice;
        cin.clear(); // 27 and 28 line are used to clear the input buffer to avoid infinite loop in case of invalid input in choice variable
        fflush(stdin);
        switch (choice)
        {
        case 1:
            money(balance, 0, 0);
            break;
        case 2:

            cout << "enter how much money u want to deposit:";
            cin >> deposit;
            if (deposit < 0)
            {
                cout << "invalid amount" << endl;
                continue;
            }
            else
            {
                money(balance, deposit, 0);
            }
            break;
        case 3:
            cout << "enter how much money u want to withdraw:";
            cin >> withdraw;
            if (withdraw < 0 || withdraw > balance)
            {
                cout << "invalid amount" << endl;
                continue;
            }
            else
            {
                money(balance, 0, withdraw);
            }
            break;
        case 4:
            cout << "exiting" << endl;
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}