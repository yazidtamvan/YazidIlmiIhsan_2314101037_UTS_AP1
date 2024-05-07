#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool x(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int y(string number) {
    int total = 0;
    for (char digit : number) {
        if (x(digit - '0')) {
            total += digit - '0';
        }
    }
    return total;
}

int main() {
    string angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    int a = y(angka);
    cout << "Jumlah angka prima dalam angka yang dimasukkan: " << a << endl;

    return 0;
}

