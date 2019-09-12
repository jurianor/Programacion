#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  std::cout << "Como te llamas? ";
  string Nombre;
  std::cin >> Nombre;
  
  std::cout << "Hola, " << Nombre  << "!" <<  std::endl;
  return 0;
}
