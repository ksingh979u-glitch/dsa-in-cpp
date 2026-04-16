#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

static int count = 0;

class managment
{
private:
    int addmisionno[100] = {0}, rollno[100] = {0}, addmisioncheck = 0;

public:
    string name[100];
    int input;
    void take()
    {
        srand(time(NULL));

        for (int t = 0; true; t++)
        {

            cout << "TO TAKE ADMISSION PRESS 1 " << endl;
            cout << "TO CHECK ADMISSION STATUS PRESS 2 " << endl;
            cout << "TO EXIT PRESS 3 " << endl;
            cin >> input;
            if (input == 1)
            {

                for (int i = 0; i < 100; i++)
                {
                    cout << endl;
                    cout << endl;
                    cout << "enter details for student " << i + 1 << ": " << endl;
                    cout << "TO ENTER DETAILS PRESS 1" << endl;
                    cout << "IF NO MORE STUDENTS TO ADD PRESS 2" << endl;
                    int exit;
                    cin >> exit;
                    if (exit == 1)
                    {
                        for ( int z = 0; z < 100; z++)
                        {
                            if (name[z] == "" && addmisionno[z] == 0 && rollno[z] == 0)
                            {
                                i = z;
                                break;
                            }
                        }
                        cin.ignore();
                        cout << "enter name: ";
                        getline(cin, name[i]);
                        cout << endl;

                        addmisionno[i] = (rand() % 9 + 1) * 10000 + (rand() % 9 + 1) * 1000 + (rand() % 9 + 1) * 100 + (rand() % 9 + 1) * 10 + (rand() % 9 + 1);
                        rollno[i] = (rand() % 100 + 1);
                        for (int j = 0; j < 100; j++)
                        {
                            if (addmisionno[i] == addmisionno[j])
                            {
                                addmisionno[i] = (rand() % 9 + 1) * 10000 + (rand() % 9 + 1) * 1000 + (rand() % 9 + 1) * 100 + (rand() % 9 + 1) * 10 + (rand() % 9 + 1);
                            }
                            if (rollno[i] == rollno[j])
                            {
                                rollno[i] = (rand() % 100 + 1);
                            }
                        }

                        cout << "admission taken successfully" << endl;
                        cout << "name: " << name[i] << endl;
                        cout << "your addmision number is: " << addmisionno[i] << endl;
                        cout << "your roll number is: " << rollno[i] << endl;
                    }
                    else if (exit == 2)
                    {
                        cout << "no more students to add" << endl;
                        break;
                    }
                    else
                    {
                        cout << "invalid input" << endl;
                        break;
                    }
                }
                count++;
            }
            else if (input == 2)
            {

                cout << "enter your addmision number: ";
                cin >> addmisioncheck;

                for (static int i = 0; i < 100; i++)
                {
                    if (addmisionno[i] == addmisioncheck)
                    {
                        cout << "admission found!" << endl;
                        cout << "name: " << name[i] << endl;
                        cout << "your addmision number is: " << addmisionno[i] << endl;
                        cout << "your roll number is: " << rollno[i] << endl;
                        cout << endl;
                        cout << endl;
                    }
                }
            }
            else if (input == 3)
            {
                cout << "exiting" << endl;
                break;
            }
            else
            {
                cout << "invalid input" << endl;
            }
        }
    }
};

int main()
{
    managment m;
    m.take();

    return 0;
}