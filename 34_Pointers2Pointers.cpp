#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class Demo
{
	int i;
	public:
	void seti() { i = 99; }	
};
int main()
{
	string s1 = "Zubair Jeelani", s2 = "Waseem";
	
	Demo* ptr[3];
	
	if(s1 > s2)
		cout << s1.length();
	else
		cout << "s2 is greater";
		
	strcpy(s2,s1);
	
	/*ptr[0] = new Demo;
	ptr[1] = new Demo;
	ptr[2] = new Demo;
	cout << ptr << endl;
	cout << *ptr;*/
}
