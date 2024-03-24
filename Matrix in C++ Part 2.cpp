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

    int main_diagonal_sum = 0;
    int sec_diagonal_multiple = 1;
    int maximum_integer = -31;
    int minimum_integer = 70;  
    int index_row = 0; 
    int index_column = 0; 
    int six_divide_count = 0;
    int positive_sum = 0;
    int four_divide = 0;
    int more_twenty = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (j == i) { // მთავარ დიაგონალზე დგას ისეთი ელემენტები რომელთა სვეტების და სტრიქონების ინდექსები ტოლია ამიტომ
                main_diagonal_sum += arr[i][j];

                if (arr[i][j] < minimum_integer) {
                    minimum_integer = arr[i][j];
                }
                else if (arr[i][j] % 6 == 0){
                    six_divide_count++;
                }
            
            
                
            } else if (i + j == row - 1) {
                sec_diagonal_multiple *= arr[i][j];
                if (arr[i][j] > maximum_integer) {
                    maximum_integer = arr[i][j];
                    index_row = i;
                    index_column = j;
                }
                
                else if (arr[i][j] > 0){
                    
                    positive_sum += arr[i][j];
                }
                
            }
            
            if (arr[i][j] % 4 == 0){
                four_divide++;
            }
            
            else if (arr[i][j] > 20){
                more_twenty++;
            }
        }
    }

    cout << "Main diagonal sum in the Matrix: " << main_diagonal_sum << "\n";
    cout << "non Main diagonal multiple in the Matrix: " << sec_diagonal_multiple << "\n";
    cout << " main  diagonal min integer in the Matrix: " << minimum_integer << "\n";
    cout << " non main  diagonal max integer index in the Matrix: [" << index_row << "][" << index_column << "]\n";
    cout << "Main diagonal Six devide count in the Matrix: " << six_divide_count << "\n";
    cout << "non Main diagonal positive integers sum in the Matrix: " << positive_sum << "\n";
    cout << "four devide count in the Matrix: " << four_divide << "\n";
    cout << "more than 20 count in the Matrix: " << more_twenty << "\n";


    return 0;
}

