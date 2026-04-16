#include <iostream>
using namespace std;
class shopping
{
private:
    int *itemnnumber;
    int *quantity;
    int *sum;
    int a;

    string array[5][3] = {{"1100", "tomato", "20"},
                          {"1101", "onion", "30"},
                          {"1102", "potato", "40"},
                          {"1103", "carrot", "50"},
                          {"1104", "cabbage", "60"}};

public:
    void input()
    {
        cout << "enter the total number of different items you want to buy: ";
        cin >> a;

        itemnnumber = new int[a];
        quantity = new int[a];
        sum = new int[a];
        for (int i = 0; i < a; i++)
        {
            cout << "enter the item number" << endl;
            cin >> itemnnumber[i];
            bool found = false;
            for (int j = 0; j < 5; j++)
            {

                if (itemnnumber[i] == stoi(array[j][0]))
                {
                    found = true;
                    cout << "the item is " << array[j][1] << endl;
                    cout << "enter the quantity: ";
                    cin >> quantity[i];
                    sum[i] = quantity[i] * stoi(array[j][2]);
                    cout << itemnnumber[i] << "\t\t" << array[j][1] << "\t\t" << sum[i] << endl;
                }
            }
            if (!found)
            {
                cout << "item not found" << endl;
                i--;
            }
        }
    }
    void output()
    {
        float total = 0;
        cout << endl
             << endl;
        cout << "*****************************************" << endl;
        cout << "              Bill Summary" << endl;
        cout << endl;
        cout << "Item Number\tItem Name\tTotal Price" << endl;
        for (int i = 0; i < a; i++)
        {
            total += sum[i];
            for (int j = 0; j < 5; j++)
            {
                if (itemnnumber[i] == stoi(array[j][0]))
                {
                    cout << itemnnumber[i] << "\t\t" << array[j][1] << "\t\t" << sum[i] << endl;
                }
            }
        }
        cout << "*****************************************" << endl;

        total = total * 1.18;
        cout << "total amount to pay: " << total << endl;
        cout << "*****************************************" << endl;
    }
    ~shopping()
    {
        delete[] itemnnumber;
        delete[] quantity;
        delete[] sum;
    }
};
int main()
{
    shopping s;
    s.input();
    s.output();

    return 0;
}