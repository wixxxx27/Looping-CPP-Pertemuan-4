// Name: DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM: 2410631170069

#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk memeriksa apakah bilangan adalah prima
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Fungsi untuk menampilkan faktor bilangan
void tampilkanFaktor(int num) {
    cout << "Faktor dari " << num << ": ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int batas, sumGanjil = 0, sumGenap = 0, sumPrima = 0;
    vector<int> ganjil, genap, prima;

    // Meminta input batas dari pengguna
    cout << "Masukkan batas angka: ";
    cin >> batas;

    // Loop untuk memproses setiap angka dari 1 hingga batas
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            // Bilangan ganjil
            ganjil.push_back(i);
            sumGanjil += i;
        } else {
            // Bilangan genap
            genap.push_back(i);
            sumGenap += i;
        }
        // Memeriksa bilangan prima
        if (isPrime(i)) {
            prima.push_back(i);
            sumPrima += i;
        }
    }

    // Menampilkan bilangan ganjil, genap, dan prima
    cout << "\nBilangan Ganjil dari 1 hingga " << batas << ": ";
    for (int num : ganjil) {
        cout << num << " ";
    }
    cout << "\nJumlah bilangan ganjil: " << sumGanjil << endl;

    cout << "\nBilangan Genap dari 1 hingga " << batas << ": ";
    for (int num : genap) {
        cout << num << " ";
    }
    cout << "\nJumlah bilangan genap: " << sumGenap << endl;

    cout << "\nBilangan Prima dari 1 hingga " << batas << ": ";
    for (int num : prima) {
        cout << num << " ";
    }
    cout << "\nJumlah bilangan prima: " << sumPrima << endl;

    // Menampilkan faktor dari setiap bilangan ganjil, genap, dan prima
    cout << "\nFaktor Bilangan Ganjil: " << endl;
    for (int num : ganjil) {
        tampilkanFaktor(num);
    }

    cout << "\nFaktor Bilangan Genap: " << endl;
    for (int num : genap) {
        tampilkanFaktor(num);
    }

    cout << "\nFaktor Bilangan Prima: " << endl;
    for (int num : prima) {
        tampilkanFaktor(num);
    }

    return 0;
}

