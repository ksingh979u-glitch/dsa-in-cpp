#include <iostream>// this is the version of bank without using function
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    double deposit, withdraw;
    double balance = 100;
    do
    {
        cout << "1: FOR CHECKING BALANCE" << endl;
        cout << "2: FOR DEPOSIT" << endl;
        cout << "3: FOR WITHDRAW" << endl;
        cout << "4: for exit" << endl;
        cout << "enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "your current balance is:$ " << setprecision(2) << fixed << balance << endl;
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
                balance += deposit;
                cout << "your current balance is:$ " << setprecision(2) << fixed << balance << endl;
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
                balance -= withdraw;
                cout << "your current balance is:$ " << setprecision(2) << fixed << balance << endl;
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