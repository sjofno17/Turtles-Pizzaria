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


