#include <iostream.h>
#include <conio.h>
#include <math.h>
using namespace std;

/* x= (e*d-b*f)/(a*d-c*b)
   y= (a*f-c*e)/(a*d-c*b)
*/

int main()
{
    int a,b,c,d,e,f;
    float x,y,w,wx,wy;
  
    cout << "Program sluzacy rozwiazaniu 2 rownan liniowych stosujac wzory Kramera." << endl;
	cout << "ax+by=e"<<endl<<"cx+dy=f"<<endl<<endl;
	cout << "Wpisz a: ";
	cin >>a;
	cout << "Wpisz b: ";
	cin >>b;
        cout << "Wpisz c: ";
	cin >>c;
        cout << "Wpisz d: ";
	cin >>d;
        cout << "Wpisz e: ";
	cin >>e;
	cout << "Wpisz f: ";
	cin >>f;
	
        wx=(e*d-b*f);
	wy=(a*f-c*e);
	w=(a*d-c*b);
	
    if (w==0) {
              cout<<"Wspolczynnik(i) a,b,c lub/i d sa bledne. Wpisz je ponownie."<<endl;
              cout << "Wpisz a: ";
              cin >>a;
              cout << "Wpisz b: ";
              cin >>b;
              cout << "Wpisz c: ";
              cin >>c;
              cout << "Wpisz d: ";
              cin >>d;
           };
	
	
    cout<<endl<<"x=("<<e*d<<"-"<<b*f<<")/("<<a*d<<"-"<<c*b<<")";
    cout<<endl<<"y=("<<a*f<<"-"<<c*b<<")/("<<a*d<<"-"<<c*b<<")";
    x=wx/w;
    y=wy/w;
    
    cout.precision(3);
    cout.width(8); 
    //cout.fill('*');
    cout<<endl<<x;
    cout.width(8);
    cout<<endl<<y;
	
	getch();
	return 0;
}
      
