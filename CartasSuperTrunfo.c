#include <stdio.h>

typedef struct {
    char codigo[4];
    unsigned long int populacao; // Mudança no tipo de variacelA
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder; // Criação da variavel de super poder
} Carta;

int main(void) {
    Carta carta1, carta2;

    /* --- Cadastro da Carta 1 --- */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Populacao (inteiro): ");
    scanf("%lu", &carta1.populacao);

    printf("Area (float, use ponto): ");
    scanf("%f", &carta1.area);

    printf("PIB (float, use ponto): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos (inteiro): ");
    scanf("%d", &carta1.pontos_turisticos);

    // Inclusão dos calculos novos
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    // Atribui valor a variavel de super poder 
    carta1.super_poder = (float)carta1.populacao 
                       + carta1.area 
                       + carta1.pib 
                       + carta1.pontos_turisticos 
                       + carta1.pib_per_capita 
                       + (1.0f / carta1.densidade);

    printf("\n");

    /* --- Cadastro da Carta 2 --- */
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", carta2.codigo);

    printf("Populacao (inteiro): ");
    scanf("%lu", &carta2.populacao);

    printf("Area (float, use ponto): ");
    scanf("%f", &carta2.area);

    printf("PIB (float, use ponto): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos (inteiro): ");
    scanf("%d", &carta2.pontos_turisticos);

    // Inclusão dos calculos novos
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Atribui valor a variavel de super poder     
    carta2.super_poder = (float)carta2.populacao 
                       + carta2.area 
                       + carta2.pib 
                       + carta2.pontos_turisticos 
                       + carta2.pib_per_capita 
                       + (1.0f / carta2.densidade);


    /* --- Exibicao dos dados --- */
    printf("\n=========================\n");
    printf("      CARTA 1\n");
    printf("=========================\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);
    // Print dos calculos novos
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per capita: %.2f\n", carta1.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);

    printf("\n=========================\n");
    printf("      CARTA 2\n");
    printf("=========================\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);
    // Print dos novos calculos
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per capita: %.2f\n", carta2.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);

    // Aqui exibo as comparações
    printf("\n===== COMPARACOES =====\n");
    printf("Populacao: %d\n", (carta1.populacao > carta2.populacao));
    printf("Area: %d\n", (carta1.area > carta2.area));
    printf("PIB: %d\n", (carta1.pib > carta2.pib));
    printf("Pontos turisticos: %d\n", (carta1.pontos_turisticos > carta2.pontos_turisticos));
    printf("Densidade populacional: %d\n", (carta1.densidade < carta2.densidade)); // menor vence
    printf("PIB per capita: %d\n", (carta1.pib_per_capita > carta2.pib_per_capita));
    printf("Super Poder: %d\n", (carta1.super_poder > carta2.super_poder));

    return 0;
}
