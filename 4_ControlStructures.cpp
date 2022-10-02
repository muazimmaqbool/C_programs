#include<iostream>
using namespace std;
int main()
{
	int i;
	int per;
	
	cout << "Enter Choice : ";
	cin >> i;
	
	switch (i)
	{
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		case 3:
		case 4:
			cout << "Three or four";
			break;
		default:
			cout <<"Default";			
	}
	
	//if(not (i == 0))
		//cout << "i is not 0";
	
	//cout << endl << i;
	
	//mauzim:
	//cout << "Enter percentage: ";
	//cin  >> per;
	
	//if(per < 50)
	  //goto mauzim;
	//if(per < 40)
		//goto basit; 	
		
	if(per >= 90)
	{
		//cout << "Grade A";		
	}
	else if (per >= 75)
	{
		//cout << "Grade B";
	}
	else if (per >= 55)
	{
		//cout << "Grade C";
	}
	else 
	{
		//cout << "Failed";
	}
	
	cout << endl;
			
	//conditional operator
	//per >= 50 ? cout << "Pass" : cout << "Fail";
	
	//cout << "control goes from here...";
	
	//basit:
		//cout<<"\nWrong Input; Program will exit";		
}
