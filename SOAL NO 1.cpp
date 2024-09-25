// Name: DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM: 2410631170069

#include <iostream>
using namespace std;

// Fungsi untuk memeriksa apakah bilangan adalah bilangan prima
bool isPrime(int num) {
    if (num < 2) return false; // Bilangan < 2 bukan prima
    for (int i = 2; i < num; i++) { // Memeriksa dari 2 hingga num-1
        if (num % i == 0) return false; // Jika habis dibagi, bukan prima
    }
    return true; // Jika tidak ada pembagi, maka prima
}

// Fungsi untuk mencetak faktor dari bilangan
void printFactors(int num) {
    cout << "Faktor dari " << num << ": ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Fungsi utama
int main() {
    int limit;

    cout << "Masukkan batas angka: ";
    cin >> limit; // Input batas angka

    // Menampilkan bilangan ganjil
    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= limit; i += 2) {
        cout << i << " ";
        printFactors(i);
    }

    // Menampilkan bilangan genap
    cout << "\n\nBilangan Genap: ";
    for (int i = 2; i <= limit; i += 2) {
        cout << i << " ";
        printFactors(i);
    }

    // Menampilkan bilangan prima
    cout << "\n\nBilangan Prima: ";
    for (int i = 1; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            printFactors(i);
        }
    }

    return 0;
}
