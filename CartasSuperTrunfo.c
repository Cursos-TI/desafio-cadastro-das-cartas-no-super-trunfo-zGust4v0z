#include <stdio.h>


int main() {
    
        char estado;
        char codigo_da_carta[3];
        char nome_estado[40];
        char nome_cidade[50];
        int numero_da_cidade;
        int populacao;
        float area_em_km2;
        float pib;
        int nmr_de_pts_turisticos;
        


        


        printf("Digite a inicial do estado (De A à H): \n");
        scanf(" %c", &estado);
        printf("A inicial do estado escolhido foi: %c \n", estado);
//Incial do Estado para calcular o código da carta;

        printf("Digite o nome do estado: \n");
        scanf(" %s", &nome_estado);
        printf("O estado escolhido foi: %s \n", nome_estado);
//Nome do estado;


        printf("Digite o nome da cidade: \n");
        scanf(" %s", &nome_cidade);
        printf("A cidade escolhida foi %s \n", nome_cidade);
// Nome da cidade;


        printf("Digite o número da cidade (de 1 à 4.): \n");
        scanf(" %d", &numero_da_cidade);
        printf("O número da cidade escolhida foi: %d \n", numero_da_cidade);
//Codigo da cidade para o calculo do codigo da carta;

        printf("Insira o código de sua carta (inicial do Estado + Número da cidade.): \n");
        scanf(" %s", &codigo_da_carta);
        printf("O código de sua carta é: %s\n", codigo_da_carta);
//O código da carta;
       
        printf("Insira a população da cidade escolhida: \n");
        scanf(" %d", &populacao);
        printf("A população da cidade escolhida é de: %d\n", populacao);
//A população da cidade;
 
        printf("Insira a área da sua cidade em Km²: \n");
        scanf(" %f", &area_em_km2);
        printf("A área da cidade é de: %f \n", area_em_km2);
//Área da cidade;

        printf("Insira o Pib da cidade: \n");
        scanf(" %f", &pib);
        printf("Pib da cidade escolhida: %f \n", pib);
//Pib da cidade;

        printf("Insira a quantidade de pontos turísticos que a cidade possui: \n");
        scanf(" %d", &nmr_de_pts_turisticos); 
        printf("Quantidade de pontos turisticos da cidade escolhida: %d\n", nmr_de_pts_turisticos);
//Pontos turísticos da cidade;
        
        printf("Resumo da carta cadastrada:\n");
        printf("Nome da cidade: %s \n", nome_cidade);
        printf("Nome do Estado: %s \n", nome_estado);
        printf("Inicial do estado: %c \n", estado);
        printf("Número da cidade escolhida: %d \n", numero_da_cidade);
        printf("Código da Carta: %s \n", codigo_da_carta);
        printf("População da área escolhida: %d \n", populacao);
        printf("Área da cidade: %f \n", area_em_km2);
        printf("Pib da cidade: %f \n", pib);
        printf("Quantidade de pontos turísticos %d \n", nmr_de_pts_turisticos);
        
//Resumo do resultado das cartas, apresentadas linha por linha.


    return 0;
}
