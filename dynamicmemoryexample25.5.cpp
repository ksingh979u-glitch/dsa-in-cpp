#include <iostream> //billing system using dynamic memory allocation
using namespace std;

class Bill
{
private:
    int a, sum = 0;

    int *itemcode;
    float *price;

    int *quantity;

public:
    void input()
    {
        cout << "Enter number of items: ";
        cin >> a;

        itemcode = new int[a];
        price = new float[a];
        quantity = new int[a];

        for (int i = 0; i < a; i++)
        {
            cout << "Enter item code: ";
            cin >> itemcode[i];

            cout << "Enter price of 1 item: ";
            cin >> price[i];

            cout << "Enter quantity: ";
            cin >> quantity[i];

            price[i] = price[i] * quantity[i];
            sum = sum + price[i];
        }
        sum = (float)sum * 1.18;
    }

    void display()
    {
        cout << "Item Code\tquantity\tTotal Price" << endl;
        for (int i = 0; i < a; i++)
        {
            cout << itemcode[i] << "\t\t" << quantity[i] << "\t\t" << price[i] << endl;
        }
        cout << "Total Bill Amount with tax: " << sum << endl;
    }

    ~Bill() /*if i use this ~ in a function exactly named like the claas name without calling it in the main function it will free the allocated
      memory after the execution of the program and it will not cause memory leak or we can also make a normal function and then call it in the main function */
    {

        delete[] itemcode;
        delete[] price;
        delete[] quantity;
    }
};

int main()
{
    Bill b;
    b.input();
    b.display();

    return 0;
}
