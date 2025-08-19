#include <stdio.h>

typedef struct {
    char codigo[4];              // Ex.: A01, B02 (3 chars + '\0')
    int populacao;               // População (inteiro)
    float area;                  // Área (float, em km², por exemplo)
    float pib;                   // PIB (float, em bilhões, por exemplo)
    int pontos_turisticos;       // Nº de pontos turísticos (inteiro)
} Carta;

int main(void) {
    Carta carta1, carta2;

    /* --- Cadastro da Carta 1 --- */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Populacao (inteiro): ");
    scanf("%d", &carta1.populacao);

    printf("Area (float, use ponto): ");
    scanf("%f", &carta1.area);

    printf("PIB (float, use ponto): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos (inteiro): ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n");

    /* --- Cadastro da Carta 2 --- */
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", carta2.codigo);

    printf("Populacao (inteiro): ");
    scanf("%d", &carta2.populacao);

    printf("Area (float, use ponto): ");
    scanf("%f", &carta2.area);

    printf("PIB (float, use ponto): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos (inteiro): ");
    scanf("%d", &carta2.pontos_turisticos);

    /* --- Exibicao dos dados --- */
    printf("\n=========================\n");
    printf("      CARTA 1\n");
    printf("=========================\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n=========================\n");
    printf("      CARTA 2\n");
    printf("=========================\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
