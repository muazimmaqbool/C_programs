/*#include<iostream>
using namespace std;
class Demo
{
	private:
		int arr[10];
		int index;	
		bool Overflow()
		{
			if(index > 9) 
				return true;
			else 
				return false;
		}		
	public:
		Demo()  //public; same name as class; called everytime a new object is created; no return type is mentioned
		{		//constructor function
			index = 0;
		}
		void Display()
		{
			for(int i = 0;i < index;i ++) 
				cout << arr[i] << "  ";
		}
		bool Insert(int data)		
		{
			if (Overflow())
				cout << "Index out of bound.";
			else
				arr[index ++] = data; 
		}
};
int main()
{
	Demo d;
	d.Insert(11);
	d.Insert(12);
	d.Insert(13);
	d.Insert(14);
	d.Insert(15);
	d.Insert(16);
	d.Insert(17);
	d.Insert(18);
	d.Insert(19);
	d.Insert(20);
	d.Insert(21);
	d.Display();
}
*/

#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Stack
{
	private:
		//enum { MAX = 10 }; 		// (non-standard syntax)
		int st[10]; 				// stack: array of integers
		int top; 					// number of top of stack
	public:
		Stack() 					// constructor
			{
			 top = 0; 
			}
		void push(int var) 			// put number on stack
			{ st[top ++] = var; }
			 //cout << st[0];}
		int pop() 					// take number off stack
			{ return st[-- top]; }
};
////////////////////////////////////////////////////////////////
int main()
{
	Stack s1;
	s1.push(11);
	s1.push(22);
	cout << "1: " << s1.pop() << endl; //22
	cout << "2: " << s1.pop() << endl; //11
	s1.push(33);
	s1.push(44);
	s1.push(55);
	s1.push(66);
	cout << "3: " << s1.pop() << endl; //66
	cout << "4: " << s1.pop() << endl; //55
	cout << "5: " << s1.pop() << endl; //44
	cout << "6: " << s1.pop() << endl; //33
	return 0;
}

