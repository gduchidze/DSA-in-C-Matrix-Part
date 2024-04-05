#include <iostream>

using namespace std;

void addValues(int (&A)[], int size) {
    cout << "Enter " << size << " integer values:\n";
    for (int i = 0; i < size; ++i) {
        cin >> A[i]; 
    } 
}

int main()
{
    const int SIZE = 10;
    int A[SIZE];
    addValues(A, SIZE);
    int even_product = 1;
    float odd_average = 0; 
    int count_odd = 0; 
    
    cout << "Array elements: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << A[i] << " ";
        
    }
    cout << endl;
    
    
    for (int i = 0; i < SIZE; i += 2) {  
        even_product *= A[i];
    }
    
    cout << "Product of elements at even indices: " << even_product << endl;
    
    for (int i = 1; i < SIZE; i += 2){ 
        count_odd++;
        odd_average += A[i];            
    }
    
    if (count_odd != 0) {
        odd_average /= count_odd; 
        cout << "Average of elements at odd indices: " << odd_average << endl;
    } else {
        cout << "No odd elements found." << endl;
    }

    
    return 0;
}

