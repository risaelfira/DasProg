#include <iostream>
using namespace std;
int main(){
	int angka;
	
	cout<<"Maksukan angka : ";
	cin>> angka;
	
	if(angka %2 ==0){
		cout<<angka<<" adalah angka genap"<<endl;
	}
	else{
		cout<< angka<<"adalah angka ganjil"<<endl;
	}
}
