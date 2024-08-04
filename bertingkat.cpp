#include <iostream>
 
using namespace std;
 
int main(){
	 cout << "##  Program Menghitung Gaji Karyawan  ##" << endl;
	 cout << "========================================" << endl;
	 cout << endl;
	 
	 string nama;
	 char gol;
	 int jmkerja, upah_perjam, upah_lembur, gaji;
	 
	 cout<<"Nama Karyawan : ";
	 cin>>nama;
	 
	 cout<<"Golongan : ";
	 cin>>gol;
	 
	 cout<<"Total jam kerja : ";
	 cin>>jmkerja;
	 
	 switch (gol){
	 	case 'A' :
	 		upah_perjam = 5000;
	 		break;
	 	case 'B':
	 		upah_perjam = 7000;
	 		break;
	 	case 'C':
	 		upah_perjam = 8000;
	 		break;
		case 'D':
	 		upah_perjam = 10000;
	 		break;	
	 }
	 
	 if(jmkerja>48){
	 	upah_lembur = (jmkerja-48)*4000;
	 }else{
	 	cout<<endl;
	 }
	 
	 gaji = jmkerja * upah_perjam + upah_lembur;
	 
	 cout<<nama<<" Gaji Anda Rp."<<gaji<<" per minggu"<<endl;
}

