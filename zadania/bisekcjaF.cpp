#include <math.h>
#include <iostream.h>
#include <conio.h>

double f(double x)
{
  return sin(x) - x*x;
}

void main()
{
  double a, b, c, eps;
  cout << "Podaj a: ";
  cin >> a;
  cout << "Podaj b: ";
  cin >> b;
  if (f(a)*f(b) >= 0)
  {
    cout << "Niew³aœciwe dane wejœciowe!\n";
    exit(1);
  } 
  cout << "Podaj eps: ";
  cin >> eps;
  cout.precision(15);
  while (b-a > eps)
  {
    c = (a+b)/2;
    if (f(a)*f(c)<0)
      // pierwiastek jest w podprzedziale (a;c)
      b = c;
    else
      // pierwiastek jest w podprzedziale (c;b)
      a = c;
    cout << "x = " << c << " +/- " << (b-a)/2 << endl;


  }
   getch();
}

