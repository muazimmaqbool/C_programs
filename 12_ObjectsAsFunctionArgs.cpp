// englcon.cpp
// constructors, adds objects using member function
#include <iostream>
using namespace std;
//void NonMemberFunction(Distance);	//Error because Distance isnt declared upto here
////////////////////////////////////////////////////////////////
class Distance //English Distance class
{
	private:
		int feet;
		float inches;
	public: //constructor (no args)
		Distance() : feet(0), inches(0.0)
		{ } //constructor (two args)
		Distance(int ft, float in) : feet(ft), inches(in)
		{ }
		void getdist() //get length from user
		{
			cout << "\nEnter feet: "; cin >> feet;
			cout << "Enter inches: "; cin >> inches;
		}
		void showdist() //display distance
		{ cout << feet << "\'-" << inches << '\"'; }
		int get_feet()
		{
			return feet;
		}
		void add_dist( Distance , Distance ); //declaration
		void MemberFunction(Distance *);
};
//--------------------------------------------------------------//add lengths d2 and d3
void Distance::add_dist(Distance d2, Distance d3)
{
	inches = d2.inches + d3.inches; //add the inches
	feet = 0; //(for possible carry)
	if(inches >= 12.0) //if total exceeds 12.0,
	{ //then decrease inches
		inches -= 12.0; //by 12.0 and
		feet++; //increase feet 
	} //by 1
	feet += d2.feet + d3.feet; //add the feet
	d2.feet = 99;
}
////////////////////////////////////////////////////////////////
void NonMemberFunction(Distance d2)
{
	//d2.feet = 90;
	//d2.inches = 9;
	d2.showdist();
}
void Distance::MemberFunction(Distance * dp)
{
	dp -> feet = 90;
	dp -> inches = 9;
}
int main()
{
	/*Distance dist1, dist3; //define two lengths
	Distance dist2(11, 6.25); //define and initialize dist2
	
	//NonMemberFunction(dist1);
	//dist1.MemberFunction(dist2);
	
	dist1.getdist(); //get dist1 from user
	dist3.add_dist(dist1, dist2); //dist3 = dist1 + dist2
	cout << "dist1.feet = " << dist1.get_feet() << endl;
	//display all lengths
	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();
	cout << "\ndist3 = "; dist3.showdist();
	cout << endl;*/
	Distance d1, d2;
	Distance *p = &d2;
	d1.MemberFunction(p);
	d2.showdist();	//p -> showdist();	
	return 0;
}
