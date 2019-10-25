#include <iostream>
#include <cmath>

int main(void)
{
  int n=10;
  const double N=n;
  double billy[n] = {1, 1, 1, 1, 1, 1, 1, 1, 1, M_PI};
  // double billy[n] = {0} Para este caso todos los elementos del array son 0
  double promedio = 0;
  double deviation = 0;
  double suma = 0;
  double x= 0;
  
  for (n=0; n<10 ; n++)
    {
      suma +=billy[n];
    }
  promedio = suma / N;
  
  for (n=0; n<10; n++)
    {
      x += std::pow( (billy[n] - promedio), 2);
      deviation = std::sqrt(x / N);
    }
  std::cout << suma << std::endl;
  std::cout << promedio << std::endl;
  std::cout << deviation << std::endl;
  return 0;
}
