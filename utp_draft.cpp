#include <iostream>
#include <cstring>
using namespace std;

class karakter{
    
    public:
    string nama;
    string nama1;
        karakter(){
            this -> nama = nama;
        }

        karakter(){
            this -> nama1 = nama1;
        }

};

int jarak(int x[], int y[]){
    int hasil;
    for(int i = 0; i < 2; i++){
        cin>> x[i];
    }

    for(int j = 0; j < 2; j++){
        cin>> y[j];
    }

    if(x[0]-x[1] + y[0]-y[1] < 10){
        
        cout <<"zombie";
    }else{
        cout<<"survivor";
    } 

}

int main(){
    karakter name;
    int posisix[20], posisiy[20];

    cin >> name.nama;
    cin>> name.nama1;
    jarak(posisix, posisiy);
}
