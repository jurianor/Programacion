#include<iostream>
#include<cmath>

using fptr=double(double);
double FUN(double x);
double fun(double x);
void error_itermax(double xr, double fxr, int itermax);

double newton(double x0, double eps, fptr F, fptr f, int itermax);

int main(void)
{
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  
  const double EPS = 1.0e-8;
  const int ITERMAX = 10000;
   double root = newton(100, 200, EPS, fun, ITERMAX);
  root = newton(100, EPS, FUN, fun, ITERMAX);
  std::cout << root << "\n";
      
  return 0;
}

double newton(double x0, double eps, fptr F, fptr f, int itermax)
{
  double xr = x0;
  int iter = 0;
  while(1) {
    if (std::fabs(f(xr)) <= eps) {
      break;
    }
    xr = xr - FUN(xr)/fun(xr);
    iter++;
    if (iter > itermax) {
      error_itermax(xr, f(xr), itermax);
      break;
    }
  }
  std::cout << "# newton-raphson niter = " << iter << "\n";
  
  return xr;
}

double FUN(double x)
{
  return x + 10 - x*std::cosh(50.0/x);
}

double fun(double x)
{
  return std::cosh(50.0/x) + 50*std::sinh(50.0/x);
}

void error_itermax(double xr, double fxr, int itermax)
{
  std::cerr << "############################################\n";
  std::cerr << "# ERROR: max number of iterations reached.\n";
  std::cerr << "# itermax = " << itermax << "\n";
  std::cerr << "# xr = " << xr << "\n";
  std::cerr << "# f(xr) = " << fxr << "\n";
  std::cerr << "############################################\n";
}
