#include <iostream>
using namespace std;

int main() {
    int primes[100];   // آرایه برای ذخیره اعداد اول
    int count = 0;     // تعداد اعداد اول

    for (int n = 1000; n <= 1100; n++) {
        bool isPrime = true;

        if (n <= 1)
            isPrime = false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes[count] = n;
            count++;
        }
    }

    // چاپ آرایه
    cout << "the numbers between 1000 and 1100" << endl;
    for (int i = 0; i < count; i++) {
        cout << primes[i] << " ";
    }

    return 0;
}
