#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class SuperHero
{
public:
SuperHero();
SuperHero(string name, int age, char superpower);

string getName();
int getAge();
char getSuperpower();

void setName(string name);
void setAge(int age);
void setSuperpower(char new_superpower);

friend ostream& operator << (ostream& out, SuperHero& super);
friend istream& operator >> (istream& in, SuperHero& super);

private:
string name;
int age;
char superpower;
};

#endif // SUPERHERO_H
