#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    char a[90];
    char b[90];
    system ("cls");

    cout << "Berikut programnya silahkan diinput" << endl;
    cout << "Silakan masukkan inputan yang pertama: ";

    cin.getline(a, sizeof(a));

    ofstream TEST1("TEST_1.TXT");
    TEST1 << a << endl;
    cout << "Input yang diinginkan telah di simpan di TEST_1.TXT\n";
    TEST1.close();

    cout << "Silahkan masukkan inputan yang kedua: ";
    cin.getline(b, sizeof(b));

    ofstream TEST2("TEST_2.TXT");
    TEST2 << b << endl;
    cout << "Input yang diinginkan telah disimpan di TEST_2.TXT\n";
    TEST2.close();

    char ch, TEST_NAMA1[30], TEST_NAMA2[40], TEST_GABUNG[80];

    cout << "\nMasukkan nama file pertama: ";
    cin.getline(TEST_NAMA1, sizeof(TEST_NAMA1));

    cout << "\nMasukkan nama file kedua: ";
    cin.getline(TEST_NAMA2, sizeof(TEST_NAMA2));

    cout << "\nSilahkan namakan file yang digabungkan: ";
    cin.getline(TEST_GABUNG, sizeof(TEST_GABUNG));

    ifstream TEN1(TEST_NAMA1);
    ifstream TEN2(TEST_NAMA2);

    if (!TEN1 || !TEN2) {
        cout << "\nNama file salah atau file tidak dapat dibuka.";
        return 1;
    }

    ofstream fout(TEST_GABUNG, ios::out);
    if (!fout) {
        cout << "\nGagal membuat file gabungan.";
        return 1;
    }

    while (TEN1.get(ch)) {
        fout.put(ch);
    }

    while (TEN2.get(ch)) {
        fout.put(ch);
    }

    if (fout.fail()) {
        cout << "\nGagal menulis ke file gabungan.";
        return 1;
    }

    cout << "\nDua file selesai digabungkan menjadi " << TEST_GABUNG << ". Silakan diperiksa.";

    TEN1.close();
    TEN2.close();
    fout.close();

    return 0;
}

