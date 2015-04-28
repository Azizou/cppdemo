#include "in.h"
#include <iostream>

using namespace std;

int main(){
	A a;
	B b;
	C c;
	a.shoot();
	b.shoot();
	c.shoot();

	//binding fails
	A * a1 = new A;
	A * b1 = new B;
	A * c1 = new C;
	a1->shoot();
	b1->shoot();
	c1->shoot();
}


void A::shoot(){
	cout<<"Bullet from A"<<endl;
}
void B::shoot(){
	cout<<"Arrow from B"<<endl;
}
void C::shoot(){
	cout<<"Combo from C"<<endl;
}
