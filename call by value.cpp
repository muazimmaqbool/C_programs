 #include<iostream>
 using namespace std;
 void swap(int a ,int b)
 {
 	int temp;
 	temp=a;
 	a=b;
 	b=temp;
 }
 
int  main()
 {
 	int a=10;
 	int b=20;
 	cout<<"before swaping value of a and b is :"<<a <<" "<< b <<endl ;
     swap (a,b);
	 cout<<"after swaping value of a and b is :"<<a << " " << b <<endl ;
	 return 0;	
 }
 
 
