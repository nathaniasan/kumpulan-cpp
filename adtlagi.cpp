#include <iostream>

#include <conio.h>

struct DataKom
{
   int nomorkom,lamabermain,tarifpermainan;
   char jenislayanan;
};

struct DTransaksi
{
 int abc;
   char* cab;

   DataKom * al;
};

 DTransaksi be;

char* jlayanan(int a)
{
 char* jl;

   if(be.al[a].jenislayanan == 'A')
    {jl = "internet";}
   else if(be.al[a].jenislayanan == 'B')
    {jl = "Game Online";}
   else if(be.al[a].jenislayanan == 'C')
    {jl = "Game Offline";}
   else if(be.al[a].jenislayanan == 'D')
    {jl = "Rental Pengetikan";}

   return jl;
}

int tpm(int b)
{
 int tarif;

   if(be.al[b].jenislayanan == 'A')
    {tarif = 2500;}
   else if(be.al[b].jenislayanan == 'B')
    {tarif = 3000;}
   else if(be.al[b].jenislayanan == 'C')
    {tarif = 2000;}
   else if(be.al[b].jenislayanan == 'D')
    {tarif = 1500;}

   return tarif;
}

long total(int c)
{
 long tl;
 tl = tpm(c) * be.al[c].lamabermain;

   return tl;
}

long totalkese()
{
 long se = 0;
   for(int i = 0; i < be.abc; i++)
    {se += total(i);}

   return se;
}

int jlpb(char d)
{
   int er = 0;
   for(int i = 0; i < be.abc; i++)
    {
     if(be.al[i].jenislayanan == d)
      {er++;}
      }
   return er;
}

char* modus()
{
  char *mo;
  mo = jlayanan(0);
  int jumlah = jlpb(be.al[0].jenislayanan);

  for(int i = 1; i < be.abc ; i++)
  {
    if(jlpb(be.al[i].jenislayanan) > jumlah)
    {
      jumlah = jlpb(be.al[i].jenislayanan);
      mo = jlayanan(i);
    }
  }

  return mo;
}


void in(int e)
{
 cout<<"Data ke-"<<(e + 1)<<endl;
   cout<<"No. Komputer            : ";cin>>be.al[e].nomorkom;
   cout<<"Jenis Layanan[A,B,C/D]  : ";cin>>be.al[e].jenislayanan;
   cout<<"Tarif Permenit          : "<<tpm(e)<<endl;
   cout<<"Durasi Beramain         : ";cin>>be.al[e].lamabermain;
}

int main(void)
{
   cout<<"=================================="<<endl;
   cout<<"       WARNET ''TELKOM'' CYBER"<<endl;
   cout<<"=================================="<<endl;
   cout<<"Jumlah Transaksi      : ";cin>>be.abc;
   cout<<endl;

   be.al = new  DataKom[be.abc];

   for(int i = 0; i < be.abc; i++)
    {in(i);}

   system ("CLS");

   cout<<"========================================================"<<endl;
   cout<<"No.  No.  Jenis               Durasi  Tarif       Total"<<endl;
   cout<<"     Komp Layanan             Bermain Permenit"<<endl;
   cout<<"========================================================"<<endl;

   for(int i = 0; i < be.abc; i++)
    {tampilan(i);}

   cout<<"========================================================"<<endl;
   cout<<"                            Total Keseluruhan : Rp "<<totalkese()<<endl;
   cout<<"                  Jenis Layanan Paling Banyak : "<<modus();

 getch();
}