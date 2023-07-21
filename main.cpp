#include <iostream>
#include <windows.h>
#include <iomanip>
#include <mmsystem.h>
#include "header.h"

using namespace std;

//class Level1
//{
//protected:
//    int score ;
//    int numOfQuestion = 2;
//
//public:
//    // Constructor
//    Level1()
//	{
//		score = 0;
//	}
//
//    // Function
//    bool addNumber()
//    {
//        for (int i = 0; i < numOfQuestion; i++)
//        {
//            srand(time(NULL));
//            int num1 = rand() % 1000;
//            int num2 = rand() % 780;
//            int realAnswer = num1 + num2;
//
//            cout << endl
//                 << "Addition of " << num1 << " + " << num2 << " = ";
//            int ans;
//            cin >> ans;
//
//            if (realAnswer == ans)
//            {
//                score += 10;
//                cout << endl
//                     << "Correct Ans !!!" << endl;
//                PlaySound(TEXT("Correct_Answer.wav"), NULL, SND_SYNC);
//            }
//            else
//            {
//                cout << endl
//                     << "Incorrect Ans , Try again " << endl;
//                PlaySound(TEXT("Wrong_Answer.wav"), NULL, SND_SYNC);
//                return false;
//            }
//        }
//        return true;
//    }
//};
//
//class Level2
//{
//protected:
//    int score ;
//    int numOfQuestion = 3;
//
//public:
//    // Constructor
//    Level2()
//    {
//		score = 0;
//	}
//
//    // Function
//    bool SubtractNumber()
//    {
//        for (int i = 0; i < numOfQuestion; i++)
//        {
//            srand(time(NULL));
//            int num1 = rand() % 935;
//            int num2 = rand() % 869;
//            int realAnswer = num1 - num2;
//
//            cout << endl
//                 << "Subtraction of " << num1 << " - " << num2 << " = ";
//            int ans;
//            cin >> ans;
//
//            if (realAnswer == ans)
//            {
//                score += 10;
//                cout << endl
//                     << "Correct Ans !!!" << endl;
//                PlaySound(TEXT("Correct_Answer.wav"), NULL, SND_SYNC);
//            }
//            else
//            {
//                cout << endl
//                     << "Incorrect Ans , Try again " << endl;
//                PlaySound(TEXT("Wrong_Answer.wav"), NULL, SND_SYNC);
//                return false;
//            }
//        }
//        return true;
//    }
//};
//
//class Level3
//{
//protected:
//    int score = 0;
//    int numOfQuestion = 5;
//
//public:
//    // Constructor
//    Level3() {}
//
//    // Function
//    bool MulNumber()
//    {
//        for (int i = 0; i < numOfQuestion; i++)
//        {
//            srand(time(NULL));
//            int num1 = rand() % 100;
//            int num2 = rand() % 10;
//            int realAnswer = num1 * num2;
//
//            cout << endl
//                 << "Multiplication of " << num1 << " * " << num2 << " = ";
//            int ans;
//            cin >> ans;
//
//            if (realAnswer == ans)
//            {
//                score += 10;
//                cout << endl
//                     << "Correct Ans !!!" << endl;
//                PlaySound(TEXT("Correct_Answer.wav"),NULL,SND_SYNC);
//            }
//            else
//            {
//                cout << endl
//                     << "Incorrect Ans , Try again " << endl;
//                PlaySound(TEXT("Wrong_Answer.wav"),NULL,SND_SYNC);
//                return false;
//            }
//        }
//        return true;
//    }
//};
//
//class Level4
//{
//protected:
//    int score = 0;
//    int numOfQuestion = 2;
//
//public:
//    // Constructor
//    Level4() {}
//
//    // Function
//    bool divisionNumber()
//    {
//        for (int i = 0; i < numOfQuestion; i++)
//        {
//            srand(time(NULL));
//            int num1 = rand() % 100;
//            int num2 = rand() % 10;
//            int realAnswer = num1 / num2;
//
//            cout << endl
//                 << "Division of " << num1 << " / " << num2 << " = ";
//            int ans;
//            cin >> ans;
//
//            if (realAnswer == ans)
//            {
//                score += 10;
//                cout << endl
//                     << "Correct Ans !!!" << endl;
//                PlaySound(TEXT("Correct_Answer.wav"),NULL,SND_SYNC);
//            }
//            else
//            {
//                cout << endl
//                     << "Incorrect Ans , Try again " << endl;
//                PlaySound(TEXT("Wrong_Answer.wav"),NULL,SND_SYNC);
//                return false;
//            }
//        }
//        return true;
//    }
//};
//
//class Level5
//{
//protected:
//    int score = 0;
//    int numOfQuestion = 3;
//
//public:
//    // Constructor
//    Level5() {}
//
//    // Function
//    int factorial(int n)
//    {
//        int factorial = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            factorial *= i;
//        }
//        return factorial;
//    }
//
//    bool factorialNumber()
//    {
//        for (int i = 0; i < numOfQuestion; i++)
//        {
//            srand(time(NULL));
//            int num1 = rand() % 10;
//            int realAnswer = factorial(num1);
//
//            cout << endl
//                 << "Factorial of " << num1 << "!  = ";
//            int ans;
//            cin >> ans;
//
//            if (realAnswer == ans)
//            {
//                score += 10;
//                cout << endl
//                     << "Correct Ans !!!" << endl;
//                PlaySound(TEXT("Correct_Answer.wav"),NULL,SND_SYNC);
//            }
//            else
//            {
//                cout << endl
//                     << "Incorrect Ans , Try again " << endl;
//                PlaySound(TEXT("Wrong_Answer.wav"),NULL,SND_SYNC);
//                return false;
//            }
//        }
//        return true;
//    }
//};
//
//class Player : public Level1, public Level2, public Level3, public Level4, public Level5
//{
//    int score;
//    string name;
//
//public:
//    // Constructor
//    Player()
//    {
//        score = 0;
//    }
//
//    // Functions
//    void setName()
//    {
//        cout << "Enter Your Name (like talha) : ";
//        cin >> this->name;
//    }
//
//    string returnName()
//    {
//        return this->name;
//    }
//
//    int returnScore()
//    {
//        this->score = Level1 ::score + Level2 ::score + Level3 ::score + Level4 ::score + Level5 ::score;
//
//        return this->score;
//    }
//    // Distructor
//    ~Player() {}
//};
//
//// Function TO add data in file
//void addRecord(const string &username, int score)
//{
//    ofstream file("record.txt", ios::app);
//    if (!file)
//    {
//        cout << "Error opening file!" << endl;
//        return;
//    }
//
//    time_t t = time(0);
//    tm *now = localtime(&t);
//    char buffer[20];
//    strftime(buffer, sizeof(buffer), "%x\t%X", now);
//
//    file << username << "\t" << score << "\t" << buffer << endl;
//    file.close();
//}
//
//// Function to Show data from File
//void showRecords()
//{
//    ifstream file("record.txt");
//    if (!file)
//    {
//        cout << "No records found." << endl;
//        return;
//    }
//
//    string line;
//    while (getline(file, line))
//    {
//        cout << line << endl;
//    }
//    file.close();
//}

