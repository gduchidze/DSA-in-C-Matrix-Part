#include <stdio.h>

int main() {
    int A[5][5];
    
    printf("შეიყვანე:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int sum_diag = 0;
    int p_negatives = 1;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < j) {
                sum_diag += A[i][j];
            }
            if (i > j && A[i][j] < 0) {
                p_negatives *= A[i][j];
            }
        }
    }
    
    printf("მატრიც1:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    if (sum_diag > 0 && p_negatives > 0) {
        
        for (int i = 0; i < 5; i++) {
            A[i][4] = A[i][4] * A[i][4] * A[i][4];
        }
    }
    
    printf("\nსაბოლოო მატრიცა:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

