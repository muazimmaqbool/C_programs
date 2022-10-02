#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
{
private:
	unsigned int count; //count
public:
	Counter() : count(0) //constructor
	{ }
	unsigned int get_count() //return count
	{ return count; }
	//void operator ++ () //increment (prefix)
	void operator ++ () //increment (postfix)
	{
		++ count;
	}
};
////////////////////////////////////////////////////////////////
int main()
{
Counter c1, c2, c3; //define and initialize
// float f = 9.09;
// ++ f;
// cout << f;

cout << "\nc1=" << c1.get_count(); //display
cout << "\nc2=" << c2.get_count();
c3 = ++ c1; //increment c1
++ c2; //increment c2
++ c2; //increment c2
cout << "\nc1=" << c1.get_count(); //display again
cout << "\nc2=" << c2.get_count() << endl;
return 0;
}
