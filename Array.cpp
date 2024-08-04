#include <iostream.h>
#include <conio.h>
void main()
{float nilai{5}, total = 0, rerataan;
int i =0;
clrscr(); //Hapus layar
do{
	cout<<"Masukkan nilai ke-"<<i+1<<" = ";
	cin>.nilai[i];
	}while(++i<5);
for (i=0;i<5;i++) total += nilai[i];
	rerata = total/5;
cout<<"Total nilai = "<<total<<'\n'<<"Rata-rata nilai = "<<rerata<<'\n';
getch();
}
