#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){

    
    // Variaveis para primeira carta 
    char estado;
    char codigo[4];
    char nomeCidade[15];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
    int temp_char;

    // Variaveis para segunda carta 

    char estado2;
    char codigo2[4];
    char nomeCidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;

    // Solicitacoes de dados para primeira carta

    printf("Numero da Carta 1:\n");
    

    printf("Informe uma letra para o Estado: \n");
    scanf(" %c", &estado);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);   

    printf("Informe um código(ex: A01): \n");
    scanf("%3s", codigo);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Nome da cidade(sem espaços): \n");
    scanf("%14s", nomeCidade);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Populacao: \n");
    scanf(" %d", &populacao);  
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Area: \n");
    scanf("%f", &area);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Pib: \n");
    scanf("%f", &pib);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontoTuristico);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);


    // Solicitacoes de dados para segunda carta

    printf("Numero da Carta 2:\n");
    

    printf("Informe uma letra para o Estado: \n");
    scanf("%c", &estado2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);   

    printf("Informe um código(ex: A01): \n");
    scanf("%3s", codigo2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Nome da cidade(sem espaços): \n");
    scanf("%14s", nomeCidade2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Populacao: \n");
    scanf(" %d", &populacao2);  
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Area: \n");
    scanf("%f", &area2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Pib: \n");
    scanf("%f", &pib2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontoTuristico2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);
    
           
       
    // Exibição dos Dados da primeira cartas:

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("Pib: %.2f bilhões de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontoTuristico);

    // Exibição dos Dados da segunda cartas:

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("Pib: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);
    

    return 0;
}
