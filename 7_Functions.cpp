#include<iostream>
using namespace std;
// Call by Value; Call by Address; Call by Reference
int sumv(int x, int y);
int suma(int *, int *);
int sumr(int &, int &);

// Function Returning Reference; Function Returning Address
int sum;
int & RSetSum();
int * ASetSum(); 

int muazim();

//Default Arguments
void DefArgs(char x = 'p', int y = 90, float z = 2.34);


//Inline function
inline void PrintA();

int main()
{
	int aa = 10, bb = 22;
	int rr = sumv(aa, bb);
	//int rr = suma(&aa, &bb);
	//int rr = sumr(aa, bb);
	cout << "aa = " << aa << "    bb = " << bb << endl;
	cout << "rr = " << rr << endl;
	
	RSetSum() = 50;
	cout << "Sum = " << sum << endl;
	*ASetSum() = 30;
	cout << "Sum = " << sum << endl;
	
	DefArgs();
	DefArgs('$');
	DefArgs('Z',12);
	DefArgs('#',999,7.67);
	
	cout << endl;
	PrintA();
	PrintA();
	PrintA();
}

int sumv(int a, int b)
{
	int result = a + b;
	a ++, b ++;
	return result;	
}

int suma(int *a, int *b)
{
	int result = *a + *b;
	 *a++,  *b++;		//(*a) ++, (*b) ++; [ok]		//*a ++, *b ++; [error]
	return result;
}

int sumr(int &a, int &b)
{
	int result = a + b;
	a ++, b ++;
	return result;
}


int& RSetSum()
{
	return sum;
}
int* ASetSum()
{
	return &sum;
}


void DefArgs(char a, int b, float c)
{
	cout << endl << "a = " << a << "   b = " << b << "   c = " << c << endl;
}


inline void PrintA()
{
	cout << 'B';
}
