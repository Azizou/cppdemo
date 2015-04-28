#include <string>
class A{
//	public std::string  to_string();
public:
	A();
	 virtual void shoot();
};
class B : public A{
public:
	B();		
};
class C :public  B{
public:
	C();	
};
