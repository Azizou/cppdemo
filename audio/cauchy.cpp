// cauchy_distribution
#include <iostream>
#include <random>
#include <fstream>

int main()
{
  const int nrolls=1000000;  // number of experiments
  const int nstars=100000;    // maximum number of stars to distribute

  std::default_random_engine generator;
  std::cauchy_distribution<double> distribution(2450.0,100.0);

  int p[100000]={};

  for (int i=0; i<nrolls; ++i) {
    double number = distribution(generator);
    if ((number>=0.0)&&(number<1000.0)) ++p[int(number)];
  }

  std::cout << "cauchy_distribution (5.0,1.0):" << std::endl;

  for (int i=0; i<10000; ++i) {
    std::cout << i << "-" << (i+1) << ": ";
    std::cout << std::string(p[i]*nstars/nrolls,'*') << std::endl;
  }

  return 0;
}
