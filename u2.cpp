#include <iostream>

#include <ctime>

using namespace std;

void playGame();{    int guess;

    int tries = 0;

    srand(time(NULL));

    int a = (rand() % 100) + 1;

    do
    {

        cout << "enter the number u are guessing ";

        cin >> guess;

        if (guess < 1 || guess > 100)
        {

            cout << "Please enter a number between 1 and 100\n";

            continue;
        }

        tries++;

        if (guess == a)
        {

            cout << "congratulations!" << endl;

            cout << "you guessed it right " << endl;

            cout << "you took " << tries << " tries to guess the number" << endl;

            break;
        }

        if (guess < a)
        {

            cout << "you guessed it wrong" << endl;

            cout << "try a bigger number" << endl;
        }

        else if (guess > a)
        {

            cout << "you guessed it wrong" << endl;

            cout << "try a smaller number" << endl;
        }

        if (tries >= 10)
        {

            cout << "GAME OVER!" << endl;

            cout << " u took  10 tries" << endl;

            cout << "try again " << endl;

            break;
        }
    }while (guess != a);
}

int main()
{
    for(;;){
        playGame();
    }
 
    cout << "Thanks for playing!\n";
    cout<<"enter y  to play again else n  to exit: ";
    char playAgain1;
    cin >> playAgain1;
    if (playAgain1=='y'){
        


    }
        return 0;
    }