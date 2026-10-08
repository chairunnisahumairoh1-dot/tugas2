#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 95) {
        cout << "NILAI A" << endl;
    }
    else if (nilai >= 85) {
        cout << "NILAI B" << endl;
    }
    else if (nilai >= 75) {
        cout << "NILAI C" << endl;
    }
    else {
        cout << "NILAI D" << endl;
    }

    system("pause");

    return 0;
}
