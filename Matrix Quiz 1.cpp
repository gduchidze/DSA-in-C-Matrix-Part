#include <iostream>

using namespace std;

/* void AssignValues(int arr[], int size) {
    cout << "Enter Elements of " << size << " Array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void Histogram(int arr[], int size) {
    cout << "Histogram: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ": ";
        for (int j = 0; j < arr[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int LinearSearch(int arr[], int key, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[10];
    AssignValues(a, 10);
    Histogram(a, 10);

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;
    int index = LinearSearch(a, key, 10); // Pass array 'a' and its size (10)
    if (index == -1) {
        cout << "Element not found in the array." << endl;
    }
    else {
        cout << "Element found at index " << index << endl;
    }

    return 0;
}
*/




/*
void AssignValues(int arr[], int size) {
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void ArrayPositiveSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    double devtwo = double(sum) / 2;
    cout << "Sum of positive numbers and then divided by two is " << devtwo << endl;
}

void NegativeNumbers(int arr[], int size) {
    int sum = 0;
    double count = 0, average;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count != 0) {
        average = sum / count;
        cout << "Average of negative numbers is " << average << endl;
    }
    else {
        cout << "No negative numbers found in the array." << endl;
    }
}

int main() {
    const int size = 10;
    int a[size];

    AssignValues(a, size);
    ArrayPositiveSum(a, size);
    NegativeNumbers(a, size);

    return 0;
}


*/

/*

void AssignValues(int arr[], int size) {
    cout << "Enter array " << size << "elements" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void findMax(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    cout << "Largest Element in array is" << arr[0] << endl;

}

int main() {
    int const size = 10;
    int a[size];
    int b[size];

    AssignValues(a, size);
    AssignValues(b, size);

    findMax(a, 10);
    findMax(b, 10);

    int max_a = a[0];
    int max_b = b[0];
    if (max_a > max_b) {
        cout << "Minimum largest Element is " << max_b << endl;
    }
    else {
        cout << "Minimum largest Element is " << max_a << endl;

    }
    


    return 0;
}
*/





