#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance 				//English Distance class
{
private:
	int feet;
	float inches;
public: 					//constructor (no args)
	Distance() : feet(0), inches(0.0)
	{ } 						//constructor (two args)
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist() 				//get length from user
	{
		cout << "\nEnter feet: "; cin >> feet;
		cout << "Enter inches: "; cin >> inches;
	}
	void showdist() 			//display distance
	{ cout << feet << "\'-" << inches << "\""; }
	Distance add_dist(Distance); //add
	Distance& RetDist()
	{
		
	}
};
//--------------------------------------------------------------//add this distance to d2, return the sum
Distance Distance::add_dist(Distance d2)
{
	Distance temp; 					//temporary variable
	temp.inches = inches + d2.inches; //add the inches
	if(temp.inches >= 12.0) 		//if total exceeds 12.0,
	{ 								//then decrease inches
		temp.inches -= 12.0; 		//by 12.0 and
		temp.feet = 1; 				//increase feet
	} 								//by 1
	temp.feet += feet + d2.feet; 	//add the feet
	d2.feet= 100;
	return temp;
}
////////////////////////////////////////////////////////////////
int main()
{
	/*Distance dist1, dist3; 		//define two lengths
	Distance dist2(11, 6.25); 	//define, initialize dist2
	dist1.getdist(); 			//get dist1 from user
	dist3 = dist1.add_dist(dist2); //dist3 = dist1 + dist2
		//display all lengths
	cout << "\ndist1 = "; dist1.showdist();	
	cout << "\ndist2 = "; dist2.showdist();
	cout << "\ndist3 = "; dist3.showdist();
	cout << endl;*/
	//int i = 9;
	int j = &i;
	return 0;
}
