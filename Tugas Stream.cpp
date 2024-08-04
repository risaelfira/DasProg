#include <fstream>
#include <iostream>
#include <cstdio>
using namespace std;

int main (){
	char a[90];
	char b[90];

	cout << "Berikut programnya silahkan diinput" << endl;
	cout << "silahkan masukkan inputan yang pertama: ";
		
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

	char ch, TEST_NAMA1[30], TEST_NAMA2[40], TEST_GABUNG[80];
	
	cout << "\n masukkan nama file pertama: ";
	cin.getline(TEST_NAMA1, sizeof (TEST_NAMA1));
	
	cout << "\n masukkan nama file kedua: ";
	cin.getline(TEST_NAMA2, sizeof (TEST_NAMA2));
	
	cout << "\n silahkan namakan file yang digabungkan: ";
	cin.getline(TEST_GABUNG, sizeof (TEST_GABUNG));
	
	ifstream TEN1(TEST_NAMA1); 
	ifstream TEN2(TEST_NAMA2);
		
	TEN1.open(TEST_NAMA1);
	TEN2.open(TEST_NAMA2);
	
	if(TEN1 || TEN2 ){
		cout << "\n Nama file salah.";
		return 1;
	}
	
	ofstream fout(TEST_GABUNG, ios::out);
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
	if (fout.fail()) {
        cout << "\n Gagal menulis ke file gabungan.";
        return 1;
    }
    
	cout << "\n 2 finish file kamu sudah tergabung jadi "<< TEST_GABUNG << "Silahkan di cek";
	
	TEN1.close();
	TEN2.close();
	fout.close();
	
	return 0;
}
