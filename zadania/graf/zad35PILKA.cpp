/*==================================================================
  Program umozliwia odbijanie malej pileczki w oknie o zadanych
  parametrach.
==================================================================*/
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include "winbgim.cpp"
//-----------------------------------------------------------------
int czyt_int(char *, int, int);
void czyt_dane(int *, int *, int *, int *, int *);
void zainicjowanie_grafiki();
void odbijanie_pileczki(int *, int *, int *, int *, int *);
//-----------------------------------------------------------------
int main()
{
  int   x1,                   // wspolrzedne lewego gornego naroznika okna
        y1,
        x2,
        y2,                   // wspolrzedne prawego dolnego naroznika okna
        r;

  clrscr();
  cout<< "Zad. 35 \nProgram umozliwia odbijanie malej pileczki w oknie o zadanych parametrach.\n\n";
  czyt_dane(&x1, &y1, &x2, &y2, &r);
  zainicjowanie_grafiki();
  odbijanie_pileczki(&x1, &y1, &x2, &y2, &r);
  getch();
  closegraph();
  return 0;
}
//-----------------------------------------------------------------
//  Funkcja wczytuje wartosc typu int oraz kontroluje poprawnosc
//  logiczna i formalna.
//-----------------------------------------------------------------
int czyt_int(char *t, int ogr_d, int ogr_g)
{
  int xk, yk, L, b;
  cout << t;
  xk = wherex();
  yk = wherey();
  do
  {
    gotoxy(xk, yk);
    clreol();
    b = 0;
    cin >> L;
    if (!cin)
      {
	b = 1;
	cin.clear();
	cin.ignore(0xff, '\n');
      }
  }
  while (L<ogr_d || L>ogr_g || b==1);
  return L;
}
//-----------------------------------------------------------------
// Funkcja wczytuje dane:
// 	*wx1 - wspolrzedna x lewego gornego naroznika okna;
//	*wy1 - wspolrzedna y lewego gornego naroznika okna;
//      *wx2 - wspolrzedna x prawego dolnego naroznika okna;
//      *wy2 - wspolrzedna y prawego dolnego naroznika okna;
//	*wr  - promien pileczki;
// UWAGA: rozmiar okna powinien byc wiekszy niz promien pileczki.
//-----------------------------------------------------------------
void czyt_dane(int *wx1, int *wy1, int *wx2, int *wy2, int *wr)
{
  cout << "Podaj parametry okna:\n\n";
  cout << "- wspolrzedne lewego gornego naroznika:\n\n";
  *wx1 = czyt_int("\tx = ", 0, 640);
  *wy1 = czyt_int("\ty = ", 0, 480);
  cout << "\n\n- wspolrzedne prawego dolnego naroznika:\n\n";
  *wx2 = czyt_int("\tx = ", 0, 640);
  *wy2 = czyt_int("\ty = ", 0, 480);
  cout << "\n\nPodaj promien pileczki:\n\n";
  *wr = czyt_int("\tr = ", 3, 10);
  cout << endl;
}
//-----------------------------------------------------------------
//  Funkcja inicjalizuje tryb graficzny.
//-----------------------------------------------------------------
void zainicjowanie_grafiki()
{
  int sterownik,               // sterownik karty graficznej
      tryb;                    // tryb karty graficznej
  sterownik = DETECT;
  initgraph(&sterownik, &tryb, "");
}
//-----------------------------------------------------------------
// Funkcja steruje poruszaniem sie pileczki w oknie.
// Zakonczenie dzialania funkcji nastepuje po nacisnieciu
// dolownego klawisza.
//-----------------------------------------------------------------
void odbijanie_pileczki(int *wx1, int *wy1, int *wx2, int *wy2, int *wr)
{
  int xp, yp, dx, dy;
  setviewport(*wx1, *wy1, *wx2, *wy2, 1);
  setcolor(BLUE);
  rectangle(0,0, *wx2-*wx1, *wy2-*wy1);
  setfillstyle(SOLID_FILL, BLUE);
  floodfill(1,1, BLUE);
  randomize();
  xp = random(*wx2 - *wx1);
  yp = random(*wy2 - *wy1);
  dx = 1 + random(10);
  dy = 1 + random(10);
  setcolor(YELLOW);
  circle(xp, yp, *wr);
  do
  {
    delay(50);
    setcolor(BLUE);
    circle(xp, yp, *wr);
    if ((xp+dx+(*wr) >= *wx2-*wx1) || (xp+dx+(*wr) < 2*(*wr)))
      {

	if (dx > 0) dx = -(1 + random(10));
	  else dx=1 + random(10);
      }
    if ((yp+dy+(*wr) >= *wy2-*wy1) || (yp+dy+(*wr) < 2*(*wr)))
      {
	if (dy > 0) dy = -(1 + random(10));
	  else dy = 1 + random(10);
      }
   xp = xp + dx;
   yp = yp + dy;
   setcolor(YELLOW);
   circle(xp, yp, *wr);
  }
  while (!kbhit());
}
