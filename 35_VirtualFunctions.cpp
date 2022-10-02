#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show() { cout << "base"; }		
};
class derived: public base
{
	public:
		void show() { cout << "derived"; }		
};
class derived1: public base
{
	public:
		//void show() { cout << "derived1"; }		
};
int main()
{
	//base *p = new derived;
	
	derived d;
	base *p = &d;
	
	p -> show();
	
	derived1 d1;
	p = &d1;
	
	p -> show();
	return 0;
}
