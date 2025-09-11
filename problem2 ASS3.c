#include <stdio.h>

int main() {
    int m, n;

    // Prompt the user to enter an integer
    printf("Enter an integer value for m: ");
    scanf("%d", &m);

    // Determine the value of n based on m
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }

    // Display the result
    printf("The value of n is: %d\n", n);

    return 0;
}

