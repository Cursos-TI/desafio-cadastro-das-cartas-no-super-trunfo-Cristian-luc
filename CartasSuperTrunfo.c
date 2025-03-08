#include <stdio.h>

int main() {
    char carta1[10], carta2[10];
    char estado1[5], estado2[5];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    printf("Carta 1\n");
    printf("insira o código do estado 1: ");
    scanf("%s", estado1);
    
    printf("digite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    
    printf("digite a população: ");
    scanf("%d", &populacao1);
    
    printf("digite a área: ");
    scanf("%f", &area1);
    
    printf("digite o PIB: ");
    scanf("%f", &pib1);
    
    printf("Carta 2\n");
    printf("insira o código do estado 2: ");
    scanf("%s", estado2);
    
    printf("digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    
    printf("digite a população: ");
    scanf("%d", &populacao2);
    
    printf("digite a área: ");
    scanf("%f", &area2);
    
    printf("digite o PIB: ");
    scanf("%f", &pib2);

    return 0;
}
