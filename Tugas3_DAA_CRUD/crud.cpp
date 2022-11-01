#include<conio.h>
#include <iostream>
using namespace std;
struct data{
int matkul;
char nim[9],nama[20],kelas[20],tgl_lahir[8];};
data batas[100];
int a,b,c,d;

void inputdata()
{    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"Nama\t: ";cin>>batas[a].nama;
   cout<<"NIM\t: ";cin>>batas[a].nim;
   cout<<"Tanggal Lahir (date/month/year)\t: ";cin>>batas[a].tgl_lahir;
   cout<<"Jumlah Matkul\t: ";cin>>batas[a].matkul;
   a++;}}



void lihatdata()
{int i,j;
 cout<<"\n================================ MENAMPILKAN DATA ==================================================================\n\n";
 cout<<"==================================================================================================================\n";
 cout<<"||\tNO\t||\tNama\t||\tNIM\t\t||\tTanggal Lahir\t||\tJumlah Mata Kuliah\t|| \n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"==================================================================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].nama<<"\t        ||";
  cout<<batas[i].nim<<"\t\t||";
  cout<<batas[i].tgl_lahir<<"\t\t||";
  cout<<batas[i].matkul<<"\t\t\t\t||";cout<<endl;
  }
  cout<<"================================================================================================================== ";}

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}

 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";

}

void editdata(){
int k,l;
cout<<"Masukan Urutan Data yang akan diedit (lihat pada tabel) : ";cin>>k;
l=k-1;
cout<<"Nama\t: ";cin>>batas[l].nama;
cout<<"NIM\t: ";cin>>batas[l].nim;
cout<<"Tanggal Lahir\t: ";cin>>batas[l].tgl_lahir;
cout<<"Jumlah Matkul\t: ";cin>>batas[l].matkul;
lihatdata();
}

int main()
{     int pilih;
 char w;
 cout<<"=============================PROGRAM STRUKTUR DATA=============================";
  awal:
    cout<<endl;
    cout<<endl;
  cout<<"\n================================ PILIHAN MENU =================================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();goto awal;}
  if(pilih==2)
   {hapusdata();goto awal;}
  if(pilih==3)
   {lihatdata();goto awal;}
  if(pilih==4)
   {editdata();goto awal;}
  if(pilih==5)
   {
    cout<<"\n\n                    APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(w=='n'||w=='N')
           {goto awal;}}
  else
   {cout<<"Pilihan 1-5";goto awal;}

}
