/* After declaration of the class member variables, they can be initialized
   at the time of program execution using pointers. Such initialization of 
   data is called dynamic initialization. 
   
   The benefit of dynamic initialization is that it allows different 
   initialization modes using overloaded constructors. 
   
   Pointer variables are used as argument for constructors. */
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class city
{
	char City[20];
	char State[20];
	char Country[20];
	public:
		city() 
		{
			City[0] = State[0] = Country[0] = NULL;				
		}
		
		void display(char *line);
		
		city (char *cityn)
		{
			strcpy(City, cityn);
			State[0] = NULL;
		}
		
		city(char *cityn, char *staten)
		{
			strcpy(City, cityn);
			strcpy(State, staten);
			Country[0] = NULL;
		}
		
		city(char *cityn, char *staten, char *countryn)
		{
			_fstrcpy(City, cityn);
			_fstrcpy(State, staten);
			_fstrcpy(Country, countryn);
		}
};
void city::display(char *line)
{
	cout << line << endl;
	
	if(_fstrlen(City)) cout << "City: " << City << endl;
	if(_fstrlen(State)) cout << "State: " << State << endl;
	if(_fstrlen(Country)) cout << "Country: " << Country << endl;
}
int main()
{	
	city c1("Mumbai"), 
	c2("Srinagar", "Jammu and Kashmir"), 
	c3("Bangalore", "Karnataka", "India"),
	c4('\0','\0','\0');
	c1.display("========*============");
	c2.display("========*============");
	c3.display("========*============");
	c4.display("========*============");	
	return 0;
}

