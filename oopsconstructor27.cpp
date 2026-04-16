#include <iostream>
using namespace std;

class child
{
private:
    string name;
    int age;

public:

int runs;
    child(string n, int a, int r = 0) {
        name = n;
        age = a;
        runs = r;
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "runs: " << runs << endl;
    }
};

int main()
{
    child c1("virat", 34, 100);
    child c2("dhoni", 42, 150);
    
    
    return 0;
}
// Constructor: A special function inside a class that runs automatically when an object is created.
// It is mainly used to initialize (set up) the values of data members without writing extra lines later.
// For example, if we want to store stats of players like Virat Kohli or MS Dhoni, we can pass their
// name and runs directly when creating the object (e.g., Player kohli("Virat", 34);).
// The constructor will automatically assign "Virat" to the name variable and 34 to the runs variable.
// This saves us from writing separate statements like kohli.name = "Virat"; kohli.runs = 34;.
// In short, constructors make object creation easier, cleaner, and ensure that every object starts
// with proper initial values as soon as it is made.

