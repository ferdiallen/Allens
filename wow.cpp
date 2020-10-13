#include <iostream>
#include <array>
#include <conio.h>
#include <array>
#include <thread>
using namespace std;

int penjumlahan(int x,int y){
  int z;
  z=x+y;
  return z;
}
void tampil(int*m){
    cout << "Hasilnya adalah " << *m << endl;
}
int main(int argc, char const *argv[])
{
  cout << "test " << endl;
  array <int, 5> rtx;
  for(int k=0; k < rtx.size(); k++){
    rtx[k]=0;
  }
   int a,cases;
   menuh:
   cout << "1.Memasukkan data" << endl;
   cout << "2.Mengeluarkan data" << endl;
   cout << "3.Keluar" << endl;
   cout << "4.Penjumlahan" << endl;
   cin >> cases;
   switch (cases)
   {
   case 1:
 for(int x =0; x < rtx.size(); x++){
       cout << "Masukkan berapapun angka: ";
       cin >> a;
       rtx[x]=a;
   }
       goto menuh;
    case 2:
    if(*rtx.data()==0){
      cout << "data kosong" << endl;
    }
    else
    {
      for(int z=0; z < rtx.size(); z++){
       cout << "Angka ke- " << z+1 << "adalah: ";
       cout << rtx[z] << endl;
   }
    }
    
  
   cout << endl;
   getch();
   goto menuh;
   case 3:
   cout << "Exit" << endl;
   break;
   case 4:
   {
   int w,v;
   cout << "Masukkan angka ke-1: ";
   cin >> w;
   cout << "Masukkan angka ke-2: ";
   cin >> v;
   int show;
   show = penjumlahan(w,v);
   thread th1(tampil, &show);
   th1.join();
   goto menuh;
   }
   default:
       break;
   }
  return 0; 
}
