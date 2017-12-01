#include <iostream>
#include <fstream>
#include <string>
#include "SuperHero.h"
using namespace std;
int main()
{
SuperHero super;
ofstream fout;
fout.open("Superpowers.txt", ios::app);
if (fout.is_open())
{
cin >> super;
fout << super;
cout << super;
fout.close();
}
ifstream fin;
fin.open("superpowers.txt", ios::app);
cout << endl;
string str;
if (fin.is_open())
{
while (!fin.eof())
{
getline(fin, str);
cout << str << endl;
}
fin.close();
}
return 0;
}
