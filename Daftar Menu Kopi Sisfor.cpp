#include <iostream>
using namespace std;
 
int main(){
	int menu;
	char ulang;
	
	do{
		cout << "##  Daftar Menu Kopi Sisfor  ##" << endl;
    	cout << "==============================" << endl;
    	cout << "1. Espresso" << endl;
   		cout << "2. Cappuccino" << endl;
    	cout << "3. Moccacino " << endl;
    	cout << "4. Vanilla Latte" << endl;
    	cout << "5. Hazelnut Latte" << endl;
    	cout << endl;
    
    	cout<<"Pilihan anda : ";
    	cin>>menu;
    
    	if(menu>5){
    		cout<<"Pilihan Anda Tidak Tersedia\n"<<endl;
		}
	
		cout << "Ingin memilih menu lain (y/t)? ";
    	cin >> ulang;
    	cout << endl;
	} while (ulang!= 't');
	
   	cout << "Terimakasih...";
   	cout << endl;
   	
  	return 0;
	
}
