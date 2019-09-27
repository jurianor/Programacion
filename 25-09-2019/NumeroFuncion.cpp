#include <iostream>

void numero(int m);

int main(void)
{
  int m=9; //Por el alcance, esta m es distinta a la m en la declaracion e implementacion de la funcion numero
  numero(m);
  std::cout << m << std::endl; //toma el valor de m local, es decir 9, que es lo que imprime
  return 0;
}

void numero(int m)
{
  m = 298;
  std::cout << m << std::endl;
  //al ejecutar se toma el entero local m=9 y lo pasa por copia por el valor m=9
}

//Por el orden del codigo, primero evalua la m en numero y luego imprime la m local de main
