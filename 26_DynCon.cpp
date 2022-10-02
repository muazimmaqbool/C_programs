#include<iostream>
using namespace std;
class DynCon
{
	private:
		int* p;
		int t;
	public:
		DynCon()
		{
			p = new int;
			*p = 10;
		}
		DynCon(int v): t(v)
		{
			//p = new int;
			//*p = v;			
		}
		int dispt()
		{
			return t;
		}
		int disp()
		{
			return (*p);
		}	
};
int main()
{
	int data;
	cin >> data;
	DynCon obj1, obj2(data);
	cout << "Value at p in obj1 is: " << obj1.disp() << endl; 	
	cout << "Value at t in obj2 is: " << obj2.dispt() << endl;
	return 0;
}
