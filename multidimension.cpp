#include <iostream>
#include <conio.h>
#include <array>

using namespace std;

const int kolom = 4;
const int baris = 2;

void printMulti(array<array<int,kolom>,baris> nilai){
    for(array<int,kolom> koloms: nilai){
        cout << "[ ";
        for(int val_kolom: koloms){
            cout << val_kolom << " ";
        }
        cout << "]" << endl;
    }

}
int main(){
    array <array<int,kolom>,baris> nilai = {4,5,7,8,1,4,7,8};
    printMulti(nilai);
}