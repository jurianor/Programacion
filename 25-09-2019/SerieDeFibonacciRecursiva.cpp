#include <iostream>

int fibonacci_loop(int N)
{
  int suma=0;
  if (N == 0 or N ==1) return 1;
  int aold1 = 1, aold2=1, a;
  suma = aold1 + aold2;
  for (int ii = 3; ii <= N; ++ii){
    a = aold1 + aold2;
    suma += a;
    aold2 = aold1;
    aold1 = a;
  }
  return suma;
}

int fibonacci_recursive(int N)
{
  return 0;
}

int main(void)
{
  int N= 5;
  std::cout << fibonacci_loop(0) << std::endl;
  std::cout << fibonacci_loop(1) << std::endl;
  std::cout << fibonacci_loop(2) << std::endl;
  std::cout << fibonacci_loop(3) << std::endl;
  std::cout << fibonacci_recursive(N) << std::endl;
  return 0;
}

   
