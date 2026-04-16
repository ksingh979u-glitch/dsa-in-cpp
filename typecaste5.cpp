#include <iostream>
using namespace std;

int main()
{
    int a = 5;// if we typecaste int to float  the decimal value will be lost if input if 6.78 in an int variable and we typecast it to float it will become 6
    int b = 2;

    // Integer division
    cout << "Integer division (5 / 2): " << a / b << endl;

    // Typecasting one operand to float
    cout << "Float division ((float)5 / 2): " << (float)a / b << endl;

    // Typecasting both operands to float
    cout << "Float division ((float)5 / (float)2): " << (float)a / (float)b << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    float a = 5.5;
    float b = 2.0;

    // Convert both to int before dividing
    int x = (int)a;   // becomes 5
    int y = (int)b;   // becomes 2

    cout << "a as int: " << x << endl;
    cout << "b as int: " << y << endl;
    cout << "x / y (int division): " << x / y << endl;

    return 0;
}