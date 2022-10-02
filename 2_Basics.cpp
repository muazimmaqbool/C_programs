#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<stdio>
#define PI 3.14		//Named Constant

using namespace std;

int main()
{
	float f = 5/2;
	cout << fixed << f;
}
	/*
	int a = - 25;
	int b = 0xFF;	//255
	int e = 077;	//63
	cout << a << "   " << b << "   " << e << endl;
	
	float f = 3123456.75e-5;
	cout << f << endl; 
	
	bool flag = false;
	cout << flag << endl;
	
	char ch = 'A', nl = '\n';
	cout << ch << nl << ch << endl;
	
	wchar_t meem = L'\u0645';
	wcout << sizeof(meem) << endl;
		
	char str1[ ] = "hello, dear";	
	char str2[ ] = "hello, \
dear";	
	char str3[ ] = "hello, " "d" "ear";
	cout << str1 << endl;	
	cout << str2 << endl;	
	cout << str3 << endl;
	
	int r = 10;
	int area = PI * r * r;
	cout << "Area = " << area << endl << endl;
	
	const int C = 99;	//Constant
	//C = 20;
	
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << setw(22) << "Size of float : " << setw(2) << sizeof(float) << endl;
   cout << setw(22) << "Size of double : " << setw(2) << sizeof(double) << endl;
   cout << setw(22) << "Size of l. double : " << setw(2) << sizeof(long double) << endl;
   cout << setw(22) << "Size of wchar_t : " << setw(2) << sizeof(wchar_t) << endl;
   
   enum color { red, green, blue } c;
   c = blue;
   cout << green <<endl;
   
   enum custcolor { cred, cgreen = 9, cblue };
   enum custcolor d;
   d = cgreen;
   cout << d << endl;
   
	
}*/
