// Desafio Super Trunfo - Países

#include <stdio.h>
#include <locale.h>


// Tema 1 - Cadastro das Cartas

int main() {

    setlocale(LC_NUMERIC, "");    

    
    // Variaveis para primeira carta 

    char estado[3], codigo[4], nomeCidade[100];
    unsigned int pontoTuristico, ResultadoCarta;
    unsigned long int populacao;
    float area, pib, densidadepopulacional, pibpercapita;
    double SuperPoder;
    int temp_char;
    
    
    // Variaveis para segunda carta 

    char estado2[3], codigo2[4], nomeCidade2[100];
    unsigned int  pontoTuristico2, ResultadoCarta2;
    unsigned long int populacao2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;
    double SuperPoder2;
    
    

    // Solicitacoes de dados para primeira carta

    printf("Numero da Carta 1:\n");
    

    printf("Informe uma letra para o Estado(Ex: MG):: \n");
    scanf("%2s", &estado);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);   

    printf("Informe um código(ex: A01): \n");
    scanf("%3s", codigo);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Nome da cidade(sem espaços): \n");
    scanf("%14s", nomeCidade);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Populacao: \n");
    scanf(" %lu", &populacao);  
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
    

    printf("Informe uma letra para o Estado(Ex: MG):: \n");
    scanf("%2s", &estado2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);   

    printf("Informe um código(ex: A01): \n");
    scanf("%3s", codigo2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Nome da cidade(sem espaços): \n");
    scanf("%14s", nomeCidade2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Populacao: \n");
    scanf(" %lu", &populacao2);  
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




    // Calcular densidade populacional e PIB per capita CARTA 1

    if (area != 0) {
        densidadepopulacional = (float)populacao / area;
    } else {
        densidadepopulacional = 0.0f;  // Para evitar divisão por zero
           printf("Atenção: Área da carta 1 é zero! Densidade populacional será 0.\n");
    
        } 

    if (populacao != 0) {
        pibpercapita = (pib * 1000000000.0f) / populacao;
    } else {
        pibpercapita = 0.0f; // Para evitar divisão por zero       
            printf("Atenção: População da carta 1 é zero! PIB per capita será 0.\n");
    }
    

    // Calcular densidade populacional e PIB per capita CARTA 2

    if (area2 != 0) {
        densidadepopulacional2 = (float)populacao2 / area2;
    } else {
        densidadepopulacional2 = 0.0f;  // Para evitar divisão por zero
           printf("Atenção: Área da carta 2 é zero! Densidade populacional será 0.\n");
    
        } 

    if (populacao2 != 0) {
        pibpercapita2 = (pib2 * 1000000000.0f) / populacao2;
    } else {
        pibpercapita2 = 0.0f; // Para evitar divisão por zero       
            printf("Atenção: População da carta 2 é zero! PIB per capita será 0.\n");
    }

    
    // Calcular o Super Poder CARTA 1

    if (densidadepopulacional != 0) {        
        SuperPoder = (double)populacao + area + pib + (double)pontoTuristico + pibpercapita + (1.0 / densidadepopulacional);    
    } else {
        SuperPoder = 0.0;       
        printf("Atenção: Densidade populacional da Carta 1 é zero. Super Poder pode ser afetado.\n");    
    }

    // Calcular o Super Poder CARTA 2

   if (densidadepopulacional2 != 0) {        
        SuperPoder2 = (double)populacao2 + area2 + pib2 + (double)pontoTuristico2 + pibpercapita2 + (1.0 / densidadepopulacional);    
    } else {
        SuperPoder2 = 0.0;       
        printf("Atenção: Densidade populacional da Carta 2 é zero. Super Poder pode ser afetado.\n");    
    }

    // Comparação das cartas 1 e 2 

    ResultadoCarta = populacao > populacao2;
    ResultadoCarta = area > area2;
    ResultadoCarta = pib > pib2;
    ResultadoCarta = pontoTuristico > pontoTuristico2;
    ResultadoCarta = densidadepopulacional < densidadepopulacional2;
    ResultadoCarta = pibpercapita > pibpercapita2;
    ResultadoCarta = SuperPoder > SuperPoder2;

    ResultadoCarta2 = populacao2 > populacao;
    ResultadoCarta2 = area2 > area;
    ResultadoCarta2 = pib2 > pib;
    ResultadoCarta2 = pontoTuristico2 > pontoTuristico;
    ResultadoCarta2 = densidadepopulacional2 < densidadepopulacional;
    ResultadoCarta2 = pibpercapita2 > pibpercapita;
    ResultadoCarta2 = SuperPoder2 > SuperPoder;


    // Exibição dos Resultados das comparaçoes da Carta 1 

    printf("\n\n \033[1;34m Informações_Da_Carta 1: \033[0m \n\n");

    printf("Estado: \033[1;34m%c\033[0m(%u)\n", estado, ResultadoCarta);
    printf("Código: \033[1;34m%s\033[0m(%u)\n", codigo, ResultadoCarta);
    printf("Cidade: \033[1;34m%s\033[0m(%u)\n", nomeCidade, ResultadoCarta);
    printf("População: \033[1;34m%lu'\033[0m(%u)\n", populacao, ResultadoCarta);
    printf("Área: \033[1;34m%'.2fkm²\033[0m(%u)\n", area, ResultadoCarta);
    printf("PIB: \033[1;34m%'.2f Bi\033[0m (%u)\n", pib, ResultadoCarta);
    printf("Pontos Turísticos: \033[1;34m%u Lugares\033[0m(%u)\n", pontoTuristico, ResultadoCarta);
    printf("Densidade Populacional: \033[1;34m%'.2f Hab/km²\033[0m(%u)\n", densidadepopulacional, ResultadoCarta);
    printf("PIB per Capita: \033[1;34m%'.2f R$\033[0m(%u)\n", pibpercapita, ResultadoCarta);
    printf("Super Poder: \033[1;33m%.2lf\033[0m(%u)\n\n", SuperPoder, ResultadoCarta);

    

   // Exibição dos Resultados das comparaçoes da Carta 2

    printf("\n\n \033[1;31m Informações_Da_Carta 2: \033[0m \n\n");

    printf("Estado: \033[1;31m%c\033[0m(%u)\n", estado2, ResultadoCarta);
    printf("Código: \033[1;31m%s\033[0m(%u)\n", codigo2, ResultadoCarta);
    printf("Cidade: \033[1;31m%s\033[0m(%u)\n", nomeCidade2, ResultadoCarta);
    printf("População: \033[1;31m%lu'\033[0m(%u)\n", populacao2, ResultadoCarta);
    printf("Área: \033[1;31m%'.2fkm²\033[0m(%u)\n", area2, ResultadoCarta);
    printf("PIB: \033[1;31m%'.2f Bi\033[0m(%u)\n", pib2, ResultadoCarta);
    printf("Pontos Turísticos: \033[1;31m%u Lugares\033[0m(%u)\n", pontoTuristico2, ResultadoCarta);
    printf("Densidade Populacional: \033[1;31m%'.2f Hab/km²\033[0m(%u)\n", densidadepopulacional2, ResultadoCarta);
    printf("PIB per Capita: \033[1;31m%'.2f R$\033[0m(%u)\n", pibpercapita2, ResultadoCarta);
    printf("Super Poder: \033[1;33m%.2lf\033[0m(%u)\n\n", SuperPoder2, ResultadoCarta);   
    

    return 0;
}
