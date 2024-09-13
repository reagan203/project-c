#include<stdio.h>
#include<math.h>

// Global variables to store two numbers and the mathematical symbol
double num1;
double num2;
char symbol;

int main (){
    // Prompting the user to input the first number
    printf("please input the first digit:");
    // Reading the first number (double) from user input
    scanf("%lf",&num1);
    
    // Prompting the user to input the second number
    printf("please input the second digit:");
    // Reading the second number (double) from user input
    scanf("%lf",&num2);
    
    // Prompting the user to input the desired operation symbol (+, -, *, /)
    printf("please input the operation (+,-,*,/):");
    // Reading the operation symbol (character) from user input
    scanf(" %c",&symbol); // Note: The space before %c is important to ignore any leftover newline character from previous input

    // Checking if the user inputted '+' for addition
    if(symbol == '+') {
        // Output the sum of num1 and num2, formatted to 2 decimal places
        printf("%.2f + %.2f = %.2f\n",num1,num2,num1+num2);
    }
    // Checking if the user inputted '-' for subtraction
    else if(symbol == '-') {
        // Output the result of num1 minus num2
        printf("%.2f - %.2f = %.2f\n",num1,num2,num1-num2);
    }
    // Checking if the user inputted '*' for multiplication
    else if(symbol == '*') {
        // Output the result of num1 times num2
        printf("%.2f * %.2f = %.2f\n",num1,num2,num1*num2);
    }
    // Checking if the user inputted '/' for division
    else if(symbol == '/') {
        // Output the result of num1 divided by num2
        printf("%.2f / %.2f = %.2f\n",num1,num2, num1/num2);
    }
    // If the input operation symbol is invalid, print an error message
    else {
        printf("Invalid operation.\n");
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
