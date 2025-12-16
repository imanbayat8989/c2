#include <iostream>
using namespace std;

int main() {
    int arr[10] = {25, 12, 7, 40, 3, 18, 9, 30, 5, 22};

    int min = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "min of the array " << min << endl;

    return 0;
}
