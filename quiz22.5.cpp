#include <iostream> //by using only one  2d array
#include <cctype>
using namespace std;

int main()
{
    char input;
    int count = 0;

    string quiz[][5] = {
        {"who is the greatest batter in world", "virat kohli", "dhoni", "sachin tendulkar", "manish pandey"},
        {"best bowler in the world", "bumrah", "bhvi", "chahal", "varun"},
        {"how will win ipl this year", "mi", "csk", "rcb", "rr"}};

    char answer[] = {'A', 'A', 'C'};
    char op[] = {'A', 'B', 'C', 'D'};

    for (int i = 0; i < 3; i++)
    {
        cout << "\nQuestion " << i + 1 << ":\n";
        cout << quiz[i][0] << endl;

        for (int j = 1; j <= 4; j++)
        {
            cout << op[j - 1] << ") " << quiz[i][j] << endl;
        }

        cout << "Enter your answer: ";
        cin >> input;
        input = toupper(input);

        if (input == answer[i])
        {
            cout << "Correct\n";
            count++;
        }
        else
        {
            cout << "Wrong\n";
        }
    }

    cout << "\nYour score out of 3 is " << count << endl;
    return 0;
}
