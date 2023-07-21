#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <time.h>
#include <cstdlib>

#include "header.h"

using namespace std;

   Level1 :: Level1()
	{
		score = 0;
	}

    // Function
    bool Level1 :: addNumber()
    {
        for (int i = 0; i < numOfQuestion; i++)
        {
            srand(time(NULL));
            int num1 = rand() % 1000;
            int num2 = rand() % 780;
            int realAnswer = num1 + num2;

            cout << endl
                 << "Addition of " << num1 << " + " << num2 << " = ";
            int ans;
            cin >> ans;

            if (realAnswer == ans)
            {
                score += 10;
                cout << endl
                     << "Correct Ans !!!" << endl;
                PlaySound(TEXT("Correct_Answer.wav"), NULL, SND_SYNC);
            }
            else
            {
                cout << endl
                     << "Incorrect Ans , Try again " << endl;
                PlaySound(TEXT("Wrong_Answer.wav"), NULL, SND_SYNC);
                return false;
            }
        }
        return true;
    }

Level2 :: Level2()
    {
		score = 0;
	}

    // Function
    bool Level2 :: SubtractNumber()
    {
        for (int i = 0; i < numOfQuestion; i++)
        {
            srand(time(NULL));
            int num1 = rand() % 935;
            int num2 = rand() % 869;
            int realAnswer = num1 - num2;

            cout << endl
                 << "Subtraction of " << num1 << " - " << num2 << " = ";
            int ans;
            cin >> ans;

            if (realAnswer == ans)
            {
                score += 10;
                cout << endl
                     << "Correct Ans !!!" << endl;
                PlaySound(TEXT("Correct_Answer.wav"), NULL, SND_SYNC);
            }
            else
            {
                cout << endl
                     << "Incorrect Ans , Try again " << endl;
                PlaySound(TEXT("Wrong_Answer.wav"), NULL, SND_SYNC);
                return false;
            }
        }
        return true;
    }

Level3 :: Level3() {}

    // Function
    bool Level3 :: MulNumber()
    {
        for (int i = 0; i < numOfQuestion; i++)
        {
            srand(time(NULL));
            int num1 = rand() % 100;
            int num2 = rand() % 10;
            int realAnswer = num1 * num2;

            cout << endl
                 << "Multiplication of " << num1 << " * " << num2 << " = ";
            int ans;
            cin >> ans;

            if (realAnswer == ans)
            {
                score += 10;
                cout << endl
                     << "Correct Ans !!!" << endl;
                PlaySound(TEXT("Correct_Answer.wav"),NULL,SND_SYNC);
            }
            else
            {
                cout << endl
                     << "Incorrect Ans , Try again " << endl;
                PlaySound(TEXT("Wrong_Answer.wav"),NULL,SND_SYNC);
                return false;
            }
        }
        return true;
    }

Level4 :: Level4() {}

    // Function
    bool Level4 :: divisionNumber()
    {
        for (int i = 0; i < numOfQuestion; i++)
        {
            srand(time(NULL));
            int num1 = rand() % 100;
            int num2 = rand() % 10;
            int realAnswer = num1 / num2;

            cout << endl
                 << "Division of " << num1 << " / " << num2 << " = ";
            int ans;
            cin >> ans;

            if (realAnswer == ans)
            {
                score += 10;
                cout << endl
                     << "Correct Ans !!!" << endl;
                PlaySound(TEXT("Correct_Answer.wav"),NULL,SND_SYNC);
            }
            else
            {
                cout << endl
                     << "Incorrect Ans , Try again " << endl;
                PlaySound(TEXT("Wrong_Answer.wav"),NULL,SND_SYNC);
                return false;
            }
        }
        return true;
    }

Level5 :: Level5() {}

    // Function
    int Level5 :: factorial(int n)
    {
        int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        return factorial;
    }

    bool Level5 :: factorialNumber()
    {
        for (int i = 0; i < numOfQuestion; i++)
        {
            srand(time(NULL));
            int num1 = rand() % 10;
            int realAnswer = factorial(num1);

            cout << endl
                 << "Factorial of " << num1 << "!  = ";
            int ans;
            cin >> ans;

            if (realAnswer == ans)
            {
                score += 10;
                cout << endl
                     << "Correct Ans !!!" << endl;
                PlaySound(TEXT("Correct_Answer.wav"),NULL,SND_SYNC);
            }
            else
            {
                cout << endl
                     << "Incorrect Ans , Try again " << endl;
                PlaySound(TEXT("Wrong_Answer.wav"),NULL,SND_SYNC);
                return false;
            }
        }
        return true;
    }
    
Player :: Player(){
        score = 0;
}

    // Functions
    void Player :: setName()
    {
        cout << "Enter Your Name (like talha) : ";
        cin >> this->name;
    }

    string Player :: returnName()
    {
        return this->name;
    }

    int Player :: returnScore()
    {
        this->score = Level1 ::score + Level2 ::score + Level3 ::score + Level4 ::score + Level5 ::score;

        return this->score;
    }
    // Distructor
    Player :: ~Player() {}

// Function TO add data in file
void addRecord(const string &username, int score)
{
    ofstream file("record.txt", ios::app);
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    time_t t = time(0);
    tm *now = localtime(&t);
    char buffer[20];
    strftime(buffer, sizeof(buffer), "%x\t%X", now);

    file << username << "\t" << score << "\t" << buffer << endl;
    file.close();
}

// Function to Show data from File
void showRecords()
{
    ifstream file("record.txt");
    if (!file)
    {
        cout << "No records found." << endl;
        return;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}


