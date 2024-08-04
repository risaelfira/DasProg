#include <iostream>
#include <cmath>
using namespace std;

// function prototype
float lakukanOperasi(float angkaA, float angkaB, char operasi);

int main(){
    int N = 5;
	float angka[N], hasil;
	char operasi[N];
	
	for (int i = 0; i < N; i++) {
	    cout<<"Masukkan Angka "<<i+1<<" = ";
	    cin>>angka[i];
	    
	    if (i == N-1) break;                        // operasi dilakukan diantara angka, jadinya operasi terakhir ditiadakan
	    cout<<"Pilih Operator "<<i+1<<" = ";
	    cin>>operasi[i];
	}
	
	cout<<"Operasi yang dilakukan adalah :"<<endl;
	for (int i = 0; i < N; i++) {
	    cout<<" "<<angka[i]<<" "<<operasi[i];
	}
	cout<<""<<endl;
	
	
	// lakukan operasi
	for (int i = 0; i < N-1; i++) {
	   if(i == 0){
	   	hasil = lakukanOperasi(angka[i], angka[i+1], operasi[i]);
	   } else {
		hasil = lakukanOperasi(hasil, angka[i+1], operasi[i]);
	   }
	}
	
	cout<<"Hasil Operasi : "<<hasil<<endl;
}

float lakukanOperasi(float angkaA, float angkaB, char operasi){
    float hasil;
	if(operasi == '+'){
		hasil = angkaA + angkaB;
	}else if(operasi == '-'){
		hasil = angkaA - angkaB;
	}else if(operasi == '*'){
		hasil = angkaA * angkaB;
	}else if(operasi == '/'){
		hasil = angkaA / angkaB;
	}else if(operasi == '%'){
		hasil = fmod(angkaA, angkaB);
	}
	return hasil;
}


