#include <stdio.h>
#include <math.h>

int main() {
    int prime;
    printf("Please enter a number: ");
    scanf("%d", &prime);

    if (prime <= 1) {
        printf("%d is not a prime number since it is lass than 1\n", prime);
    } else {
        int isPrime = 1; // Flag to check if the number is prime
        for (int i = 2; i <= sqrt(prime); i++) {
            if (prime % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
        if (isPrime) {
            printf("%d is a prime number\n", prime);
        } else {
            printf("%d is not a prime number\n", prime);
        }
    }

    return 0;
}
