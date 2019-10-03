#include <iostream>
#include <cmath>

double inte(int n, double P, double i);

int main(void)
{
  int a=0;
  double b=0.0;
  double c=0.0;
  std::cin >> c;
  std::cin >> a;
  std::cin >> b;
  std::cout << inte(a, b, c) << std::endl;

  return 0;
}

double inte(int n, double P, double i)
{
  double F = P * std::pow(1+i, n);
  return F;
}
