#include<iostream>
using namespace std;
class base
{
};
class derived : public base
{	
};
int main()
{
	derived d;
	try
	{
		throw d;
	}
	catch(derived d)							//Even if d is base type, it will catch derived
	{
		cout << "Caught derived exception";
	}
	catch(base b)								//will never get caught if it is derived
	{
		cout << "Caught base exception";
	}
	return 0;
}
