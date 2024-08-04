#include <iostream>
using namespace std;

int main(){
	cout << "##  Program C++ Cari Nilai Rata-rata  ##" << endl;
	cout << "=======================================\n" << endl;
	
	int input[100], jml_input, i;
	float total, rataan;
	
	cout<<"Masukkan Jumlah Nilai Yang Ingin Di Masukkan : ";
	cin>>jml_input;
	
	cout << "Input "<< jml_input << " : "<<endl;
	
	for(i=0; i < jml_input; i++){
		cin >> input[i];
	}
	
	total = 0;
  	for(i = 0; i < jml_input; i++){
    	total = total+input[i];
	}
	
	rataan = (total/jml_input);
  	cout << "Nilai rata-rata dari "<< jml_input <<" inputan adalah: " << rataan << " \n ";
  	
  	return 0;
}
