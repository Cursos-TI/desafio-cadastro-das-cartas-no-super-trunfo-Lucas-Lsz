#include <stdio.h>
// Carta 1
char estado1;
char codigo1[5];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

// Carta 2
char estado2;
char codigo2[5];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

int main() {

 // Entrada Carta 1
    printf(">> Digite as informações da Carta 1 <<\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c limpa o buffer de entrada

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade (sem espaços): ");
    scanf(" %s", cidade1);  // O nome da cidade não pode ter espaços

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de R$): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada Carta 2
    printf("\n>> Digite as informações da Carta 2 <<\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  // O espaço antes de %c limpa o buffer de entrada

    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade (sem espaços): ");
    scanf(" %s", cidade2);  // O nome da cidade não pode ter espaços

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de R$): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Exibição
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
