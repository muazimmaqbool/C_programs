/*
class base: public derived
The keyword public specifies that <<objects of the derived class are able to access
public member functions>> of the base class. The alternative is the keyword <<private>>. 
When this keyword is used, objects of the derived class cannot access public 
member functions of the base class. Since objects can never access private or 
protected members of a class, the result is that no member of the base class is 
accessible to objects of the derived class.
*/
#include<iostream>
using namespace std;
class base
{
	private:
		int data;	
	public:
		void SetData() { data  =  99; }
		int  GetData() { return data; }
};
//class derived : public base
class derived : private base	//private Inheritance
{
	public:
		void SetData()	{ base::SetData(); }
		int  GetData()  { return base::GetData(); }
};
int main()
{
	derived d;
	d.SetData();
	cout << d.GetData();
	return 0;
}
