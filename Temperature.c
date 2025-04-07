#include <stdio.h>
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
int main() {
    int sourceUnit, targetUnit;
    float inputTemp, result;
    char repeat;

    do {
        
        printf("Unites de temperature disponibles:\n");
        printf("1. Celsius (°C)\n");
        printf("2. Fahrenheit (°F)\n");

        
        printf("Choisissez l'unité source (1-2): ");
        scanf("%d", &sourceUnit);

        
        printf("Choisissez l'unité cible (1-2): ");
        scanf("%d", &targetUnit);

        
        printf("Entrez la température: ");
        scanf("%f", &inputTemp);

      
        if (sourceUnit == 1 && targetUnit == 2) {
            result = celsiusToFahrenheit(inputTemp);
        } else if (sourceUnit == 2 && targetUnit == 1) {
            result = fahrenheitToCelsius(inputTemp);
        } else if (sourceUnit == targetUnit) {
            result = inputTemp;  
        } else {
            printf("Choix d'unité invalide.\n");
            return 1;
        }

      
        printf("%.2f ", inputTemp);
        if (sourceUnit == 1) {
            printf("°C");
        } else {
            printf("°F");
        }
        printf(" = %.2f ", result);
        if (targetUnit == 1) {
            printf("°C\n");
        } else {
            printf("°F\n");
        }

        
        printf("\nSouhaitez-vous faire une autre conversion ? (o/n): ");
        scanf(" %c", &repeat); 

    } while (repeat == 'o' || repeat == 'O'); 

    printf("Merci d'avoir utilisé le convertisseur de température !\n");
    return 0;
}
