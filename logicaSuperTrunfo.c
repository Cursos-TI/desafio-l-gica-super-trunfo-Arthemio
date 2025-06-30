#include <stdio.h>
#include <string.h>

int main() {
    // === DADOS DA CARTA 1 ===
    char nome1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1847.0;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    // === DADOS DA CARTA 2 ===
    char nome2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000.0;
    float pib2 = 487.0;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    // === MENU INTERATIVO ===
    int escolha;

    printf("=== SUPER TRUNFO: COMPARAÇÃO ENTRE CARTAS ===\n\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nDigite o número da opção: ");
    scanf("%d", &escolha);

    printf("\n--- Comparação ---\n");

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, selecione um número de 1 a 5.\n");
            break;
    }

    return 0;
}



