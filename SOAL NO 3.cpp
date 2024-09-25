#include <iostream>
using namespace std;

int main() {
    int tinggi;

    // Meminta input tinggi dari pengguna
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    // Loop untuk setiap baris
    for (int i = 1; i <= tinggi; i++) {
        // Menampilkan spasi di setiap baris (mengatur jarak agar berbentuk segitiga)
        for (int j = i; j < tinggi; j++) {
            cout << " ";
        }
        // Menampilkan bintang di setiap baris
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}
