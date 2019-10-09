#include <fstream> 
#include <cmath>
#include <cstdio>
// Esta cosa no esta corregida

double potential(double x);
double dev_central(double x, double h);
double dev_central_richardson(double x, double h);
double electricfield(double x, double h);   
int main(void)
{
  double x = 0;
  double h = 0.02;
  for(x=0.0; x<=2.5; x+=0.02){
    
  std::printf("%25.16e %25.16e %25.16e\n",
	      x, electricfield(x, h), dev_central_richardson(x, h));
  }

  return 0;
}

double potential(double x)
{
  double F = 2*x*std::sin(x);
  return F;
}

double dev_central(double x, double h)
{
  double G = -(potential(x+h) - potential(x-h))/2*h;
  return G;
}

double dev_central_richardson(double x, double h)
{
  return 4*dev_central(x ,h/2) - 1/3*dev_central(x, h);  
}

double electricfield(double x, double h)
{
 return
}
