#include <stdio.h>

int main() {
    int choice, subchoice;
    float input, output;

    while(1) {
        printf("\n==============================\n");
        printf("         UNIT CONVERTER       \n");
        printf("==============================\n");
        printf("1. Length Converter\n");
        printf("2. Temperature Converter\n");
        printf("3. Weight Converter\n");
        printf("4. Volume Converter\n");
        printf("5. Area Converter\n");
        printf("6. Time Converter\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            // LENGTH CONVERTER
            case 1:
                printf("\n--- Length Converter ---\n");
                printf("1. Kilometer to Meter\n");
                printf("2. Meter to Kilometer\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                if(subchoice == 1) {
                    printf("Enter value in Kilometer: ");
                    scanf("%f", &input);
                    output = input * 1000;
                    printf("Value in Meter = %.2f\n", output);
                }
                else if(subchoice == 2) {
                    printf("Enter value in Meter: ");
                    scanf("%f", &input);
                    output = input / 1000;
                    printf("Value in Kilometer = %.2f\n", output);
                }
                else {
                    printf("Invalid Choice!\n");
                }
                break;

            // TEMPERATURE CONVERTER
            case 2:
                printf("\n--- Temperature Converter ---\n");
                printf("1. Celsius to Fahrenheit\n");
                printf("2. Fahrenheit to Celsius\n");
                printf("3. Celsius to Kelvin\n");
                printf("4. Kelvin to Celsius\n");
                printf("5. Fahrenheit to Kelvin\n");
                printf("6. Kelvin to Fahrenheit\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                if(subchoice == 1) {
                    printf("Enter temperature in Celsius: ");
                    scanf("%f", &input);
                    output = (input * 9/5) + 32;
                    printf("Temperature in Fahrenheit = %.2f\n", output);
                }
                else if(subchoice == 2) {
                    printf("Enter temperature in Fahrenheit: ");
                    scanf("%f", &input);
                    output = (input - 32) * 5/9;
                    printf("Temperature in Celsius = %.2f\n", output);
                }
                else if(subchoice == 3) {
                    printf("Enter temperature in Celsius: ");
                    scanf("%f", &input);
                    output = input + 273.15;
                    printf("Temperature in Kelvin = %.2f\n", output);
                }
                else if(subchoice == 4) {
                    printf("Enter temperature in Kelvin: ");
                    scanf("%f", &input);
                    output = input - 273.15;
                    printf("Temperature in Celsius = %.2f\n", output);
                }
                else if(subchoice == 5) {
                    printf("Enter temperature in Fahrenheit: ");
                    scanf("%f", &input);
                    output = (input - 32) * 5/9 + 273.15;
                    printf("Temperature in Kelvin = %.2f\n", output);
                }
                else if(subchoice == 6) {
                    printf("Enter temperature in Kelvin: ");
                    scanf("%f", &input);
                    output = (input - 273.15) * 9/5 + 32;
                    printf("Temperature in Fahrenheit = %.2f\n", output);
                }
                else {
                    printf("Invalid Choice!\n");
                }
                break;

            // WEIGHT CONVERTER
            case 3:
                printf("\n--- Weight Converter ---\n");
                printf("1. Kilogram to Gram\n");
                printf("2. Gram to Kilogram\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                if(subchoice == 1) {
                    printf("Enter weight in Kilogram: ");
                    scanf("%f", &input);
                    output = input * 1000;
                    printf("Weight in Gram = %.2f\n", output);
                }
                else if(subchoice == 2) {
                    printf("Enter weight in Gram: ");
                    scanf("%f", &input);
                    output = input / 1000;
                    printf("Weight in Kilogram = %.2f\n", output);
                }
                else {
                    printf("Invalid Choice!\n");
                }
                break;

            // VOLUME CONVERTER
            case 4:
                printf("\n--- Volume Converter ---\n");
                printf("1. Liter to Milliliter\n");
                printf("2. Milliliter to Liter\n");
                printf("3. Cubic Meter to Liter\n");
                printf("4. Liter to Cubic Meter\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                if(subchoice == 1) {
                    printf("Enter value in Liter: ");
                    scanf("%f", &input);
                    output = input * 1000;
                    printf("Value in Milliliter = %.2f\n", output);
                }
                else if(subchoice == 2) {
                    printf("Enter value in Milliliter: ");
                    scanf("%f", &input);
                    output = input / 1000;
                    printf("Value in Liter = %.2f\n", output);
                }
                else if(subchoice == 3) {
                    printf("Enter value in Cubic Meter: ");
                    scanf("%f", &input);
                    output = input * 1000;
                    printf("Value in Liter = %.2f\n", output);
                }
                else if(subchoice == 4) {
                    printf("Enter value in Liter: ");
                    scanf("%f", &input);
                    output = input / 1000;
                    printf("Value in Cubic Meter = %.6f\n", output);
                }
                else {
                    printf("Invalid Choice!\n");
                }
                break;

            // AREA CONVERTER
            case 5:
                printf("\n--- Area Converter ---\n");
                printf("1. Square Meter to Square Kilometer\n");
                printf("2. Square Kilometer to Square Meter\n");
                printf("3. Square Meter to Square Centimeter\n");
                printf("4. Square Centimeter to Square Meter\n");
                printf("5. Hectare to Square Meter\n");
                printf("6. Square Meter to Hectare\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                if(subchoice == 1) {
                    printf("Enter value in Square Meter: ");
                    scanf("%f", &input);
                    output = input / 1000000;
                    printf("Value in Square Kilometer = %.6f\n", output);
                }
                else if(subchoice == 2) {
                    printf("Enter value in Square Kilometer: ");
                    scanf("%f", &input);
                    output = input * 1000000;
                    printf("Value in Square Meter = %.2f\n", output);
                }
                else if(subchoice == 3) {
                    printf("Enter value in Square Meter: ");
                    scanf("%f", &input);
                    output = input * 10000;
                    printf("Value in Square Centimeter = %.2f\n", output);
                }
                else if(subchoice == 4) {
                    printf("Enter value in Square Centimeter: ");
                    scanf("%f", &input);
                    output = input / 10000;
                    printf("Value in Square Meter = %.6f\n", output);
                }
                else if(subchoice == 5) {
                    printf("Enter value in Hectare: ");
                    scanf("%f", &input);
                    output = input * 10000;
                    printf("Value in Square Meter = %.2f\n", output);
                }
                else if(subchoice == 6) {
                    printf("Enter value in Square Meter: ");
                    scanf("%f", &input);
                    output = input / 10000;
                    printf("Value in Hectare = %.6f\n", output);
                }
                else {
                    printf("Invalid Choice!\n");
                }
                break;

            // TIME CONVERTER
            case 6:
                printf("\n--- Time Converter ---\n");
                printf("1. Seconds to Minutes\n");
                printf("2. Minutes to Seconds\n");
                printf("3. Minutes to Hours\n");
                printf("4. Hours to Minutes\n");
                printf("5. Hours to Days\n");
                printf("6. Days to Hours\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                if(subchoice == 1) {
                    printf("Enter value in Seconds: ");
                    scanf("%f", &input);
                    output = input / 60;
                    printf("Value in Minutes = %.2f\n", output);
                }
                else if(subchoice == 2) {
                    printf("Enter value in Minutes: ");
                    scanf("%f", &input);
                    output = input * 60;
                    printf("Value in Seconds = %.2f\n", output);
                }
                else if(subchoice == 3) {
                    printf("Enter value in Minutes: ");
                    scanf("%f", &input);
                    output = input / 60;
                    printf("Value in Hours = %.2f\n", output);
                }
                else if(subchoice == 4) {
                    printf("Enter value in Hours: ");
                    scanf("%f", &input);
                    output = input * 60;
                    printf("Value in Minutes = %.2f\n", output);
                }
                else if(subchoice == 5) {
                    printf("Enter value in Hours: ");
                    scanf("%f", &input);
                    output = input / 24;
                    printf("Value in Days = %.2f\n", output);
                }
                else if(subchoice == 6) {
                    printf("Enter value in Days: ");
                    scanf("%f", &input);
                    output = input * 24;
                    printf("Value in Hours = %.2f\n", output);
                }
                else {
                    printf("Invalid Choice!\n");
                }
                break;

            // EXIT
            case 7:
                printf("\nThank you for using Unit Converter!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

