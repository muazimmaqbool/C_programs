#include<iostream>
#include<conio.h>
using namespace std;
class Foo
{
private:
	int data;
public:
	Foo() : data(0) //constructor (same name as class)
	{ cout << "Constructor Called\n"; }
	~Foo() //destructor (same name with tilde)
	{ cout << "Destructor Called\n"; }
};
int main()
{
	Foo F;
	cout << "I am in main()\n";
	getch();
	cout << "I am still in main()\n";
	getch();
	return 0;
}
