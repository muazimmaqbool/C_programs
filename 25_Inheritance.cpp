#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter //base class
{
private:
int a;
protected: //NOTE: not private
unsigned int count; //count
public:
Counter() : count(0) //no-arg constructor
{ }
Counter(int c) : count(c) //1-arg constructor
{ }
int b;
void setdata()
{
	a = 99;		// private cant be accessed in derived class
	b = 900;
	count = 9000;
}
unsigned int get_count() const //return count
{ return count; }
Counter operator ++ () //incr count (prefix)
{ return Counter(++count); }
};
////////////////////////////////////////////////////////////////
class CountDn : public Counter //derived class
{
	int i;
public:
	void setvar()
	{
		//a = 89;
		b = 99;
		count = 1;
	}
Counter operator -- () //decr count (prefix)
{ return Counter(--count); }
};
////////////////////////////////////////////////////////////////
int main()
{
CountDn c1; //c1 of class CountDn
//c1.count = 99;
c1.b= 99;
//c1.a = 900;
cout << "\nc1=" << c1.get_count(); //display c1
++c1; ++c1; ++c1; //increment c1, 3 times
cout << "\nc1=" << c1.get_count(); //display it
--c1; --c1; //decrement c1, twice
cout << "\nc1=" << c1.get_count(); //display it
cout << endl;
return 0;
}
