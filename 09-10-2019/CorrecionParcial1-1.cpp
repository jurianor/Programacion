#include <iostream>
#include <cmath>

int isprime(int m);
int largest_prime_factor(int m);

int main(void)
{
  std::cout << largest_prime_factor(3) << std::endl; //aqui va un 9
  std::cout << largest_prime_factor(97) << std::endl;
  std::cout << largest_prime_factor(100) << std::endl;
  std::cout << largest_prime_factor(12345) << std::endl;
  std::cout << largest_prime_factor(1000099) << std::endl;
  std::cout << largest_prime_factor(5412345) << std::endl;
  //std::cout << largest_prime_factor(95412341) << std::endl;
  //std::cout << largest_prime_factor(35412347) << std::endl;
  //std::cout << largest_prime_factor(835412343) << std::endl;
 
  return 0;
}


int isprime(int m)
{
  for(int ii = 2; ii<=std::sqrt(m); ++ii){
    if(m%ii == 0) return 0;
  }
  return 1;
}

int largest_prime_factor(int m)
{
  if(isprime(m)) return m;
  int maximum = -1;
  for(int ii = 2; ii<=(m/2);++ii){
    if( (m%ii ==0) and (isprime(ii)==1) and (ii > maximum) ){
      maximum = ii;
    }
  }
  return maximum;
}
