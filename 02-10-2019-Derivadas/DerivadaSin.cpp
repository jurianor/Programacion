#include <iostream>
#include <cmath>
#include <cstdio> //permite usar printf
#include <fstream> //imprimir a un archivo

double fun(double x);
double devforward(double x, double h);
double devmiddle(double x, double h);
double devforwardrichardson(double x, double h);


int main(void)
{
  std::ofstream fout("datos.txt"); //este es el archivo a imprimir
    
  double x = M_PI/2;
  double h =0.1;
  for(x=0.0; x<=M_PI; x+=0.1){ 
  std::printf("%25.16e %25.16e %25.16e %25.16e %25.16e %25.16e\n",
	      x,
	      h,
	      std::cos(x),
	      devforward(x, h),
	      devmiddle(x, h), devforwardrichardson(x, h));
  }
  fout.close()  //cerrar el archivo
  
  return 0;
}



double fun(double x)
{
  return std::sin(x);
}

double devforward(double x, double h)
{
  return( fun(x+h) - fun(x) )/h;
}

double devmiddle(double x, double h)
{
  return( sin(x + h) - sin(x - h) )/ 2*h;
}

double devforwardrichardson(double x, double h)
{
  return 4/3*devforward(x ,h) - 1/3*devmiddle(x, h/2);
}

//Codigos gnuplot: gnuplot (prender gnuplot), plot "a.txt" u 1:3 (graficar las lineas 1 y 3 de a.txt)
