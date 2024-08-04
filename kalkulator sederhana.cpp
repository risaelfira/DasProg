#include <iostream>
#include <cmath> //Library untuk fmod
using namespace std;

int main(){
	float angka1, angka2, angka3, angka4, angka5, hasil;
	char operasi;
	
	cout<<"Masukkan Angka 1 = ";
	cin>>angka1;
	
	cout<<"Masukkan Angka 2 = ";
	cin>>angka2;
	
	cout<<"Masukkan Angka 3 = ";
	cin>>angka3;
	
	cout<<"Masukkan Angka 4 = ";
	cin>>angka4;
	
	cout<<"Masukkan Angka 5 = ";
	cin>>angka5;
	
	cout<<"Pilih Operator   = ";
	cin>>operasi;
	
	
	if(operasi == '+'){
		hasil = angka1 + angka2 + angka3 + angka4 + angka5;
	}else if(operasi == '-'){
		hasil = angka1 - angka2 - angka3 - angka4 - angka5;
	}else if(operasi == '*'){
		hasil = angka1 * angka2 * angka3 * angka4 * angka5;
	}else if(operasi == '/'){
		hasil = angka1 / angka2 / angka3 / angka4 / angka5;
	}else if(operasi == '%'){
		hasil = fmod(angka1, angka2);
        hasil = fmod(hasil, angka3);
        hasil = fmod(hasil, angka4);
        hasil = fmod(hasil, angka5);
	}
	
	cout<<"\n";
	cout<<"Hasil		 = "<<hasil<<endl;
	return 0;
}
