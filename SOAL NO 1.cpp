// Name: DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM: 2410631170069

#include <iostream>
using namespace std;

int main() {
    int batas;

    // Input batas dari pengguna
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    // Loop untuk mengecek setiap bilangan dari 1 hingga batas
    for (int i = 1; i <= batas; i++) {
        bool prima = true;

        // Cek apakah bilangan ganjil atau genap
        if (i % 2 != 0) {
            cout << i << " adalah bilangan ganjil." << endl;
        } else {
            cout << i << " adalah bilangan genap." << endl;
        }

        // Cek apakah bilangan prima
        if (i <= 1) {
            prima = false;
        } else {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    prima = false;
                    break;
                }
            }
        }

        if (prima) {
            cout << i << " adalah bilangan prima." << endl;
        }

        // Menampilkan faktor dari bilangan
        cout << "Faktor dari " << i << ": ";
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cout << j << " ";
            }
        }
        cout << endl;
        cout << "-------------------" << endl;
    }

    return 0;
}

