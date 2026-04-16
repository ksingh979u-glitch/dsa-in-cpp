#include <iostream>
using namespace std;
class car
{
private:
    string name;
    int model;

public:
    car(string n, int m)
    {
        name = n;
        model = m;
       
    }
    friend void display(car c);// in this the values of object c1 gets coppied to c in display function then we can excess the private members of class car using c
};
void display(car c)
{
    cout << "car name is: " << c.name << endl;
    cout << "car model is: " << c.model << endl;
}
int main()
{
    car c1("BMW", 2020);
    display(c1);
    return 0;
}