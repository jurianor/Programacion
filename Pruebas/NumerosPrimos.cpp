#include <iostream>
#include <cstdio>
double sumdowhile(int N)
{
  int primo=1, sum=0;
  do {
    sum +=primo;
    primo++
      }
  return sum;
}
      

int main(void)
{
  int contador=0, variable, primo;
  for (variable=1; variable<=20; variable++)
    {
      primo=1;
      contador=2;
      
    while (contador <= variable / 2 && primo)
      {
	  if(variable%contador==0)
	    primo=0;
	contador++;
      }
    if(primo)
      std:: printf( "%d", variable);
    }
  
   double sumdowhile(int primo)
   {
  int primo=1, sum=0;
  do
    {
    sum +=primo;
    primo++;
    }
  return sum;
   }

   std::cout <<sumdowhile(20)<<std::endl;
 

      
	return 0;
}

