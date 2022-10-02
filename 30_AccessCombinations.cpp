#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class A //base class
{
private:
int privdataA; 
protected: 
int protdataA;
public:
int pubdataA;
};
////////////////////////////////////////////////////////////////
class B : public A 
{
public:
void funct()
{
int a;
//a = privdataA; //mauzim ??	basit ??
a = protdataA; //ok
a = pubdataA;  //ok
}
};
////////////////////////////////////////////////////////////////
class C : private A 
{
public:
void funct()
{
int a;
//a = privdataA; //?? 
a = protdataA; //ok basit | ?? mauzim
a = pubdataA;  //ok | mauzim ??
}
};
////////////////////////////////////////////////////////////////
int main()
{
int a;
B objB;
//a = objB.privdataA; //??
//a = objB.protdataA; //??
a = objB.pubdataA;  //ok
C objC;
//a = objC.privdataA; //??
//a = objC.protdataA; //??
//a = objC.pubdataA;  //??
return 0;
}
