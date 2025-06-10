#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){

    
    // Variaveis para primeira carta 
    char estado;
    char codigo[4];
    char nomeCidade[15];
    float populacao;
    float area;
    float pib;
    int pontoTuristico;

    // Variaveis para segunda carta 

    char estado2;
    char codigo2[4];
    char nomeCidade2[15];
    float populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;

    // Solicitacoes de dados para primeira carta

    printf("Numero da Carta 1:\n");
    

    printf("Informe uma letra: \n");
    scanf(" %c", &estado);  

    printf("Informe um código: \n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCidade);

    printf("Populacao: \n");
    scanf(" %f", &populacao);  

    printf("Area: \n");
    scanf(" %f", &area);

    printf("Pib: \n");
    scanf(" %f", &pib);

    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontoTuristico);

    // Solicitacoes de dados para segunda carta

    printf("Numero da Carta 2:\n");
    

    printf("Informe uma letra: \n");
    scanf(" %c", &estado2);  

    printf("Informe um código: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Populacao: \n");
    scanf(" %f", &populacao2);  

    printf("Area: \n");
    scanf(" %f", &area2);

    printf("Pib: \n");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontoTuristico2);

    
           
       
    // Exibição dos Dados da primeira cartas:

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", codigo);
    printf("Populacao: %f\n", populacao);
    printf("Area: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Populacao: %d\n", pontoTuristico);

    // Exibição dos Dados da segunda cartas:

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", codigo2);
    printf("Populacao: %f\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Populacao: %d\n", pontoTuristico2);
    

    return 0;
}
