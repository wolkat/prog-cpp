/*----------------------------------------------------------------*/
/*  Program rysuje drzewo binarnee stopnia n-tego o wysokosci L   */
/*  z wykorzystaniem funkcji zolwiowych.                          */
/*----------------------------------------------------------------*/
#include <iostream.h>
#include <conio.h>
#include <math.h>
#include "winbgim.cpp"
#include "zolw.cpp"
void init_graf();
void drzewo_bin(int L, int n);
//----------------------------------------------------------------
int main()
{
  int  L, n;
  cout << "Zad. 38 Program rysuje drzewo o podym stopniu rozgalezienia.\n"
  cout << "\nPodaj wysokosc drzewa: ";
  cin >> L;
  cout << "\nPodaj stopien drzewa: ";
  cin >> n;
  init_graf();
  inicjalizacja_zolwia();
  moveto(getmaxx()/2, (getmaxy()+L)/2);
  lewo(90);
  drzewo_bin(L, n);
  getch();
  closegraph();
  return 0;
}
//-------------------------------------------------------------
void init_graf()
{
  int sterownik, tryb;
  sterownik = DETECT;
  initgraph(&sterownik, &tryb, "");
}
//-------------------------------------------------------------
void drzewo_bin(int L, int n)
{
  if (n == 1) np(L);
    else
    {
      np(L);
      lewo(45);
      drzewo_bin(L/2, n-1);
      ws(L/2);
      prawo(90);
      drzewo_bin(L/2, n-1);
      ws(L/2);
      lewo(45);
    }
}