#include <iostream>

// int max(int a, int b);
// double  max(double  a, double b);
//template hace lo mismo que estas dos funciones solamente que permite que main elija la variable que necesite (aunque de momento ambas variables deben ser del mismo tipo T)

template <class T, typename S>
T max(T a, S b)
{
  T result=0;
  if (a >= b) {
    result = a;
  }
  else {
    result = b;
  }
  return result;
}


  int main(void)
{
  std::cout << max(-3 , 51.5)<< std::endl;
  
  return 0;
}

// int max(int a, int b)
// {
//   if (a>=b) {
//     return a;
//   }
//   else {
//     return b;
//   }
// }


// {
//   if (a>=b) {
//     return a;
//   }
//   else {
//     return b;
//   }
// }


