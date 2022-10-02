/*  The only difference between a C++ struct and class is:
	the default accessibility of member variables and member functions. 
	In class, they are private, and
	in struct, they are public.      */                                                                                                                                                          

/* Exception specification 

   double myFunction(char param) throw (int);
   [If this function throws an exception of some type other than "int"
    the function calls std::unexpected instead of looking for a handler or calling
    std::terminate]
    
*/
#include<iostream>
#include<exception>
using namespace std;

struct MyException : public exception {		//inherit expcetion class
	const char * what() const throw () {	//what() is a public method provided 
		return "C++ exception";				//by exception class and is overridden
	}										//returns cause of an exception	
};

int main()
{
	int i = 80;
	try {						
		throw MyException();
	} catch(MyException& e) {
		cout <<"MyException Caught \n";
		cout << e.what() << endl;
	}
	catch(std::exception& e) {
		//other error
	}

	return 0;
}
