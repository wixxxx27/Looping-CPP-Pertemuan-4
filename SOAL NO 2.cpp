// Name: DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM: 2410631170069

#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    // Meminta input dari pengguna untuk jumlah deret Fibonacci
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        // Cetak dua bilangan pertama
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        // Menghitung dan menampilkan bilangan Fibonacci selanjutnya
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
