#include <math.h>
#include <iostream.h>
#include <conio.h>

int main()
{
  double a, b, c, fa, fc, eps;
  cout << "Podaj a: ";
  cin >> a;
  cout << "Podaj b: ";
  cin >> b;
  /*if (f(a)*f(b) >= 0)
  {
    cout << "Niew³aœciwe dane wejœciowe!\n";
    exit(1);
  } */
  cout << "Podaj eps: ";
  cin >> eps;
  cout.precision(15);
  while (b-a > eps)
  {
    c = (a+b)/2;
    fa=sin(a) - a*a;
    fc=sin(c) - c*c;
    if (fa * fc<0)
      // pierwiastek jest w podprzedziale (a;c)
      b = c;
    else
      // pierwiastek jest w podprzedziale (c;b)
      a = c;
    cout << "x = " << c << " +/- " << (b-a)/2 << endl;
    getch();
    return 0;
  }
}

