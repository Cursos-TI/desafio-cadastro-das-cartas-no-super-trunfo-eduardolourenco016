#include <stdio.h>

// Desafio Super Trunfo 
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.



int main() {

    // CARTA 1: FORTALEZA

    char estado1 = 'A';
    char codigo1 []= "A01";
    char nome_cidade1[] = "Fortaleza";
    int população1 = 2686612;
    float area1 = 31.93;
    float pib1 = 67.00;
    int pontos_turisticos1 = 35;
    float densidade_populacional1 = (float) população1 / area1;
    float pib_per_Capita1= (float) população1 / pib1; 


    // CARTA 2: VITORIA 

    char estado2 ='B';
    char codigo2 [] = "B02";
    char nome_cidade2 [] = "Vitoria";
    int população2 = 365855;
    float area2 = 93.38;
    float pib2 = 36.10;
    int pontos_turisticos2 = 16;
    float densidade_populacional2 = (float) população2 / area2;
    float pib_per_Capita2= (float) população2 / pib2; 


    // EXIBINDO CARTA: 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB Per Capital: %.2f Reais\n", pib_per_Capita1);


    //EXIBINDO CARTA: 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB Per Capital: %.2f Reais\n", pib_per_Capita2);

  




    return 0;
}
