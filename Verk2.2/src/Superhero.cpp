#include "Superhero.h"

Superhero::Superhero()
{
    char name = '\0';
    int age = 0;
    char superpower = 'n';
    int num_heroes = 0;
}

Superhero::Superhero(char name[60], int age, char superpower, int num_heroes)
{
    for(int i =0; i < num_heroes; i++)
    {
        this->name[i] = name[i];
    }
        this->age = age;
        this->superpower = superpower;
}


ostream& operator << (ostream& out, const Superhero& super)
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

istream& operator >> (istream& in, Superhero& super)
{
    cout << "Name: ";
    in >> super.name;
    cout << "Age: ";
    in >> super.age;
    cout << "Superpower: ";
    in >> super.superpower;
    cout << endl;

    return in;
}
