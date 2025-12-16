#include <iostream>
using namespace std;

int main() {
    bool isPrime;

    for (int n = 1000; n <= 1100; n++) {
        isPrime = true;

        if (n <= 1)
            isPrime = false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << n << " ";
    }

    return 0;
}
