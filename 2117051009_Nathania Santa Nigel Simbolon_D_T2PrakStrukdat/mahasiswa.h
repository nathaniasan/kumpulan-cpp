#include <iostream>
#include <string.h>
using namespace std ;

class Maha
{
    private:
    struct a
    {
        string nama ;
        string npm;
        int nilaiuts;
        int nilaiuas;

    };
        a head;
    public:
        // Maha();
        // ~Maha();
        //CONSTRUCTOR
        Maha(){
    
            this->head.nama = "";
            this->head.npm = "";
            this->head.nilaiuts = 0;
            this->head.nilaiuas = 0;
  

    }
        //getter
        string getName(){
            return this->head.nama;
        }
        string getNPM(){
            return this->head.npm;
        }
        
        int getNilaiuts(){
            return this->head.nilaiuts;
        }

        int getNilaiuas(){
            return this->head.nilaiuas;
        }

        //setter implementasi nilai 
        void setNama_npm(const char* nama, const char* npm){

            this->head.nama = nama;
            this->head.npm = npm;

        }

        void setNILAIUTS(int nilaiuts, int nilaiuas){

            this->head.nilaiuts = nilaiuts;
            this->head.nilaiuas = nilaiuas;

        }


        void setNilaiakhir(int nilaiuts, int nilaiuas)
        {
            this->head.nilaiuts = nilaiuts;
            this->head.nilaiuas = nilaiuas;

            char mutu[5]={'A', 'B', 'C', 'D', 'E'};

            float nilaiakhir =  (getNilaiuts() +  getNilaiuas())/2;

                if (nilaiakhir>=80&&nilaiakhir<=100)
                {
                 cout << "Nama : " << getName() << endl;
                 cout << "NPM : " << getNPM() << endl;
                 cout << "Nilai : " << nilaiakhir << endl ;
                 cout << "Huruf Mutu : " << mutu [0];
                }
                else if (nilaiakhir>=68&&nilaiakhir<80)
                {
                 cout << "Nama : " << getName() << endl;
                 cout << "NPM : " << getNPM() << endl;
                 cout << "Nilai : " << nilaiakhir << endl ;
                 cout << "Huruf Mutu : " << mutu [1];
                }
                else if (nilaiakhir>=56&&nilaiakhir<68)
                {
                 cout << "Nama : " << getName() << endl;
                 cout << "NPM : " << getNPM() << endl;
                 cout << "Nilai : " << nilaiakhir << endl ;
                 cout << "Huruf Mutu : " << mutu [2];
                }
                else if (nilaiakhir>=45&&nilaiakhir<56)
                {
                 cout << "Nama : " << getName() << endl;
                 cout << "NPM : " << getNPM() << endl;
                 cout << "Nilai : " << nilaiakhir << endl ;
                 cout << "Huruf Mutu : " << mutu [3];
                }
                else if (nilaiakhir>45)
                {
                 cout << "Nama : " << getName() << endl;
                 cout << "NPM : " << getNPM() << endl;
                 cout << "Nilai : " << nilaiakhir << endl ;
                 cout << "Huruf Mutu : " << mutu [4];
                }
                

        }

};