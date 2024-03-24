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
	
	int max_number = arr[0][0]; //მასივის პირველი ელემენტი ავღნიშნეთ ცვლადით
	int sum = 0;
	int multiple = 1;
	int positive_sum = 0;
	int negative_count = 0;
	int odd_sum = 0; 
	int non_zero_multiple = 1;
	int zero_count = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (max_number < arr[i][j]) {
				max_number = arr[i][j]; //იპოვე მაქსიმალური ელემენტი
			}
			sum += arr[i][j]; //ჯამი
			multiple *= arr[i][j]; //ყველა ელემენტის ნამრავლი
			if (arr[i][j] > 0){
			    positive_sum +=  arr[i][j];
			}
			
			else if (arr[i][j] < 0 ){
			    negative_count++;
			}
			
			if (arr[i][j] % 2 == 1) { 
                odd_sum += arr[i][j]; 
            }
            
            else if (arr[i][j] != 0){
                non_zero_multiple *= arr[i][j];
            }
            if (arr[i][j] == 0){
                zero_count++;
            }
            
            
			
		}

	}
	
	
	cout << "Max Number in the Matrix: " << max_number << "\n";
    cout << "Sum of all elements in the matrix: " << sum << "\n";
    cout << "Multiple of all elements in the matrix: " << multiple << "\n";
    cout << "Positive Sum of all elements in the matrix: " << positive_sum << "\n";
    cout << "Negative count of all elements in the matrix: " << negative_count << "\n";
    cout << "Odd sum of all elements in the matrix: " << odd_sum << "\n";
    cout << "Non Zero Multiple of all elements in the matrix: " << non_zero_multiple << "\n";
    cout << "Zeroes count of all elements in the matrix: " << zero_count << "\n";
    return 0;
		
}
