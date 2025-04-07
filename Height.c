#include <stdio.h>
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

        printf("Unites disponibles:\n");
        printf("1. Mètres (m)\n");
        printf("2. Centimètres (cm)\n");
        printf("3. Kilomètres (km)\n");
        printf("4. Pouces (in)\n");
        printf("5. Pieds (ft)\n");
        printf("6. Yards (yd)\n");

        printf("Choisissez l'unité source (1-6): ");
        scanf("%d", &sourceUnit);

        printf("Choisissez l'unité cible (1-6): ");
        scanf("%d", &targetUnit);

        printf("Entrez la hauteur: ");
        scanf("%f", &inputHeight);

        
        switch (sourceUnit) {
            case 1: 
                break;
            case 2: 
                inputHeight = centimetersToMeters(inputHeight);
                break;
            case 3: 
                inputHeight = kilometersToMeters(inputHeight);
                break;
            case 4: 
                inputHeight = inchesToMeters(inputHeight);
                break;
            case 5: 
                inputHeight = feetToMeters(inputHeight);
                break;
            case 6: 
                inputHeight = yardsToMeters(inputHeight);
                break;
            default:
                printf("Unité source invalide.\n");
                return 1;
        }

        
        switch (targetUnit) {
            case 1: 
                result = inputHeight;
                break;
            case 2: 
                result = metersToCentimeters(inputHeight);
                break;
            case 3: 
                result = metersToKilometers(inputHeight);
                break;
            case 4: 
                result = metersToInches(inputHeight);
                break;
            case 5: 
                result = metersToFeet(inputHeight);
                break;
            case 6: 
                result = metersToYards(inputHeight);
                break;
            default:
                printf("Unité cible invalide.\n");
                return 1;
        }

    
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

        printf("\nSouhaitez-vous faire une autre conversion ? (o/n): ");
        scanf(" %c", &repeat); 

    } while (repeat == 'o' || repeat == 'O'); 

    printf("Merci d'avoir utilisé le convertisseur !\n");
    return 0;
}




// Input height needs some change it converts to meters and leave it there without returning to the OG