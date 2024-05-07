#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int n;
    cout << "Insert a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number.";
    } else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << n << " is a prime number.";
        } else {
            cout << n << " is not a prime number.";
        }
    }

    return 0;
}
