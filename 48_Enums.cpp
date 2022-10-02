#include<iostream>
using namespace std;
enum Bool {False, True};			//Bool is datatype
enum Color { Red, Green = 99, Blue } c;	//Color is datatype; c is variable of typr Color

int main()
{
	Bool b = False;
	cout << b;
	b = True;
	cout << endl << b;
	//b = 9;		//error969510
	//b = 1;		//error
	c = Red;
	cout << endl << Red;
	cout << endl << Green;
	cout << endl << Blue;
	return 0;
}
