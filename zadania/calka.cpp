#include "stdio.h"
#include <iostream>
using namespace std;
 
float fun(float x) {
return x*x*x+2*x*x+2;
}
 
int main(){
float p, k, d, calka, x;

cout << "f(x) = x^3 + 2 * x^2 + 2\n";
cout<< "Podaj poczatek przedzialu calkowania:\np = "; 
cin >> p; 
 
cout<<"Podaj koniec przedzialu calkowania:\nk = ";
cin >> k;
 
d = 0.01;
x=p+d/2;
calka = 0;
while (x < k) 
{
calka += d*(fun(x));
x = x+d;
}
 
cout<<"Wartosc calki wynosi w przyblizeniu: "<<calka<<"\n";
system("pause");

return 0;
}