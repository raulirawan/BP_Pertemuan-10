#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstdlib>

using namespace std;

struct mahasiswa
{
	char nama[30];
	
};
mahasiswa ueu;
char terserah[15], terserah2[15], terserah3[15];

int garis()
{
	for(int i=0;i<70;i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

int menu()
{
	cout<<"\t   ===DATA MAHASISWA==="<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"Silahkan pilih kode yang Anda inginkan : "<<endl;
	cout<<"[1] Input Data"<<endl;
	cout<<"[2] Tambah Data"<<endl;
	cout<<"[3] Baca Data"<<endl;
	cout<<"[4] Gabung Data"<<endl;
	cout<<"[5] Keluar"<<endl;
	cout<<"Masukan kode yang Anda pilih  [1/2/3/4/5]";
}

int input_data()
{
	cout<<"Masukan nama file (.txt) : ";
	cin.getline(terserah,15);
	ofstream simpan(terserah);
	system("cls");
	cout<<"\nNama\t   : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}

int main()
{	
	input_data();	
}
