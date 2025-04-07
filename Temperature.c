#include <stdio.h>

// Fonctions de conversion entre Celsius et Fahrenheit
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
        // Afficher les unités disponibles
        printf("Unites de temperature disponibles:\n");
        printf("1. Celsius (°C)\n");
        printf("2. Fahrenheit (°F)\n");

        // Choisir l'unité source
        printf("Choisissez l'unité source (1-2): ");
        scanf("%d", &sourceUnit);

        // Choisir l'unité cible
        printf("Choisissez l'unité cible (1-2): ");
        scanf("%d", &targetUnit);

        // Demander la température à convertir
        printf("Entrez la température: ");
        scanf("%f", &inputTemp);

        // Convertir l'entrée vers l'unité cible
        if (sourceUnit == 1 && targetUnit == 2) {
            result = celsiusToFahrenheit(inputTemp);
        } else if (sourceUnit == 2 && targetUnit == 1) {
            result = fahrenheitToCelsius(inputTemp);
        } else if (sourceUnit == targetUnit) {
            result = inputTemp;  // Si l'unité source et cible sont identiques
        } else {
            printf("Choix d'unité invalide.\n");
            return 1;
        }

        // Afficher le résultat
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

        // Demander si l'utilisateur veut faire une autre conversion
        printf("\nSouhaitez-vous faire une autre conversion ? (o/n): ");
        scanf(" %c", &repeat); // Le ' ' avant %c est nécessaire pour capturer les retours à la ligne laissés par les entrées précédentes

    } while (repeat == 'o' || repeat == 'O'); // Si l'utilisateur tape 'o' ou 'O', le programme recommence

    printf("Merci d'avoir utilisé le convertisseur de température !\n");
    return 0;
}
