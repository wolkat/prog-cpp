/*-----------------------------------------------------------------------*/
#include <iostream.h>
#include <conio.h>
void dane(int wsk_tab[10][10],int *wsk_n);
void pisz(int wsk_tab[10][10], int *wsk_n);
void sort(int wsk_tab[10][10], int *wsk_n);
using namespace std;
int main()
{
  int tab[10][10];
  int n;
  cout << "Zad. 33. Program zamienia wartosci na przekatnych.\n";
  dane (tab, &n);
  pisz (tab, &n);
  sort(tab, &n);
  cout << endl;
  pisz (tab, &n);
  getch();
  return 0;
}

void dane(int wsk_tab[10][10],int *wsk_n)
{
  srand(time(0));
  cout << "Podaj rozmiar tablicy: ";
  cin >> *wsk_n;
  for (int j=0;j<*wsk_n;j++){
  for (int i=0;i<*wsk_n;i++){
  wsk_tab[i][j]=rand()%100;
  }}
}
void pisz(int wsk_tab[10][10], int *wsk_n)
{
  for (int j=0;j<*wsk_n;j++){
  for (int i=0;i<*wsk_n;i++){
  cout << wsk_tab[i][j];
  if (wsk_tab[i][j]<10) {cout << "  ";}
  else cout << " ";
  }
  cout << endl;
  }
}
void sort(int wsk_tab[10][10], int *wsk_n) {
   for (int i = 0; i < *wsk_n - 1; i++)
   {swap(wsk_tab[i][i], wsk_tab[*wsk_n-i-1][i]);}

}

//----------------------------------------------------------------------

