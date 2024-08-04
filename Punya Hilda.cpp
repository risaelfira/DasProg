#include <fstream>
#include <iostream>
#include <cstdio>
using namespace std;

// Hilda Maghfira Genansi
// 202332092

int main (){
	char a[80];
	char b [80];
	
	ifstream TEN1, TEN2;
	ofstream fout;
	char ch, TEST_NAMA1[30], TEST_NAMA2[40], TEST_GABUNG[80];
	
	cout << "Berikut programnya silahkan diinput" << endl;
	cout << "silahkan masukkan inputan yang pertama: ";
	
	//Menggunakan cin.getline agar dapat membaca spasi
	cin.getline(a, sizeof(a));
	
	ofstream TEST1 ("TEST_1.TXT");
	TEST1 << a << endl;
	cout << "Input yang diinginkan telah diimpan di TEST_1.TXT\n";
	TEST1.close();
	
	cout << "Silahkan masukkan inputan yang kedua: ";
	cin.getline(b, sizeof(b));
	
	ofstream TEST2 ("TEST_2.TXT");
	TEST2 << b << endl;
	cout << "input yang diinginkan telah disimpan di TEST_2.TXT\n";
	TEST2.close();
	
	cout << "\n masukkan nama file pertama: ";
	cin.getline(TEST_NAMA1, sizeof (TEST_NAMA1));
	
	cout << "\n masukkan nama file kedua: ";
	cin.getline(TEST_NAMA2, sizeof (TEST_NAMA2));
	
	cout << "\n silahkan namakan file yang digabungkan: ";
	cin.getline(TEST_GABUNG, sizeof (TEST_GABUNG));
	
	TEN1.open(TEST_NAMA1);
	TEN2.open(TEST_NAMA2);
	
	if(TEN1 || TEN2 ){
		cout << "\n Nama file salah.";
		return 1;
	}
	
	fout.open(TEST_GABUNG);
	if(!fout){
		cout << "\n Gagal membuat file gabungan.";
		return 1;
	}
	
	while (TEN1.get(ch)){
		fout.put (ch);
	}
	
	while (TEN2.get(ch)){
		fout.put(ch);
	}
	
	cout << "\n 2 finish file kamu sudah tergabung jadi "<< TEST_GABUNG << "Silahkan di cek";
	
	// tutup file
	TEN1.close();
	TEN2.close();
	fout.close();
	
	return 0;
}
