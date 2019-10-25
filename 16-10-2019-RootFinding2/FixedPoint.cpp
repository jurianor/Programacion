#include <iostream>
#include <cmath>

using fptr = double(double);  
double fixedpoint(double x0, double eps, fptr f);
double fun(double x);

int main(void)
{
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  
  const double EPS = 1.0e-8;
  double root = fixedpoint(100, EPS, fun);
  std::cout << root << "\n";;
  
  return 0;
}

double fixedpoint(double x0, double eps, fptr f, fptr g)
{
  double xr = x0;
  int iter = 0;
  while(1){
    if(std::fabs(f(xr)) <= eps)	{break;}
    xr = g(xr);
  }
  std::cout << "# fixedpointniter = " << iter << "\n";
  
  return xr;
}

double gaux(double x)
{
  return 10-x*std::cosh(50.0/x);
}


double fun(double x)
{
  return x + 10 - x*std::cosh(50.0/x);
}
