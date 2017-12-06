#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    ifstream fin;
    char input;

    fin.open("TextIn.txt");

    if(fin.is_open())
    {
        while(!fin.eof())
        {
            for(int i=0; i<=10; i++)
            {
                getline(fin, str);
                if (fin.eof())
                {
                    return 0;
                }
                cout << str << endl;

            }

            cout << "Would you like to read the next 10 lines? " << endl;
            cin >> input;

            if (input == 'y' || input == 'Y')
            {
                continue;
            }

            else if (input == 'n' || input == 'N')
            {
                return 0;
            }

            else
            {
                while (input != 'y' && input != 'n' && input != 'Y' && input != 'N')
                {
                    cout << "Would you like to read the next 10 lines? " << endl;
                    cin >> input;
                }
            }
        }

        fin.close();
    }

    else
    {
        cout << "File could not open!" << endl;
    }

    return 0;
}
