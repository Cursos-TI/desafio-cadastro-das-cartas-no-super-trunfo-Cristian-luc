#include <stdio.h>

    int main() {

        char carta1[10], carta2[10];
        char estado1, estado2;
        char codigo1[5], codigo2[5];
        char nomeCidade1[100], nomeCidade2[100];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        
        printf("Carta 1", &carta1);
        printf("insira o código do estado 1: ");
        scanf("%c", &estado1);
        
        printf("digite o nome da cidade: ");
        scanf("%c", &nomeCidade1);
        
        printf("digite o a população: ");
        scanf("%d", &populacao1);
        
        printf("digite a área:  ");
        scanf("%f", &area1);
        
        printf("digite o PIB: ");
        scanf("%f", &pib1);
        
        printf("Carta 2", &carta2);
        printf("insira o código do estado 1: ");
        scanf("%c", &estado2);
        
        printf("digite o nome da cidade: ");
        scanf("%c", &nomeCidade2);
        
        printf("digite o a população: ");
        scanf("%d", &populacao2);
        
        printf("digite a área:  ");
        scanf("%f", &area2);
        
        printf("digite o PIB: ");
        scanf("%f", &pib2)

        return 0;
    }
