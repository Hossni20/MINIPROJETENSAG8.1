#include <stdio.h>

// Fonctions de conversion vers et depuis les mètres
float metersToCentimeters(float meters) {
    return meters * 100;
}

float metersToKilometers(float meters) {
    return meters / 1000;
}

float metersToInches(float meters) {
    return meters * 39.3701;
}

float metersToFeet(float meters) {
    return meters * 3.28084;
}

float metersToYards(float meters) {
    return meters * 1.09361;
}

float centimetersToMeters(float centimeters) {
    return centimeters / 100;
}

float kilometersToMeters(float kilometers) {
    return kilometers * 1000;
}

float inchesToMeters(float inches) {
    return inches / 39.3701;
}

float feetToMeters(float feet) {
    return feet / 3.28084;
}

float yardsToMeters(float yards) {
    return yards / 1.09361;
}

int main() {
    int sourceUnit, targetUnit;
    float inputHeight, result;
    char repeat;

    do {
        // Afficher les unités disponibles
        printf("Unites disponibles:\n");
        printf("1. Mètres (m)\n");
        printf("2. Centimètres (cm)\n");
        printf("3. Kilomètres (km)\n");
        printf("4. Pouces (in)\n");
        printf("5. Pieds (ft)\n");
        printf("6. Yards (yd)\n");

        // Choisir l'unité source
        printf("Choisissez l'unité source (1-6): ");
        scanf("%d", &sourceUnit);

        // Choisir l'unité cible
        printf("Choisissez l'unité cible (1-6): ");
        scanf("%d", &targetUnit);

        // Demander la hauteur à convertir
        printf("Entrez la hauteur: ");
        scanf("%f", &inputHeight);

        // Convertir l'entrée vers les mètres
        switch (sourceUnit) {
            case 1: // Mètres
                break;
            case 2: // Centimètres
                inputHeight = centimetersToMeters(inputHeight);
                break;
            case 3: // Kilomètres
                inputHeight = kilometersToMeters(inputHeight);
                break;
            case 4: // Pouces
                inputHeight = inchesToMeters(inputHeight);
                break;
            case 5: // Pieds
                inputHeight = feetToMeters(inputHeight);
                break;
            case 6: // Yards
                inputHeight = yardsToMeters(inputHeight);
                break;
            default:
                printf("Unité source invalide.\n");
                return 1;
        }

        // Convertir vers l'unité cible
        switch (targetUnit) {
            case 1: // Mètres
                result = inputHeight;
                break;
            case 2: // Centimètres
                result = metersToCentimeters(inputHeight);
                break;
            case 3: // Kilomètres
                result = metersToKilometers(inputHeight);
                break;
            case 4: // Pouces
                result = metersToInches(inputHeight);
                break;
            case 5: // Pieds
                result = metersToFeet(inputHeight);
                break;
            case 6: // Yards
                result = metersToYards(inputHeight);
                break;
            default:
                printf("Unité cible invalide.\n");
                return 1;
        }

        // Afficher le résultat
        printf("%.3f ", inputHeight);
        switch (sourceUnit) {
            case 1: printf("m"); break;
            case 2: printf("cm"); break;
            case 3: printf("km"); break;
            case 4: printf("in"); break;
            case 5: printf("ft"); break;
            case 6: printf("yd"); break;
        }
        printf(" = %.3f ", result);
        switch (targetUnit) {
            case 1: printf("m\n"); break;
            case 2: printf("cm\n"); break;
            case 3: printf("km\n"); break;
            case 4: printf("in\n"); break;
            case 5: printf("ft\n"); break;
            case 6: printf("yd\n"); break;
        }

        // Demander si l'utilisateur veut faire une autre conversion
        printf("\nSouhaitez-vous faire une autre conversion ? (o/n): ");
        scanf(" %c", &repeat); // Le ' ' avant %c est nécessaire pour capturer les retours à la ligne laissés par les entrées précédentes

    } while (repeat == 'o' || repeat == 'O'); // Si l'utilisateur tape 'o' ou 'O', le programme recommence

    printf("Merci d'avoir utilisé le convertisseur !\n");
    return 0;
}




// Input height needs some change it converts to meters and leave it there without returning to the OG