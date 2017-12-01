#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Superhero
{
public:
    Superhero();
    Superhero(char name[60], int age, char superpower, int num_heroes);

    friend ostream& operator << (ostream& out, const Superhero& super);
    friend istream& operator >> (istream& in, Superhero& super);

private:
    char name[60];
    int age;
    char superpower;
    int num_heroes;
};

#endif // SUPERHERO_H
