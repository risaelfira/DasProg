#include <iostream>
using namespace std;

int main() {
    int N = 1;
    int suhuC[N];
    float suhuF[N];

    for (int i = 0; i < N; i++) {
        cout << "Masukkan suhu dalam derajat Celcius: ";
        cin >> suhuC[i];
        suhuF[i] = (9.0 / 5.0) * suhuC[i] + 32;
    }

    cout << endl;
    cout << "Hasil konversi suhu adalah" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Suhu dalam derajat Celcius: " << suhuC[i] << " = " << suhuF[i] << " derajat Fahrenheit" << endl;
    }

    return 0;
}
