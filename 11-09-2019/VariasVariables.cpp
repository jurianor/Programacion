#include <iostream>

int main(void)
{
  int VAl1=0;
  int VAl2=0;
  int MAYOR=0;
  int MENOR=0;
  std::cout << "Introduzca el primer valor: " ;
  std::cin >> VAl1;
  std::cout << "Ahora coloque el segundo: " ;
  std::cin >> VAl2;
  std::cout << "Sus valores son: " << VAl1 << " y " << VAl2 << std::endl;
  std::cout << "Su diferencia es: "
	    << VAl1-VAl2 << " o " << VAl2-VAl1 << std::endl;
  std::cout << "Su producto es: " << VAl1*VAl2 << std::endl;
  if (VAl1 > VAl2) {
    MAYOR=VAl1;
    MENOR=VAl2;
      std::cout << "El termino mas grande es: "
    << MAYOR << " ,y el mas peque;o es: " << MENOR << std::endl;
      }

  else {
    MAYOR=VAl2;
    MENOR=VAl1;
      std::cout << "El termino mas grande es: "
    << MAYOR << " ,y el mas peque;o es: " << MENOR << std::endl;
  }
				  
  return 0;
}
