#include <iostream>
#include <fstream>
#include <string>
#include "Superhero.h"

using namespace std;

int main()

{
    int size_of = 0;
    cout << "how many superheros: ";
    cin >> size_of;

    Superhero *super = new Superhero[size_of];

    ofstream fout;
    fout.open("binary_file.dat", ios::binary|ios::app);

    for (int i = 0; i < size_of; i++)
    {
        cin >> super[i];
        fout.write((char*)(&super[i]), sizeof(Superhero));
    }
    fout.close();

    ifstream fin;
    fin.open("binary_file.dat", ios::binary);

    if(fin.is_open())
    {
        fin.seekg(0, fin.end);
        int records = fin.tellg() / sizeof(Superhero);
        fin.seekg(0, fin.beg);
        Superhero* super = new Superhero[records];
        fin.read((char*)super, sizeof(Superhero) * records);
        fin.close();

        for (int i = 0; i < records; i++)
        {
            cout << super[i] << endl;
        }
    }
    else
    {
        cout << "File could not be opened" << endl;
    }

    delete[] super;
    return 0;
}
