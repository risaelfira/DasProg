#include <iostream>
#include <cmath>  // Untuk menggunakan fungsi modulus (fmod)
using namespace std;

int main() {
    // Deklarasi variabel
    float angka1, angka2, angka3, angka4, angka5, hasil;
    int jumlahAngka;
    char operasi;

    // Input angka
    cout << "Masukkan Jumlah Angka (1-5): ";
    cin >> jumlahAngka;

    if (jumlahAngka < 1 || jumlahAngka > 5) {
        cout << "Jumlah angka tidak valid. Program berhenti." << endl;
        return 1;
    }

    cout << "Masukkan Angka 1: ";
    cin >> angka1;

    if (jumlahAngka >= 2) {
        cout << "Masukkan Angka 2: ";
        cin >> angka2;
    }
    if (jumlahAngka >= 3) {
        cout << "Masukkan Angka 3: ";
        cin >> angka3;
    }
    if (jumlahAngka >= 4) {
        cout << "Masukkan Angka 4: ";
        cin >> angka4;
    }
    if (jumlahAngka == 5) {
        cout << "Masukkan Angka 5: ";
        cin >> angka5;
    }

    // Input operasi
    cout << "Pilih Operator (+, -, *, /, %): ";
    cin >> operasi;

    // Kalkulasi berdasarkan operasi yang dipilih
    switch (operasi) {
        case '+':
            hasil = angka1 + angka2 + angka3 + angka4 + angka5;
            break;
        case '-':
            hasil = angka1 - angka2 - angka3 - angka4 - angka5;
            break;
        case '*':
            hasil = angka1 * angka2 * angka3 * angka4 * angka5;
            break;
        case '/':
            if (angka2 != 0 && angka3 != 0 && angka4 != 0 && angka5 != 0) {
                hasil = angka1 / angka2 / angka3 / angka4 / angka5;
            } else {
                cout << "Pembagian dengan nol tidak valid. Program berhenti." << endl;
                return 1;
            }
            break;
        case '%':
            if (angka2 != 0 && angka3 != 0 && angka4 != 0 && angka5 != 0) {
                hasil = fmod(angka1, angka2);
                hasil = fmod(hasil, angka3);
                hasil = fmod(hasil, angka4);
                hasil = fmod(hasil, angka5);
            } else {
                cout << "Modulus dengan nol tidak valid. Program berhenti." << endl;
                return 1;
            }
            break;
        default:
            cout << "Operator tidak valid. Program berhenti." << endl;
            return 1;
    }

    // Output hasil
    cout << "\n";
    cout << "Hasil          = " << hasil << endl;

    return 0;
}

