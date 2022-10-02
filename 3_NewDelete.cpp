#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	int *p = NULL;
	
	cout << "Do you want a \"new\" integer, (y/n): ";
	cin  >> ch;
	
	if (ch == 'y' || ch == 'Y')
	{
	  p = new int;       //or   p=new int(9);
	  *p = 9;
	  cout << p << "\t" << *p;
	  delete p;
	}
	else
	{
		cout << p << "\t" << "Memory not allocated";
	}
}
	//*p = 100;
	//cout << endl << p << "\t" << *p;
	
	// ********************************************************************** //
/*	float* f = new float(7.85);		// Allocation and initialization together
	cout << endl << "*f = " << *f << endl;
	delete f;
	
	// ********************************************************************** //  
	int *DArr = new int[5];	//dynamic block (array)
	DArr[0] = 10,DArr[1] = 20,DArr[2] = 30,DArr[3] = 40,DArr[4] = 50;
	cout << DArr[0] << DArr[1] << DArr[2] << DArr[3] << DArr[4]; 
	delete[] DArr;	//Release block of memory
	
	getch();
}*/
