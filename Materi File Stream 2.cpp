#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main(){
	char Lagi;
	char Data[80];
	ofstream Simpan("Test_2.TXT");
	system ("cls");
	do{
		cout<<"Ketikan kumpulan karakter : ";
		cin.getline(Data, 80);
		Simpan << Data << "\n";
		cout<<"Isi data lagi? (Y/T) .. ";
		cin>>Lagi;
		cin.ignore();
	} while (Lagi == 'Y' || Lagi == 'y');
	cout << "Data telah disimpan dalam file TEST_2.TXT \n";
}
