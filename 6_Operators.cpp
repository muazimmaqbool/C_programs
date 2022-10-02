#include<iostream>
using namespace std;
struct test
{
	int a;
	char name[16];
};
int main()
{
	struct test t = {8,"basit"};
	
	gets(t.name);
	t.name[1] = 'k';
	
	int a = 1, b = 254, temp;
	int *p = &a;
	
	int *q = *p ++;
	
	cout << t.name;
	
	cout << p << endl;
	cout << * p ++;
	cout << endl<< p;
	temp = *p ++;
	cout << temp;				//++ *p = 2		*p ++ = 1	* ++p = (8 {GV})
}
