#include<iostream>
using namespace std;
int main()
{
	try 
	{
    	throw "ghjgjgjh";
    }
    catch (float x) {
    	cout << "Caught " << x;
    }
    catch (...) {
    	cout << "Default Exceptions \n";
    }
    return 0;
}
