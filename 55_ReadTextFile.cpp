// file input with characters
#include <fstream> //for file functions
#include <iostream>
using namespace std;
int main()
{
char ch = 'A'; //character to read
ifstream infile("TEST.TXT"); //create file for input
//while( !(ch == EOF) ) //read until EOF or error
while(infile)
{
infile.get(ch); //read character
cout << ch; //display it
}
cout << endl;
return 0;
}
