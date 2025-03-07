#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;               // Estado: letra de 'A' a 'H'
    char codigo[5];           // Código da Carta: string (ex: A01, B03)
    char nomeCidade[100];     // Nome da Cidade: string
    int populacao;            // População: número de habitantes
    float area;               // Área: em km²
    float pib;                // PIB: Produto Interno Bruto
    int pontosTuristicosc;     // Número de Pontos Turísticos

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %c", &nomeCidade);
    
    printf("População: ");
    scanf("%d" , &populacao);

    printf("Pontos turisticos: ");
    scanf("%f", &printf("Digite o estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade); // Lê até a nova linha
    
    printf("Digite a população: ");
    scanf("%d", &carta->populacao);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &carta->area);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    
    
    return 0;
}
