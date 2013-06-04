//---------------------------------------------------------------------------

#include <iostream.h>
#include <conio.h>

main()
{
int i,n,s=0;
cout<<"Program oblicza sume kwadratow liczb od 1 do n."<<endl;
cout<<"-----------------------------------------------"<<endl<<endl;
cout<<"Podaj n: ";
cin>>n;
cout<<endl;

//***************************************

cout<<"--- za pomoca petli FOR ---"<<endl;
cout<<"Suma kwadratow wynosi: ";
for (i=1; i<=n; i++)
        {
        s=s+i*i;
        if (i<n) cout<<i*i<<" + ";
                else cout<<i*i<<" = "<<s;
                };

//****************************************

cout<<endl<<endl<<"-- za pomoca petli WHILE --"<<endl;
cout<<"Suma kwadratow wynosi: ";
i=1;
s=0;
while (i<=n)
        {
        s=s+i*i;

        if (i<n) cout<<i*i<<" + ";
                else cout<<i*i<<" = "<<s;
        i++;
                };

//****************************************

cout<<endl<<endl<<"- za pomoca petli DO...WHILE -"<<endl;
cout<<"Suma kwadratow wynosi: ";
i=1;
s=0;
do
{
s=s+i*i;

        if (i<n) cout<<i*i<<" + ";
                else cout<<i*i<<" = "<<s;
        i++;
}
while (i<=n);

//****************************************

getch();
return 0;
}

 