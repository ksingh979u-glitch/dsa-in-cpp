#include <iostream>

using namespace std;
void board(char array[][3])
{

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "  " << array[i][j] << "  ";
            if (j < 2)
            {
                cout << "|";
            }
        }
        cout << endl;
        if (i < 2)
        {
            cout << "_____|_____|_____";
        }
        cout << endl;
    }
}

int main()
{
    char choice;
    int row, colum;

    char array[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};
    cout << "player 1 chose (X/O) ";
    cin >> choice;
    choice = toupper(choice);

    for (int i = 0; i < 9; i++)

    {
        if (choice != 'X' && choice != 'O')
        {
            cout << "wrong choice";
            break;
        }

        board(array);

        cout << "enter the rows and colum";
        cin >> row >> colum;
        if (row < 0 || row > 2 || colum < 0 || colum > 2)
        {
            cout << "wrong input" << endl;
            continue;
        }
        if (array[row][colum] != ' ')
        {
            cout << "place alredy has filled" << endl;
            continue;
        }

        array[row][colum] = choice;
        if (array[0][i] == choice && array[1][i] == choice && array[2][i] == choice)

        {
            cout << choice << " won " << endl;
            break;
        }
        else if (array[i][0] == choice && array[i][1] == choice && array[i][2] == choice)

        {
            cout << choice << " won " << endl;
            break;
        }
        else if (array[0][0] == choice && array[1][1] == choice && array[2][2] == choice)
        {
            cout << choice << " won " << endl;
            break;
        }

        else if (array[0][2] == choice && array[1][1] == choice && array[2][2] == choice)
        {
            cout << choice << " won " << endl;
            break;
        }

        if (choice == 'X')
        {
            choice = 'O';
        }
        else
        {
            choice = 'X';
        }
    }

    return 0;
}
