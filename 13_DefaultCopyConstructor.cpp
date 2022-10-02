/* We’ve seen two ways to initialize objects. A no-argument constructor can initialize data 
members to constant values, and a multi-argument constructor can initialize data members 
to values passed as arguments. */

/* you can initialize an object with another object of the same type. Surprisingly, you 
don’t need to create a special constructor for this; one is already built into all 
classes. It’s called the default copy constructor. It’s a oneargument constructor 
whose argument is an object of the same class as the constructor.*/

//DEFAULT COPY CONSTRUCTOR//

#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
{
private:
int feet;
float inches;
public:
//constructor (no args)
Distance() : feet(0), inches(0.0)
{ }
//Note: no one-arg constructor
//constructor (two args)
Distance(int ft, float in) : feet(ft), inches(in)
{ }
void getdist() //get length from user
{
cout << "\nEnter feet: "; cin >> feet;
cout << "Enter inches: "; cin >> inches;
}
void showdist() //display distance
{ cout << feet << "\'-" << inches << '\"'; }
};
////////////////////////////////////////////////////////////////
int main()
{
Distance dist1(11, 6.25); //two-arg constructor
//Both declarations below use Default Copy Constructor, no constructor definition 
//is written in class
Distance dist2(dist1); //one-arg constructor				member-by-member copy
Distance dist3 = dist1; //also one-arg constructor [ = invoke default copy constructor ]
//display all lengths
cout << "\ndist1 = "; dist1.showdist();
cout << "\ndist2 = "; dist2.showdist();
cout << "\ndist3 = "; dist3.showdist();
cout << endl;
return 0;
}
