#include<iostream>
using namespace std;
class Demo
{
	private:
			
	public:
		int i,j,t;
		
		Demo(): i(0),j(0)
		{ cout << "DConstructor Called" << endl; }	
		
		Demo(int x, int y): i(x),j(y)
		{ cout << "Constructor Called" << endl; }	
		
		void display()
		{
			cout << "i = " << i << "    j = " << j << endl;
		}
		//void swap()
		//{
		//	t = i, i = j, j = t;
		//}
};
int main()
{
	//Demo d;
	Demo d(10,20);
	Demo *dp;
	dp = &d;
	dp -> display();
	//dp -> swap();
	dp -> t = dp -> i, dp -> i = dp -> j, dp -> j = dp -> t;
	dp -> display();
	return 0;
}

