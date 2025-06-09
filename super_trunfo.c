#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.

    int carta;
    char estado;
    char codigo[4];
    char nomeCidade[15];
    float populacao;
    float area;
    float pib;
    int pontoTuristico;

    printf("Numero da Carta: \n");
    scanf(" %d", &carta);

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

    
           
       
    // Exibição dos Dados das Cartas:

    printf("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", codigo);
    printf("Populacao: %f\n", populacao);
    printf("Area: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Populacao: %d\n", pontoTuristico);

    

    return 0;
}
