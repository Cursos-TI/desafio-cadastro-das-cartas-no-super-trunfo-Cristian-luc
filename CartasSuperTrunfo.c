#include <stdio.h>

int main() {
    char carta1[10]; 
    char carta2[10];
    char estado1[5];
    char estado2[5];
    char codigo1[3];
    char codigo2[3];
    char nomeCidade1[100]; 
    char nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibper1, pibper2;
    int pontosturisticos1, pontosturisticos2;

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibper1 = pib1 / populacao1;
    pib2 = pib2 / populacao2;

    printf("Carta 1\n");
    printf("insira o estado 1: ", estado1);
    scanf("%s", &estado1);

    printf("Digite o codigo: ", codigo1);
    scanf("%s", &codigo1);
    
    printf("digite o nome da cidade: ", nomeCidade1);
    scanf("%s", &nomeCidade1);
    
    printf("digite a população: ", populacao1);
    scanf("%d", &populacao1);
    
    printf("digite a área: ", area1);
    scanf("%f", &area1);
    
    printf("digite o PIB: ", pib1);
    scanf("%f", &pib1);
    
    printf("digite a quantidade de pontos turisticos: ", pontosturisticos1);
    scanf("%d", &pontosturisticos1);

    printf("Pib per capita: %f \n", pibper1);
    printf("Densidade populacional: %.4f \n", densidade1);

    printf("Carta 2\n");
    printf("insira o estado 2: ", estado2);
    scanf("%s", &estado2);

    printf("Digite o codigo: ", codigo2);
    scanf("%s", &codigo2);
    
    printf("digite o nome da cidade: ", nomeCidade2);
    scanf("%s", &nomeCidade2);
    
    printf("digite a população: ", populacao2);
    scanf("%d", &populacao2);
    
    printf("digite a área: ", area2);
    scanf("%f", &area2);
    
    printf("digite o PIB: ", pib2);
    scanf("%f", &pib2);
    
    printf("digite a quantidade de pontos turisticos: ", pontosturisticos2);
    scanf("%d", &pontosturisticos2);

    printf("Pib per capita: %f \n", pibper2);
    printf("Densidade populacional: %f \n", densidade2);

    return 0;
}