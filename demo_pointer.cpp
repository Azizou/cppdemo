#include <iostream>
#include <string>
#include <memory>

int main(int argc, char * argv[]){
	typedef int node;
	std::shared_ptr<node> shptr(new int(10));
//	std::shared_ptr<node> C= std::make_shared<node>();
	std::shared_ptr<node> C(shptr);

	std::cout<<"The value of shptr is "<<*shptr<<std::endl;
	*C = 42;
	std::cout<<"The value of shptr is "<<*shptr<<std::endl;
}
