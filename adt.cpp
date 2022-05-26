#include <iostream>
#include <string.h>
#include "warnetadt.h"

using namespace std;


int main ()
{

    warnet net;
    cout << "masukkan nama anda";
    cin >> net.nama;
    cout << "ok " << net.nama << endl;
    cout<<"|------------------------------------|"<<endl;
    cout<<"| CiNtA.NET |"<<endl;
    cout<<"|------------------------------------|"<<endl;
    cout<<"Tarif Rp 5000,- per 30 menit"<<endl;
    cout<<"|---------Masukkan pembayaran anda------------|"<<endl;

    cin >> net.bayar;
    
    return 0;

}