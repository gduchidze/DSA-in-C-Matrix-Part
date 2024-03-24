#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    const int row = 5, column = 5;
    int arr[row][column];
    srand(time(NULL));
    cout << "Array: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr[i][j] = rand() % 100 - 30; //რიცხვები დაგენერირდება -30 დან 69 -ს ჩათვლით
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    
    int M[25];
    int B[25];
    int F[25];
    int C[5] = {0}; 
    int D[5] = {1}; 
    int E[5] = {0};
    int count = 0;
    int even_count = 0;
    int non_zero = 0;

    for (int i = 0; i < row; i++) {
        int x = 1;
        for (int j = 0; j < column; j++) {
            if (arr[i][j] < 20) {
                M[count] = arr[i][j];
                count++;
            }
            
            if (arr[i][j] != 0){
                F[non_zero] = arr[i][j];
                non_zero++;
            }
            
            if (arr[i][j] % 2 == 0){
                B[even_count] = arr[i][j];
                even_count++;
            }
            
            
            if (arr[i][j] > 0) {
                E[j]++; 
            }
            
            C[j] += arr[i][j];
            
            x *= arr[i][j];
        }
        
        D[i] = x;
        
        
    }
    

    cout << "Array M more than 20 : " << endl;
    for (int i = 0; i < count; i++) {
        cout << M[i] << "\t";
    }
    cout << endl;
    
    cout << "Array F (Non-zero): " << endl;
    for (int i = 0; i < non_zero; i++) {
        cout << F[i] << "\t";
    }
    cout << endl;
    
    cout << "Array B (Even): " << endl;
    for (int i = 0; i < even_count; i++) {
        cout << B[i] << "\t";
    }
    cout << endl;
    
    cout << "Array C5 columns multiple each columns : " << endl;
    for (int i = 0; i < column; i++) {
        cout << C[i] << "\t";
    }
    cout << endl;
    
    cout << "Array D5 rows multiple each rows  : " << endl;
    for (int i = 0; i < row; i++) {
        cout << D[i] << "\t";
    }
    cout << endl;
    
    cout << "Array E5 Number of positive elements in each column: " << endl;
    for (int i = 0; i < column; i++) {
        cout << E[i] << "\t";
    }
    cout << endl;

    return 0;
}
