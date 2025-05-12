#include <stdio.h>

int main() {
// Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

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

     // Cálculo dos novos atributos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
   
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

    // Cálculo dos novos atributos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição dos dados
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2 ? 1 : 0);  // menor vence
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: %d\n", superPoder1 > superPoder2 ? 1 : 0);

    // (Opcional) Mostrar os valores calculados
    printf("\n--- Super Poder e Atributos Calculados ---\n");
    printf("Carta 1 - Densidade: %.2f, PIB per Capita: %.2f, Super Poder: %.2f\n", densidade1, pibPerCapita1, superPoder1);
    printf("Carta 2 - Densidade: %.2f, PIB per Capita: %.2f, Super Poder: %.2f\n", densidade2, pibPerCapita2, superPoder2);

    return 0;
}
