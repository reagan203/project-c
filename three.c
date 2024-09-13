#include<stdio.h>
#include<math.h>

unsigned int number;

int main(){
    printf("please enter a positive number: ");
    scanf("%u", &number);

    // carry out factorial calculations
     unsigned long long int factorial = 1; // Declare the factorial variable here

    // Carry out factorial calculation
    for (unsigned int i = 1; i <= number; i++) {
        factorial *= i; // Multiply factorial by the current value of i
        printf("%u! = %llu\n", i, factorial); // Print the factorial for each i
    }

    return 0;
}