#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char Data[80];
	ifstream Baca("Test_2.TXT");
	
	if (!Baca) {
		cout<<"Gagal membuka file\n";
		return 1;
	}
	
	while (!Baca.eof()) {
		Baca.getline(Data, 80);
		cout<< Data << "\n";
	}
	
	Baca.close();
	
	return 0;
}
