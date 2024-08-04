#include <iostream>
using namespace std;

int main(){
	for(char karakter = 'a'; karakter <= 'z'; karakter++){
		cout<<karakter<<": Huruf Kecil"<<endl;
	}
	for(char karakter = 'A'; karakter <= 'Z'; karakter++){
		cout<<karakter<<": Huruf Kapital"<<endl;
	}
	for(int karakter = 0; karakter <= 9; karakter++){
		cout<<karakter<<": Digit"<<endl;
	}
}
