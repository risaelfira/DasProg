#include <iostream>
using namespace std;

int main() {
    int i = 0;

    cout << "Contoh dengan Pre Increment:" <<endl;
    do {
        cout << i << " ";
    } while (++i < 5);

    cout << "\nContoh dengan Post Increment:" <<endl;
    i = 0; 
    do {
       cout << i << " ";
    } while (i++ < 5);

    return 0;
}

