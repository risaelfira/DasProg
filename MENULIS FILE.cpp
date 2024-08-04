#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main(){
       //stream untuk menulis file
       ofstream myfile;

       //membuka file,
       //jika file tidak ditemukan maka file akan otomatis dibuat
       myfile.open("TEST.txt", ios::app);

       cout<<"OPERASI FILE 1"<<endl;
       cout<<"--------------"<<endl;

       //fail() -> untuk memeriksa suatu kesalahan pada operasi file
       if(!myfile.fail())
       {
              //menulis ke dalam file
              myfile<<"Belajar OPERASI FILE"<<endl;
              myfile.close(); //menutup file
              cout<<"Text telah ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }
      
       _getche();
       return 0;
}
