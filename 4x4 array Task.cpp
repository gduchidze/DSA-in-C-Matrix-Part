#include <iostream>
#include <climits>

void AssignValues(int size, int arr[][4]) {
    std::cout << "Enter Array Integers: " << std::endl;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> arr[i][j];
        }
    }
}

void SwapRowCol(int size, int arr[][4]) {
    int maxVal = INT_MIN;
    int maxRow, maxCol;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    for (int j = 0; j < 4; j++) {
        std::swap(arr[maxRow][j], arr[maxCol][j]);
    }
}

int main() {
    const int x = 4, y = 4;
    int a[x][y];

    AssignValues(x, a);

    SwapRowCol(x, a);

    std::cout << "Modified Array:" << std::endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}