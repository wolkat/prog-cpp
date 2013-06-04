//---------------------------------------------------------------------------

#include <iostream.h>
#include <conio.h>

main()
{
int i,n,a=1;
cout<<"Program wyznacza i wyswietla wszystkie dzielniki liczby calkowitej n."<<endl;
cout<<"-----------------------------------------------"<<endl<<endl;
cout<<"Podaj n: ";
cin>>n;
cout<<endl<<"Dzielniki n to: {";
while (a<=n)
{
if (n%a==0) {
        if (a<n) cout<<a<<",";
                else cout<<a;
                };
a++;
};
cout<<"}";
getch();
return 0;
}
//---------------------------------------------------------------------------
 