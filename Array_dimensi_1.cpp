#include <iostream>
#include <conio.h>
using namespace std;

    int main()
    {
    float nilai[5];
    float jumlah, rata2;
    
    cout<<"Program Menghitung Nilai Rata-rata"<<endl;
    
    for(int i=0; i<5; i++)
    {
    cout<<"Masukkan nilai ke "<<(i+1)<<" : ";
    cin>>nilai[i];
    }
    jumlah = 0;
    for(int i=0; i<5; i++)
    {
    jumlah = jumlah + nilai[i];
    }
    rata2 = jumlah / 5;
    cout<<"Nilai rata-rata adalah "<<rata2<<endl;
    
    getch();
    return 0;
    }
