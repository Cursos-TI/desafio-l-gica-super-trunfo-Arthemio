#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    // ===== Declaração das variáveis para a Carta 1 =====
    char estado1;                  // Estado da cidade (ex: A, B, C)
    char codigo1[4];               // Código da carta (ex: A01)
    char nomeCidade1[50];         // Nome da cidade
    int populacao1;               // População da cidade
    float area1;                  // Área da cidade (em km²)
    float pib1;                   // PIB da cidade (em bilhões)
    int pontosTuristicos1;        // Número de pontos turísticos
    float densidade1;             // Densidade populacional (hab/km²)
    float pibPerCapita1;          // PIB per capita (reais por habitante)

    // ===== Declaração das variáveis para a Carta 2 =====
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // ===== Cadastro da Carta 1 =====
    printf("Cadastro da Carta 1:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);  // Espaço antes do %c evita problemas de leitura
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // Lê texto com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Cálculo da densidade populacional e PIB per capita da Carta 1 =====
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // ===== Cadastro da Carta 2 =====
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculo da densidade populacional e PIB per capita da Carta 2 =====
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===== Exibição dos dados da Carta 1 =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // ===== Exibição dos dados da Carta 2 =====
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0; // Fim do programa
}

