#include <iostream>

int suma(int m, int n) //m y n los intervalos de la sumatoria
{
  int result=0;
  for( int ii = m; //inicio
       ii <= n; //condicion de repeticion
       ++ii ) //cambio
    {
      if((ii%3==0) or (ii%5==0) or (ii%7==0) ){
	result +=ii;
      }
    }
  return result;
}

int main(void)
{
  std::cout<<  suma(200000, 300000) << std::endl;
  std::cout<< suma(150,725) << std::endl;
  return 0;
}
       
       
