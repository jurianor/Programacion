#include <iostream>

int main(void)
{
  double Ml=0.0;
  std::cout <<"Escriba el numero (en millas) que quiere convertir a kilometros: \n" ;
  std::cin >> Ml;
  std::cout << Ml << " en kilometros, convertido a millas es: " << Ml*(1.609) << "\n";
  return 0;
}
