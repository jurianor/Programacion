#include<iostream>
#include<cmath>

using fptr=double (double);

double biseccion(double xl, double xu, double eps, fptr fun);
double regulafalsi(double xl, double xu, double eps, fptr fun)
double fun(double x);

int main(void)
{
  // std::cout.precision(15); std::cout.setf(std::ios::scientific);
  const double EPS = 1.0e-6;
  double root1 = biseccion(100,200,EPS, fun);
  double root2 = regula_falsi(100,200,EPS, fun); 
  std::cout << root1 << std::endl;
  std::cout << root2 << std::endl;
  return 0;
}

double fun(double x)
{
  return x + 10 - x*std::cosh(50/x);
}



double regulafalsi(double xl, double xu, double eps, fptr f)
{
  double xr =xl;
  while(1){
    xr=(xl+xu)/2;
    xr= xu - (
	      fun(xu)(xl-xu)/(
			      fun(xl)-fun(xu)
			      )
	      )
    if (std::fabs(fun(xr)) <= eps){break;}
    else if (fun(xr)*fun(xl) < 0){xu = xr;}
    else {xl = xr;}
  }
  return xr;
}



double biseccion(double xl, double xu, double eps, fptr fun)
{
  double xr =xl;
  while(1){
    xr=(xl+xu)/2;
    if (std::fabs(fun(xr)) <= eps){break;}
    else if (fun(xr)*fun(xl) < 0){xu = xr;}
    else {xl = xr;}
  }
  return xr;
}
