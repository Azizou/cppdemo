
// normal_distribution
#include <iostream>
#include <random>
#include <fstream>
using namespace std;
int main()
{
  const int nrolls=1000000;  // number of experiments
  const int nstars=100000;    // maximum number of stars to distribute
	
  std::default_random_engine generator;
  std::normal_distribution<double> distribution(50005.0,200.0);
	ofstream dat("frame.raw");
  int p[1000000]={};

  for (int i=0; i<nrolls; ++i) {
    double number = distribution(generator) + 25400;
     p[i]=int(number)+2500;
  }

  std::cout << "normal_distribution (5.0,2.0):" << std::endl;

  for (int i=0; i<1000000; ++i) {
	  dat.write((char *)&p[i],2);
//    std::cout << i << "-" << (i+1) << ": ";
  //  std::cout << std::string(p[i]*nstars/nrolls,'*') << std::endl;
  }

  return 0;
}
