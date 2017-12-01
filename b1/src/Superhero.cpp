#include "SuperHero.h"
#include <iostream>
#include <string>
using namespace std;

SuperHero::SuperHero()
{
string name = " ";
int age = 0;
char superpower = 'n';
}

SuperHero::SuperHero(string name, int age, char superpower)
{
this->name = name;
this->age = age;
this->superpower = superpower;
}

string SuperHero::getName()
{
return this->name;
}

int SuperHero::getAge()
{
return this->age;
}

char SuperHero::getSuperpower()
{
return this->superpower;
}

void SuperHero::setName(string new_name)
{
name = new_name;
}

void SuperHero::setAge(int new_age)
{
age = new_age;
}

void SuperHero::setSuperpower(char new_superpower)
{
superpower = new_superpower;
}

ostream& operator << (ostream& out, SuperHero& super)
{
out << super.name << " ";
out << "(" << super.age << "): ";

if (super.superpower == 'f')
{
out << "Flying" << endl;
}

else if (super.superpower == 'g')
{
out << "Giant" << endl;
}

else if (super.superpower == 'h')
{
out << "Hacker" << endl;
}

else if (super.superpower == 'n')
{
out << "None" << endl;
}

else
{
out << "Weakling" << endl;
}

return out;
}

istream& operator >> (istream& in, SuperHero& super)
{
cout << "Please enter...:" << endl;
cout << "Name: ";
in >> super.name;
cout << "Age: ";
in >> super.age;
cout << "Superpower: ";
in >> super.superpower;
cout << endl;

return in;
}
