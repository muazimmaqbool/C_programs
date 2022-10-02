/* EXCEPTION HANDLING */
/* An exception is a problem that arises during the execution of a program. 
   A C ++ exception is a response to an exceptional circumstance that arises 
   while a program is running, such as an attempt to divide by zero */
   
/* Exceptions provide a way to transfer control from one part of program to 
   another. C ++ exception handling is built upon three keywords:
   	1. try
   	2. catch
   	3. throw. 
   	
   	try: to catch exceptions, a portion of code is placed under exception 
	     inspection. This is done by enclosing that portion of code in a try-block.
	     
    throw: An exception is thrown by using the throw keyword from inside the try block.
    
    catch: Exception handlers are declared with the keyword catch, which must be 
	     placed immediately after the try block. */
         
#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 80;			//throw exception
	}
	catch (int e)			//catch exception
	{
		cout << "An exception occured. Exception Number. " << e;
	}
	
	return 0;
}

/* POINTS TO REMEMBER */ /*
1.  Separation of Error Handling code from Normal code (try) (catch)
2.  Grouping of error types: In C++, both basic types and objects can be thrown 
    as exception. We can create hierarchy of exception objects, group exceptions 
	in namespaces or classes, categorize them according to types.
3.  There is a special catch block called 'catch all' catch(...) that can be used 
    to catch all types of exceptions. 
4.  Implicit type conversion doesn't happen for primitive types. 
    For example, in the following program 'a' isnt implicitly converted to int.
    
    try {
    	throw 'a';
    }
    catch (int x) {
    	cout << "Caught " << x;
    }
    catch (...) {
    	cout << "Default Exceptions \n";
    }

5.  If an exception is thrown and not caught anywhere, the program terminates
    abnormally. e.g. In following code, char is thrown but there is not catch 
    block to catch a char.

    try {
    	throw 'a';
    }
    catch (int x) {
    	cout << "Caught " << x;
    }

6.  A derived class exception should be caught before a base class exception.
7.  Like Java, C++ library has a <<standard exception class>> which is base class 
    for all standard exceptions. All objects thrown by components of the standard 
	library are derived from this class. Therefore, all standard exceptions can be 
	caught by catching this type.















*/
