#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//A2

int main()
{
string texti;
ofstream fout; //output file stream
fout.open("TextOut.txt", ios::app);//puts data in file (writing data).
if(fout.is_open()) //innbyggt fall sem gefur true ef h�gt er a� opna f�li-inn.
{
do
{
getline(cin, texti);//first=(in this case cin) the stream instance, second= a variable for result.
//Getline= reads a single line in one go �annig a� bil a�skili ekki enter bil.
if(texti[0] == '\\')
{
break;
}
else
{
fout << texti << endl; //will write to the file
}
fout.close(); //Lokar f�linum
}
while(texti[0] != '\\');
}
else
{
cout << "File could not open!" << endl; //will output on the screen
}
return 0;
}
