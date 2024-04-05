#include <iostream>
using namespace std;

void addValues(int B[], int size) {
    cout << "Enter " << size << " integer values:\n";
    for (int i = 0; i < size; ++i) {
        cin >> B[i];
    }
}

int main() {
    const int SIZE = 10;
    int B[SIZE];
    addValues(B, SIZE);
    int odd_product = 1;
    int even_sum = 0;

    cout << "Array elements: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i += 2) {
        even_sum += B[i] * B[i];
    }

    cout << "Sum of squares at even indices: " << even_sum << endl;

    for (int i = 1; i < SIZE; i += 2) {
        odd_product *= B[i];
    }

    cout << "Product of elements at odd indices: " << odd_product << endl;

    return 0;
}

