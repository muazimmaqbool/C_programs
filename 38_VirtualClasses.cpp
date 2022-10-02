/* Relevant when using Multiple Inheritance */

#include<iostream>
using namespace std;

// ************** ambiguous reference to base class *************** //
/*class Parent
{
protected:
int basedata;
};
class Child1 : public Parent
{ };
class Child2 : public Parent
{ };
class Grandchild : public Child1, public Child2
{
public:
void setdata() 
{ basedata = 99; }
int getdata()
{ return basedata; } // ERROR: ambiguous
};*/
////////////////////////////////////////////////////////////////////////

// ******************* Virtual Classes ******************************* //
class Parent
{
protected:
int basedata;
};
class Child1 : virtual public Parent // shares copy of Parent
	{ };
class Child2 : virtual public Parent // shares copy of Parent
	{ };
class Grandchild : public Child1, public Child2
{
public:
void setdata() 
{ basedata = 99; }
int getdata()
{ return basedata; } // OK: only one copy of Parent
};
/////////////////////////////////////////////////////////////////////////
int main()
{
	Grandchild gc;
	gc.setdata();
	cout << gc.getdata();	
	return 0;
}
