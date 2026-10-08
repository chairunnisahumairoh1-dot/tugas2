#include <iostream>
using namespace std;

int main() {
    int nilai = 0;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 95)
    {
        cout << "NILAI A";
    }
    else if (nilai >= 85)
    {
        cout << "NILAI B";
    }
    else if (nilai >= 75)
    {
        cout << "NILAI C";
    }
    else
    {
        cout << "NILAI D";
    }

    return 0;
}
