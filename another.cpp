#include <iostream>
#include <conio.h>
#include <thread>
using namespace std::literals::chrono_literals;
void arrayprint(int *ptrarray,int x,int y){
 int index =0;
 for (int i=0; i < x; i++){
     std::cout << "[ ";
     for(int j=0; j < y; j++){
     std::cout << *(ptrarray + index) << " ";
     index++;
     }
     std::cout << "]" << std::endl;
 }
}
void arrayprintselected(int *ptrarray,int dex){
 int index = dex;
  std::cout << "Index yang dipilih adalah: " << "[ " << *(ptrarray+index) <<" ]" << std::endl;
}
void arrayprintseconds(int *ptrarray,int size){
  int index=0;
  for(int i=0; i < size; i++){
   std::cout << "Index yang dipilih adalah: " << "[ " << *(ptrarray+index) <<" ]" << std::endl;
  index++;
  std::this_thread::sleep_for(1s);
  }
}
int main(){
    const int kolom = 4;
    const int baris = 2;
    int rtx[kolom][baris] = {1,2,3,4,4,3,2,1};
    int pilih;
    home:
    std::cout << "1.Tampilkan semua" << std::endl;
    std::cout << "2.Tampilkan index tertentu" << std::endl;
    std::cout << "3.Keluar" << std::endl;
    std::cout << "4.Tampilkan setiap index dalam bentuk detik" << std::endl;
    std::cout << "Pilih: "; 
    std::cin >> pilih;
    switch(pilih){
        case 1:
        arrayprint(*rtx,baris,kolom);
        getch();
        goto home;
        case 2:
        int choice;
        std::cout << "Ingin menampilkan index ke berapa ?: " ;
        std::cin >> choice;
       arrayprintselected(*rtx,choice);
       getch();
       goto home;
       case 3:
       exit;
       case 4:
       int g = sizeof(rtx)/sizeof(rtx[0][0]);
      arrayprintseconds(*rtx,g); 
    }
   return 0;
}
