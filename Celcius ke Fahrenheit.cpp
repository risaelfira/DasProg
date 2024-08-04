#include <iostream>
using namespace std;

int main() {
    int N;
    double celsius, fahrenheit;

    cout << "Masukkan jumlah suhu (N): ";
    cin >> N;

    for (int i = 0; i < N; ++i) {
       cout << "Masukkan suhu dalam Celsius ke-" << (i + 1) << ": ";
        cin >> celsius;

        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        cout << "Suhu dalam Fahrenheit: " << fahrenheit << endl;
    }

    return 0;
}

