#include <iostream>
#include <string>

int main(void)
{
  std::cout << "Como te llamas? ";
  std::string Nombre = "Nombre";
  std::cin >> Nombre;
  
  std::cout << "Hola, " << Nombre  << "!" <<  std::endl;
  return 0;
}
