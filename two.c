#include<stdio.h>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9/5) - 459.67;
}

int main() {
    int choice;
    double temperature, converted;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    
    // Get the user's choice for conversion
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    // Get the input temperature from the user
    printf("Enter the temperature to convert: ");
    scanf("%lf", &temperature);

    // Perform the conversion based on user input
    switch(choice) {
        case 1:
            converted = celsiusToFahrenheit(temperature);
            printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, converted);
            break;
        case 2:
            converted = celsiusToKelvin(temperature);
            printf("%.2f Celsius = %.2f Kelvin\n", temperature, converted);
            break;
        case 3:
            converted = fahrenheitToCelsius(temperature);
            printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, converted);
            break;
        case 4:
            converted = fahrenheitToKelvin(temperature);
            printf("%.2f Fahrenheit = %.2f Kelvin\n", temperature, converted);
            break;
        case 5:
            converted = kelvinToCelsius(temperature);
            printf("%.2f Kelvin = %.2f Celsius\n", temperature, converted);
            break;
        case 6:
            converted = kelvinToFahrenheit(temperature);
            printf("%.2f Kelvin = %.2f Fahrenheit\n", temperature, converted);
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}
