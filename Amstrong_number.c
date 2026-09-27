/* Steps
find no. of digits
tekout each digit from number
add them */

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, n = 0, r = 0;

    printf("Enter Number : \n");
    scanf("%d", &a);

    b = a;

    // Count number of digits
    while (b != 0) {
        b /= 10;
        ++n;
    }

    // Reset b
    b = a;

    // Calculate sum of powers
    while (b != 0) {
        c = b % 10;
        r += pow(c, n);
        b /= 10;
    }

    if (a == r) {
        printf("This number is an Armstrong number");
    } else {
        printf("This number is not an Armstrong number");
    }

    return 0;
}
