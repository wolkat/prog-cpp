#include <math.h>
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

float f(float);

void main()
{
  double a, b, c, x, p, eps;

  cout << "\nPodaj eps: ";
  a=0; b=1;
  cin >> eps;

    if (f(a)==0) p=a;
    else if (f(b)==0) p=b;

    else do
        {
        c=(a+b)/2;
        
        if (f(c)==0) p=c;
        else if (f(a)*f(c)c<0) b=c;
        else a=c;
        p=c;
        }
        while (fabs(a-b)>eps);

    cout<<"\nPierwiastek wynosi: "<< p;

    getch();


}

float f (float x)
{
return exp(-1.5*x) -0.3*x*;
}  */
