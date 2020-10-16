#include <iostream>
#include <conio.h>
using namespace std;
void arrayprint(int *ptrarray,int x,int y){
 int index =0;
 for (int i=0; i < x; i++){
     cout << "[ ";
     for(int j=0; j < y; j++){
     cout << *(ptrarray + index) << " ";
     index++;
     }
     cout << "]" << endl;
 }
}
int main(){
    const int kolom = 4;
    const int baris = 2;
    int rtx[kolom][baris] = {1,2,3,4,4,3,2,1};

    arrayprint(*rtx,baris,kolom);
}