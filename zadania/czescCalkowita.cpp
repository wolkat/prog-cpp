//---------------------------------------------------------------------------

#include <iostream.h>
#include <conio.h>
//#include <math.h>

main()
{
int i;
double pierw,n;



cout<<"Program okresla czesc ca³kowita pierwiastka kwadratowego z liczby naturalnej n. "<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl<<endl;
cout<<"Podaj n: ";
cin>>n;
//n=i*i;
cout<<endl;
i=1;
do
{

i++;
}
while (i*i<=n);
i--;
cout<<i;
getch();
return 0;
}
//---------------------------------------------------------------------------
