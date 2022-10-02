#include<iostream>
using namespace std;
class Simple
{
	private:
		int data;
	public:
		Simple() : data (99)
		{
			
		}
		int GetData()
		{
			return data;
		}
};
Simple s;
Simple* RetObjByRef()
{
	//Simple s;
	return &s;
}
int main()
{
	Simple *s1 = RetObjByRef();
	cout << s1 -> GetData();
	return 0;
}
