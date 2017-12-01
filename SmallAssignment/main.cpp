#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//A1
int main() {
string str;
ifstream fin;
int numberOfLines = 0;
char answer;
fin.open("output.txt");
if(fin.is_open()) {
while(!fin.eof()){
    for(int i = 0; i < 10; i++){
getline(fin, str);
cout << str << endl;
}
cout << "Do you wish to continue (y/n)?";
cin >> answer;
if(answer == 'y' && answer == 'Y'){
while ( numberOfLines < 10 )
numberOfLines++;
}
else if(answer == 'n' && answer == 'N')
break;
}
fin.close();
}
else{
cout << "Unable to read from file!" << endl;
}
return 0;
}

//A2
/*
int main()
{
string texti;
ofstream fout; //output file stream
fout.open("TextOut.txt", ios::app);//puts data in file (writing data).
if(fout.is_open()) //innbyggt fall sem gefur true ef hægt er að opna fæli-inn.
{
do
{
getline(cin, texti);//first=(in this case cin) the stream instance, second= a variable for result.
//Getline= reads a single line in one go Þannig að bil aðskili ekki enter bil.
if(texti[0] == '\\')
{
break;
}
else
{
fout << texti << endl; //will write to the file
}
fout.close(); //Lokar fælinum
}
while(texti[0] != '\\');
}
else
{
cout << "File could not open!" << endl; //will output on the screen
}
return 0;
}
