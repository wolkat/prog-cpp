/* rysowaie figury geometrycznej, zmiana rozmiaru figury i po³o¿enia */
/* ------------------------------------------------------------------*/
#include <iostream.h>
#include <conio.h>
#include <math.h>
/*-------------------------------------------------------------------*/
const int Esq = 27;
int main()
{
  int x, y, x1, y1, bok;
  char klawisz;
  x = 38; y = 10; bok = 5;
  do
   {
    _setcursortype(_NORMALCURSOR);
    clrscr();
    x1 = x; y1 = y;
    gotoxy(x1,y1);
    for (int i = 1; i<=bok; i++)      // górna krawedz
      cout << '*';
    for (int i = 1; i<=bok-2; i++)    // boki
      {
        y1++;
        gotoxy(x1,y1);
        cout << '*';
        x1 = x + bok -1;
        gotoxy(x1,y1);
        cout << '*';
        x1 = x;
      }
     y1++;
     gotoxy(x1,y1);
     for (int i = 1; i<=bok; i++)     // dolna krawedz
       cout << '*';
     _setcursortype(_NOCURSOR);   // wylaczenie kursora
     klawisz = getch();
     switch (klawisz)
       {
         case '+': { if ((x>=0)&&(y>=2)) {
                        bok=bok+2;   // powiekszenie
                        x--; y--;
                        }
                     break;}
         case '-': {if (bok>=4) { bok=bok-2;    // zmniejszenie
                    x++; y++;  }
                    break;}
         case 75: {if (x>=2) x--; break;}  // przesuniecie w lewo
         case 77: {if (x+bok<81) x++; break;}  // przesuniecie w prawo
         case 72: {if (y>=2) y--; break;}  // przesuniecie do gory
         case 80: {if (y+bok+2<21) y++; break;}  // przesuniecie do dolu
         case Esq: {break;}       // wyjscie
       }
  }
  while (klawisz != Esq);
  return 0;
}
//---------------------------------------------------------------------------
