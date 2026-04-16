#include <iostream>
using namespace std;

int main()
{ 

  
    try
    {
        
            throw 10.99;
        
    }
    catch (int a)
    {
        cout << "exception found " << a << endl;
    }
    catch (float a)
    {
        cout << "exception found " << a << endl;
    }
    catch (double a)
    {
        cout << "exception found " << a << endl;
    }
    catch (...)
    {
        cout << "invalid input" << endl;
    }

    return 0;
}