/*------------------------------------------------------*/
/*  Program umozliwia narysowanie platka Kocha          */
/*  z wykozystaniem funkcji zolwiowych.                 */
/*------------------------------------------------------*/
#include <iostream.h>
#include <conio.h>
#include <math.h>
#include "winbgim.cpp"
#include "zolw.cpp"
void bok_lamany(int stopien, float bok);
void platek(int stopien, float bok);
void init_graf();
//------------------------------------------------------

int main ()
{
  int stopien;
  float bok;
  cout << "Zad. 39 Fraktal gwiazdzisty.
  cout << "Podaj stopien: ";
  cin >> stopien;
  cout << "Podaj bok: ";
  cin >> bok;
  init_graf();
  inicjalizacja_zolwia();
  moverel(-100, -50);
  platek(stopien, bok);
  getch();
  closegraph();
  return 0;
}
//--------------------------------------------------------
void init_graf()
{
  int sterownik, tryb;
  sterownik = DETECT;
  initgraph(&sterownik, &tryb, "");
}
//--------------------------------------------------------
void bok_lamany(int stopien, float bok)
{
  if (stopien == 1) np(bok);
    else {
          bok_lamany(stopien-1, bok/3);
          lewo(60);
          bok_lamany(stopien-1, bok/3);
          prawo(120);
          bok_lamany(stopien-1, bok/3);
          lewo(60);
          bok_lamany(stopien-1, bok/3);
         }
}
//------------------------------------------------------
void platek(int stopien, float bok)
{
  int i;
  for (i = 1; i <=3; i++)
    {
      bok_lamany(stopien, bok);
      prawo(120);
    }
}
//------------------------------------------------------
