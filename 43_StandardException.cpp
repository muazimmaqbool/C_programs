#include<iostream>
#include<exception>
using namespace std;
int main()
{
	try
	{
		int *myarray = new int [10000000000];	//1 and 10 0's raise exception
		//new instt possibly raise bad_cast error
	}
	catch(exception& e)
	{
		cout << "Standard Exception: " << e.what() << endl;
	}
	return 0;
}
