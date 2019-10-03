#include <iostream>
#include <cmath>

int isprime(int n);

int main(void)
{
  int f=0;
  std::cout << isprime(-2) << std::endl;
  std::cout << isprime(0) << std::endl;
  std::cout << isprime(2) << std::endl;
  std::cout << isprime(3) << std::endl;
  std::cout << isprime(4) << std::endl;
  std::cout << isprime(41) << std::endl;
  std::cin >> f,  std::cout << isprime(f) << std::endl;

  return 0;
}

int isprime(int n)
{
  if(n<=1) return 0;
  int a= 1;
  for(int ii=2; ii <= std::sqrt(n); ++ii){
    if (n%ii==0){
      a= 0;
      break;
    }
  }
  return a;
}
