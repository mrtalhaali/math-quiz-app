#ifndef HEADER_H
#define HEADER_H

#include<string>
using namespace std;

class Level1
{
protected:
    int score ;
    int numOfQuestion = 2;

public:
    Level1();
    bool addNumber();
};

class Level2 {
protected:
    int score ;
    int numOfQuestion = 3;

public:
    Level2();
    bool SubtractNumber();
};

class Level3 {
protected:
    int score = 0;
    int numOfQuestion = 5;

public:
    Level3();
    bool MulNumber();
};

class Level4
{
protected:
    int score = 0;
    int numOfQuestion = 2;

public:
    Level4();
    bool divisionNumber();
};

class Level5
{
protected:
    int score = 0;
    int numOfQuestion = 3;

public:
    Level5();
    int factorial(int n);
    bool factorialNumber();
};

class Player : public Level1, public Level2, public Level3, public Level4, public Level5
{
    int score;
    string name;

public:
	Player();
    void setName();

    string returnName();

    int returnScore();
    ~Player();
};

void addRecord(const string &username, int score);
void showRecords();

#endif
