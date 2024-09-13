#include <stdio.h>

#define NAME_LENGTH 50

// Define array sizes
char name[NAME_LENGTH];
unsigned int age;
float height;
char gender;
float weight;
float bmi;

int main() {
    // Input data
    printf("Enter your name: ");
    scanf("%49s", name); // Limit input to avoid overflow

    printf("Enter your age: ");
    scanf("%u", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    // Use char for gender and handle whitespace before input
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter your weight (in kilograms): ");
    scanf("%f", &weight);

    // Calculate BMI
    if (height <= 0) {
        printf("Height must be greater than zero.\n");
        return 1; // Exit with an error code
    }

    bmi = weight / (height * height);

    // Output BMI category
    if (bmi < 18.5) {
        printf("%s, your BMI is %.2f, you are underweight.\n", name, bmi);
    } else if (bmi < 24.9) {
        printf("%s, your BMI is %.2f, you have a normal weight.\n", name, bmi);
    } else if (bmi < 29.9) {
        printf("%s, your BMI is %.2f, you are overweight.\n", name, bmi);
    } else {
        printf("%s, your BMI is %.2f, you are obese.\n", name, bmi);
    }

    return 0;
}
