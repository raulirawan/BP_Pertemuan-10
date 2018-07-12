#include<iostream>
#include<conio.h>
using namespace std;

struct mahasiswa
{
	char nama[20];
	int nim;
	int umur;
	float ipk;
} mhs;

void tampil()
{
	cout<<"---Input---\n\n";
	cout<<"NIM  = "<<mhs.nim<<endl;
	cout<<"Nama = "<<mhs.nama<<endl;
	cout<<"Umur = "<<mhs.umur<<endl;
	cout<<"IPK  = "<<mhs.ipk;
}

void input()
{
	cout<<"---Input---\n\n";
	cout<<"Masukan NIM   : "<<endl; cin>>mhs.nim;
	cout<<"Masukan Nama  : "<<endl; cin>>mhs.nama;
	cout<<"Masukan Umur  : "<<endl; cin>>mhs.umur;
	cout<<"Masykan Ipk   : "<<endl; cin>>mhs.ipk;
}

int main()
{
	cout<<"Selamat Datang";
	input();
	
	tampil();
}
