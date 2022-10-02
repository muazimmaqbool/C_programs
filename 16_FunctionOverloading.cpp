#include<iostream>
using namespace std;
class Overload
{
	private:
		float f1, f2;
		int i1, i2;
	public:
		Overload():f1(0.0),f2(0.0),i1(0),i2(0) { }
	void sum(float x, float y)
	{
		f1 = x, f2 = y;
		cout << f1 + f2;
	}
	void sum(int x, int y)
	{
		i1 = x, i2 = y;
		cout << i1 + i2;
	}	
	int sum(int x)
	{
		return x + 10;
	}
	int sum(int& x)
	{
		cout << endl << x + 10;
	}	
};
int main()
{
	Overload obj;
	int t = 99;
	obj.sum(10, 20);
	cout << endl;
	obj.sum(9.9f, 7.7f);
	cout << endl;
	cout << obj.sum(t);
	return 0;
}
