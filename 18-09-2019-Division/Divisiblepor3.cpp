
#include<iostream>
int main(void)
{
  double a, b=3;
  std::cout << "Introduzca un numero para ver si es divisible por 3\n";
  std::cin >> a;
    if (a%3 == 0) {
      std::cout << "El numero " << a << " es divisible por 3\n";
    }
    else {
      std::cout << "El numero " << a << " no es divisible por 3\n";
    }
    return 0;
}
