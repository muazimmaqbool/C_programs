//This program demonstrates use of classes
#include<iostream>
#include<conio.h>
using namespace std;
class Car
{
	private:
		unsigned int TopSpeed;
		unsigned int CurrentSpeed;
		float Temp;
		void StartFan()
		{
			if(Temp > 5 && 3 < 4)
			{
				cout << "Fan started" << endl;
				Temp -= 2.0;
				return;			
			}	
			cout << "Fan Off" << endl;
		}				
	public:	
		void StartEngine()
		{
			TopSpeed = 200;
			CurrentSpeed = 0;
			Temp = 0.0;
		}
		void StartEngine(bool choke)
		{
			if(choke == true)
			  cout << "Car start with Choke" << endl;
			else
			  cout << "Car start without Choke" << endl;
		}
		int Accelerate()
		{
			CurrentSpeed += 5;
			Temp += 1.0;
			StartFan();
			return CurrentSpeed;
		}
		int Brake()
		{
			if(CurrentSpeed >= 5)
				CurrentSpeed -= 5;
			Temp += 0.5;
			StartFan();
			return CurrentSpeed;
		}
};
typedef class Car Car;

int main()
{
	Car c1, c2;						//Create a car object in Memory (RAM)
	c1.StartEngine();
	c2.StartEngine(false);
	
	//c1.TopSpeed = 900;
	//c1.CurrentSpeed 800;
	//c1.StartFan();
	
	//int i, j, a;
	//i = j = 2;
	//a = i+++j;
	
	//cout << "a = "<< a <<endl;
	
	cout << c1.Accelerate() << endl;
	cout << c1.Accelerate() << endl;
	cout << c1.Brake() 		<< endl;
	cout << c1.Accelerate() << endl;
	cout << c1.Brake() 		<< endl;
	cout << c1.Accelerate() << endl;
	cout << c1.Accelerate() << endl;
	cout << c1.Accelerate() << endl;
	cout << c1.Accelerate() << endl;
	cout << c1.Brake() 		<< endl;
	cout << c1.Brake() 		<< endl;
	cout << c1.Brake() 		<< endl;
	cout << c1.Brake() 		<< endl;
	cout << c1.Brake() 		<< endl;
}
