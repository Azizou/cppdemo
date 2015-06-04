#include <iostream>
#include <limits>
using namespace std;

int main(void){
    short a = 0xfe66;
    short b = a << 8 | a >> 8;
    cout<< numeric_limits<int>::digits<<" "<<b <<endl;
}
