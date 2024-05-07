#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string kata;
    cout << "Masukan Sebuah Kalimat: ";
    getline(cin, kata);
    transform(kata.begin(), kata.end(), kata.begin(), ::toupper);
    cout <<"output:  "<<kata << endl;
    return 0;
}
