#include <stdio.h>
#include <string.h>

int main() {
    // === Dados fixos das duas cartas ===
    char nome1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1847.0;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000.0;
    float pib2 = 487.0;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    // === Menu: escolha de dois atributos diferentes ===
    int escolha1, escolha2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // Função para exibir o menu
    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n\n");
    printf("Escolha o 1º atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite o número do 1º atributo: ");
    scanf("%d", &escolha1);

    // Verifica se a escolha 1 é válida
    if (escolha1 < 1 || escolha1 > 5) {
        printf("Opção inválida. Encerrando programa.\n");
        return 1;
    }

    // Exibe o menu sem repetir o atributo já escolhido
    printf("\nEscolha o 2º atributo para comparação:\n");
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos turísticos\n"); break;
                case 5: printf("5 - Densidade demográfica\n"); break;
            }
        }
    }
    printf("Digite o número do 2º atributo: ");
    scanf("%d", &escolha2);

    // Verifica se a escolha 2 é válida e diferente da 1
    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Opção inválida ou repetida. Encerrando programa.\n");
        return 1;
    }

    // === Determina os valores dos atributos escolhidos ===

    // Primeira escolha
    switch (escolha1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;
        default:
            printf("Erro inesperado.\n");
            return 1;
    }

    // Segunda escolha
    switch (escolha2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;
        default:
            printf("Erro inesperado.\n");
            return 1;
    }

    // === Cálculo da soma dos dois atributos ===
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // === Exibição dos dados ===
    printf("\n--- Resultado da Comparação ---\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n", nome2);

    // Mostrar os valores usados
    printf("\nAtributo 1 (%d): %s = %.2f | %s = %.2f\n",
        escolha1, nome1, valor1_carta1, nome2, valor1_carta2);
    printf("Atributo 2 (%d): %s = %.2f | %s = %.2f\n",
        escolha2, nome1, valor2_carta1, nome2, valor2_carta2);

    printf("\nSoma dos dois atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // === Lógica de comparação: considerar inversão para densidade ===
    int carta1_vitorias = 0;
    int carta2_vitorias = 0;

    // Atributo 1
    if (escolha1 == 5) { // densidade: menor vence
        valor1_carta1 < valor1_carta2 ? carta1_vitorias++ :
        (valor1_carta2 < valor1_carta1 ? carta2_vitorias++ : 0);
    } else {
        valor1_carta1 > valor1_carta2 ? carta1_vitorias++ :
        (valor1_carta2 > valor1_carta1 ? carta2_vitorias++ : 0);
    }

    // Atributo 2
    if (escolha2 == 5) { // densidade: menor vence
        valor2_carta1 < valor2_carta2 ? carta1_vitorias++ :
        (valor2_carta2 < valor2_carta1 ? carta2_vitorias++ : 0);
    } else {
        valor2_carta1 > valor2_carta2 ? carta1_vitorias++ :
        (valor2_carta2 > valor2_carta1 ? carta2_vitorias++ : 0);
    }

    // === Resultado final ===
    printf("\n--- Resultado Final ---\n");
    if (soma1 > soma2) {
        printf("Vencedor: %s (maior soma de atributos)\n", nome1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s (maior soma de atributos)\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}




