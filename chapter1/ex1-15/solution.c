#include <stdio.h>
// Function prototypes
float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_celsius(float fahrenheit);
float celsius_to_kelvin(float celsius);
float kelvin_to_celsius(float kelvin);
float fahrenheit_to_kelvin(float fahrenheit);
float kelvin_to_fahrenheit(float kelvin);
void display_menu(void);

int main() {
    int choice;
    float temperature, result;
    char continue_choice;
    
    printf("Temperature Conversion Program\n");
    printf("==============================\n\n");
    
    do {
        display_menu();
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                result = celsius_to_fahrenheit(temperature);
                printf("%.2f°C = %.2f°F\n\n", temperature, result);
                break;
                
            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                result = fahrenheit_to_celsius(temperature);
                printf("%.2f°F = %.2f°C\n\n", temperature, result);
                break;
                
            case 3:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                result = celsius_to_kelvin(temperature);
                printf("%.2f°C = %.2f K\n\n", temperature, result);
                break;
                
            case 4:
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &temperature);
                result = kelvin_to_celsius(temperature);
                printf("%.2f K = %.2f°C\n\n", temperature, result);
                break;
                
            case 5:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                result = fahrenheit_to_kelvin(temperature);
                printf("%.2f°F = %.2f K\n\n", temperature, result);
                break;
                
            case 6:
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &temperature);
                result = kelvin_to_fahrenheit(temperature);
                printf("%.2f K = %.2f°F\n\n", temperature, result);
                break;
                
            case 7:
                printf("Thank you for using the Temperature Conversion Program!\n");
                return 0;
                
            default:
                printf("Invalid choice! Please select a valid option.\n\n");
                continue;
        }
        
        // Ask user if they want to continue
        printf("Do you want to perform another conversion? (y/n): ");
        scanf(" %c", &continue_choice);
        printf("\n");
        
        if (continue_choice == 'n' || continue_choice == 'N') {
            printf("Thank you for using the Temperature Conversion Program!\n");
            break;
        }
        
    } while(continue_choice == 'y' || continue_choice == 'Y');
    
    return 0;
}

// Function to display the menu
void display_menu(void) {
    printf("Temperature Conversion Options:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("7. Exit\n");
}

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert Celsius to Kelvin
float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

// Function to convert Fahrenheit to Kelvin
float fahrenheit_to_kelvin(float fahrenheit) {
    float celsius = fahrenheit_to_celsius(fahrenheit);
    return celsius_to_kelvin(celsius);
}

// Function to convert Kelvin to Fahrenheit
float kelvin_to_fahrenheit(float kelvin) {
    float celsius = kelvin_to_celsius(kelvin);
    return celsius_to_fahrenheit(celsius);
}
