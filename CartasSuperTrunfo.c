#include <stdio.h>


int main() {
    
        char estado;
        char codigo_da_carta[3];
        char nome_cidade[50];
        int numero_da_cidade;
        int populacao;
        float area_em_km2;
        float pib;
        int nmr_de_pts_turisticos;
        

        printf("***Criação da primeira carta***\n");

        printf("Digite a inicial do estado (De A à H): \n");
        scanf(" %c", &estado);
        printf("A inicial do estado escolhido foi: %c \n", estado);
//Incial do Estado para calcular o código da carta;



        printf("Digite o nome da cidade: \n");
        scanf(" %s", nome_cidade);
        printf("A cidade escolhida foi %s \n", nome_cidade);
// Nome da cidade; Erro dizendo que o formato %s de string, espera uma variavel de valor char, porém a variavel é valor char e não consta.


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
        float densidade = populacao / area_em_km2;
        printf("*A densidade populacional é de: %.3f\n", densidade);
// Código para calcular a densidade;



        printf("Insira o Pib da cidade: \n");
        scanf(" %f", &pib);
        printf("Pib da cidade escolhida: %f \n", pib);
//Pib da cidade;
        float pibP = pib / populacao;
        printf("*O pib per capita é de: %.3f\n", pibP);
//Código para calcular o Pib Per Capita;



        printf("Insira a quantidade de pontos turísticos que a cidade possui: \n");
        scanf(" %d", &nmr_de_pts_turisticos); 
        printf("Quantidade de pontos turisticos da cidade escolhida: %d\n", nmr_de_pts_turisticos);

//Pontos turísticos da cidade;


  
        printf("*****Resumo da carta cadastrada*****\n");
        printf("*Nome da cidade: %s \n", nome_cidade); //Erro parecido com a primeira variavel, não consigo resolver, não aparece nada no resumo. Apenas a linha "nome da cidade."
        printf("*Inicial do estado: %c \n", estado);
        printf("*Número da cidade escolhida: %d \n", numero_da_cidade);
        printf("*Código da Carta: %s \n", codigo_da_carta);
        printf("*População da área escolhida: %d \n", populacao);
        printf("*Área da cidade: %f \n", area_em_km2);
        printf("*Pib da cidade: %f \n", pib);
        printf("*Quantidade de pontos turísticos %d \n", nmr_de_pts_turisticos);
        printf("\n"); //Espaço apenas para organizar melhor e dividir as informações
        printf("*Pib per capita da carta: %.3f\n", pibP);
        printf("*Densidade populacional da carta: %.3f\n", densidade);

//Resumo do resultado da primeira carta, apresentado linha por linha.







        printf("***Criação da segunda carta:***\n");
        
        char estado2;
        char codigo_da_carta2[3];
        char nome_cidade2[50];
        int numero_da_cidade2;
        int populacao2;
        float area_em_km;
        float pib2;
        int nmr_de_pts_turisticos2;


        printf("Digite a inicial do segundo estado (De A à H): \n");
        scanf(" %c", &estado2);
        printf("A inicial do estado escolhido foi: %c \n", estado2);
//Incial do Estado para calcular o código da carta;



        printf("Digite o nome da cidade: \n");
        scanf(" %s", nome_cidade2);
        printf("A cidade escolhida foi %s \n", nome_cidade2);
// Nome da cidade; Erro dizendo que o formato %s de string, espera uma variavel de valor char, porém a variavel é valor char e não consta.


        printf("Digite o número da cidade (de 1 à 4.): \n");
        scanf(" %d", &numero_da_cidade2);
        printf("O número da cidade escolhida foi: %d \n", numero_da_cidade2);
//Codigo da cidade para o calculo do codigo da carta;

        printf("Insira o código de sua carta (inicial do Estado + Número da cidade.): \n");
        scanf(" %s", &codigo_da_carta2);
        printf("O código de sua carta é: %s\n", codigo_da_carta2);
//O código da carta;
       
        printf("Insira a população da cidade escolhida: \n");
        scanf(" %d", &populacao2);
        printf("A população da cidade escolhida é de: %d\n", populacao2);
//A população da cidade;
 
        printf("Insira a área da sua cidade em Km²: \n");
        scanf(" %f", &area_em_km);
        printf("A área da cidade é de: %f \n", area_em_km);
//Área da cidade;
        float densidade2 = populacao2 / area_em_km;
        printf("*A densidade populacional é de: %.3f\n", densidade2);
// Código para calcular a densidade;



        printf("Insira o Pib da cidade: \n");
        scanf(" %f", &pib2);
        printf("Pib da cidade escolhida: %f \n", pib2);
//Pib da cidade;
        float pibP2 = pib2 / populacao2;
        printf("*O pib per capita é de: %.3f\n", pibP2);
//Código para calcular o Pib Per Capita;



        printf("Insira a quantidade de pontos turísticos que a cidade possui: \n");
        scanf(" %d", &nmr_de_pts_turisticos2); 
        printf("Quantidade de pontos turisticos da cidade escolhida: %d\n", nmr_de_pts_turisticos2);

//Pontos turísticos da cidade;


        printf("*****Resumo da carta cadastrada*****\n");
        printf("*Nome da cidade: %s \n", nome_cidade2); 
        printf("*Inicial do estado: %c \n", estado2);
        printf("*Número da cidade escolhida: %d \n", numero_da_cidade2);
        printf("*Código da Carta: %s \n", codigo_da_carta2);
        printf("*População da área escolhida: %d \n", populacao2);
        printf("*Área da cidade: %f \n", area_em_km);
        printf("*Pib da cidade: %f \n", pib2);
        printf("*Quantidade de pontos turísticos %d \n", nmr_de_pts_turisticos2);
        printf("\n"); //Espaço apenas para organizar melhor e dividir as informações
        printf("*Pib per capita da carta: %.3f\n", pibP2);
        printf("*Densidade populacional da carta: %.3f\n", densidade2);



        printf("***Comparação das cartas***");

        



        



    return 0;
}
