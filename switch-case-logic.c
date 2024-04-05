#include <stdio.h>
#include <math.h>

int main() {
    double k, z, y, remainder;

    printf("შეიტანე k და z: ");
    scanf("%lf %lf", &k, &z); 

    remainder = fmod(k, z); 

    switch ((int)remainder) { 
        case 0:
            if (k + z < 5) {
                y = 2 * k;
            } else {
                y = pow(k, 2);
            }
            break;

        case 1:
            if (k + z < 5) {
                y = sin(k) * sin(k);
            } else {
                y = fabs(k - z); 
            }
            break;

        case 2:
            if (k + z == 5) {
                y = pow(sin(k), 3);
            } else {
                y = k * k + 2 * pow(z, 3);
            }
            break;

        default:
            y = z + 2 * pow(z, 2) + 3 * pow(z, 3) + 4 * pow(z, 4);
            break;
    }

    printf("y = %lf\n", y); 

    return 0;
}