int main()
{
    system("cls");
    Player player;

    cout << setw(12) << " "
         << "Welcome to Math Quiz Game" << endl
         << endl;
    PlaySound(TEXT("Welcome_To_Math_Quiz.wav"), NULL, SND_SYNC);
    player.setName();

// GoTo menu Label
Menu:
    system("cls");

    cout << setw(12) << " "
         << "Math Quiz Game" << endl
         << endl;

    cout << " Press 1 For Play Game " << endl;
    cout << " Press 2 For Record " << endl;
    cout << " Press 3 For Exit Game " << endl;

    int choice;
// GoTo Label for wrong menu input
re_get_input:
    cin >> choice;

    if (choice == 1)
    {
        system("cls");
        bool check;

        cout << setw(12) << " "
             << "Level 1" << endl
             << endl;

        check = player.addNumber();
        if (check == true)
        {
            system("cls");
            cout << setw(12) << " "
                 << "Level 2" << endl
                 << endl;

            check = player.SubtractNumber();
            if (check == true)
            {
                system("cls");
                cout << setw(12) << " "
                     << "Level 3" << endl
                     << endl;

                check = player.MulNumber();
                if (check == true)
                {
                    system("cls");
                    cout << setw(12) << " "
                         << "Level 4" << endl
                         << endl;

                    check = player.divisionNumber();
                    if (check == true)
                    {
                        system("cls");
                        cout << setw(12) << " "
                             << "Level 5" << endl
                             << endl;

                        check = player.factorialNumber();
                        if (check == true)
                        {
                            system("cls");
                            cout << setw(12) << " "
                                 << "Math quiz game " << endl
                                 << endl
                                 << setw(12) << " "
                                 << "you Was the winer" << endl
                                 << endl
                                 << "Score : " << player.returnScore() << endl
                                 << endl;

                            addRecord(player.returnName(), player.returnScore());

                            cout << endl
                                 << endl
                                 << " Press Any Press any key (a to z) for Menu " << endl
                                 << " ";
                            char ch;
                            cin >> ch;
                            goto Menu;
                        }
                        else
                        {
                            system("cls");
                            addRecord(player.returnName(), player.returnScore());

                            cout << setw(13) << " "
                                 << "Game Over" << endl
                                 << endl;
                            cout << " Better Luck Next Time " << endl;
                            cout << " Your Score : " << player.returnScore() << endl
                                 << endl;

                            cout << " Press Any Press any key (a to z) for Menu " << endl
                                 << " ";
                            char ch;
                            cin >> ch;
                            goto Menu;
                        }
                    }
                    else
                    {
                        system("cls");
                        addRecord(player.returnName(), player.returnScore());

                        cout << setw(13) << " "
                             << "Game Over" << endl
                             << endl;
                        cout << " Better Luck Next Time " << endl;
                        cout << " Your Score : " << player.returnScore() << endl
                             << endl;

                        cout << " Press Any Press any key (a to z) for Menu " << endl
                             << " ";
                        char ch;
                        cin >> ch;
                        goto Menu;
                    }
                }
                else
                {
                    system("cls");
                    addRecord(player.returnName(), player.returnScore());

                    cout << setw(13) << " "
                         << "Game Over" << endl
                         << endl;
                    cout << " Better Luck Next Time " << endl;
                    cout << " Your Score : " << player.returnScore() << endl
                         << endl;

                    cout << " Press Any Press any key (a to z) for Menu " << endl
                         << " ";
                    char ch;
                    cin >> ch;
                    goto Menu;
                }
            }
            else
            {
                system("cls");
                addRecord(player.returnName(), player.returnScore());

                cout << setw(13) << " "
                     << "Game Over" << endl
                     << endl;
                cout << " Better Luck Next Time " << endl;
                cout << " Your Score : " << player.returnScore() << endl
                     << endl;

                cout << " Press Any Press any key (a to z) for Menu " << endl
                     << " ";
                char ch;
                cin >> ch;
                goto Menu;
            }
        }
        else
        {
            system("cls");
            addRecord(player.returnName(), player.returnScore());

            cout << setw(13) << " "
                 << "Game Over" << endl
                 << endl;
            cout << " Better Luck Next Time " << endl;
            cout << " Your Score : " << player.returnScore() << endl
                 << endl;

            cout << " Press Any Press any key (a to z) for Menu " << endl
                 << " ";
            char ch;
            cin >> ch;
            goto Menu;
        }
    }
    else if (choice == 2)
    {
        system("cls");
        showRecords();

        cout << endl
             << endl
             << " Press Any Press any key (a to z) for Menu " << endl
             << " ";
        char ch;
        cin >> ch;
        goto Menu;
    }
    else if (choice == 3)
    {
        system("cls");
        cout << " Game will exit in 3 sec" << endl;
        Sleep(3000);
        return 0;
    }
    else
    {
        cout << " Please, Enter valid input" << endl;
        goto re_get_input;
    }
}
