
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
char nama[20],jurusan[8],NIM[5],jeniskelamin[10];
int nilai1,nilai2,nilai3,total,nilai,pil,a,b;
float rata;
cout<<"Menu Review"<<endl;
cout<<"1. Biodata"<<endl;
cout<<"2. Nilai"<<endl;
cout<<"3. Keterangan"<<endl;
cout<<"4.rata-rata"<<endl;

cout<<"Masukkan pilihan anda [1-5] : ";
cin>>pil;
switch(pil)
{
case 1:
cout<<"Biodata"<<endl;
cout<<"Nama = ";
cin>>nama;
cout<<"jurusan = ";
cin>>jurusan;
cout<<"NIM = ";
cin>>NIM;
cout<<"jeniskelamin = ";
cin>>jeniskelamin;
getch();
cout<<"Nama saya  "<<nama<<endl;
cout<<"jurusan saya "<<jurusan<<endl;
cout<<"NIM saya "<<NIM<<endl;
cout<<"jeniskelamin saya"<<jeniskelamin<<endl;
break;

case 2:
cout<<"Nilai"<<endl;
cout<<"nilai1 = ";
cin>>nilai1;
cout<<"nilai2 = ";
cin>>nilai2;
cout<<"nilai3 =";
cin>>nilai3;
getch();
total=(nilai1+nilai2+nilai3)/2;
cout<<"Nilai anda : "<<endl;
cout<<"nilai1= "<<nilai1<<endl;
cout<<"nilai2 = "<<nilai2<<endl;
cout<<"nilai3 = "<<nilai3<<endl;
cout<<"Total = "<<total<<endl;
break;
case 3:
cout<<"Keterangan"<<endl;
cout<<"Masukkan Nilai = ";
cin>>nilai;
if (nilai>100)
cout<<"lebih Mas";
else if (nilai>90 && nilai<=100)
cout<<"A";
else if (nilai>80 && nilai<=90)
cout<<"B";
else if (nilai>70 && nilai<=80)
cout<<"C";
else if (nilai>60 && nilai<=70)
cout<<"D";
else
cout<<"E";
break;

case 4:
cout<<"PROGRAM HITUNG NILAI RATA-RATA \n";
cout<<"=================================== \n";
cout<<"Nilai1 :";cin>>nilai1;
cout<<"Nilai2:";cin>>nilai2;
cout<<"Nilai3:";cin>>nilai3;
cout<<"=================================== \n";
rata=(nilai1+nilai2+nilai3)/3;
cout<<"  memperoleh nilai Rata Rata "<<rata;
cout<<" dari hasil tugas yang di ikuti \n";

getch();
}
}


