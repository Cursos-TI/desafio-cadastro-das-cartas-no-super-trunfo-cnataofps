#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    
    // Variaveis para primeira carta 

    char estado, codigo[4], nomeCidade[15];
    unsigned int populacao, pontoTuristico, ResultadoCarta;
    float area, pib, densidadepopulacional, pibpercapita,SuperPoder;
    int temp_char;
    
    
    // Variaveis para segunda carta 

    char estado2, codigo2[4], nomeCidade2[15];
    unsigned int populacao2, pontoTuristico2, ResultadoCarta2;
    float area2, pib2, densidadepopulacional2, pibpercapita2,SuperPoder2;
    

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




    // Calcular densidade populacional e PIB per capita CARTA 1

    densidadepopulacional = populacao / area;
    pibpercapita = (pib * 1000000000) / populacao;

    // Calcular densidade populacional e PIB per capita CARTA 2

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    
    // Calcular o Super Poder CARTA 1

    SuperPoder = populacao + area + pib + pontoTuristico + pibpercapita + (densidadepopulacional / 1);

    // Calcular o Super Poder CARTA 2

    SuperPoder2 = populacao2 + area2 + pib2 + pontoTuristico2 + pibpercapita2 + (densidadepopulacional2 / 1);

    // Comparação das cartas 1 e 2 

    ResultadoCarta = populacao > populacao2;
    ResultadoCarta = area > area2;
    ResultadoCarta = pib > pib2;
    ResultadoCarta = pontoTuristico > pontoTuristico2;
    ResultadoCarta = densidadepopulacional > densidadepopulacional2;
    ResultadoCarta = pibpercapita > pibpercapita2;
    ResultadoCarta = SuperPoder > SuperPoder2;

    ResultadoCarta = populacao2 > populacao;
    ResultadoCarta = area2 > area;
    ResultadoCarta = pib2 > pib;
    ResultadoCarta = pontoTuristico2 > pontoTuristico;
    ResultadoCarta = densidadepopulacional2 > densidadepopulacional;
    ResultadoCarta = pibpercapita2 > pibpercapita;
    ResultadoCarta = SuperPoder2 > SuperPoder;


    // Exibição dos Resultados das comparaçoes da Carta 1 

    printf("\n\n \033[1;34m Informações_Da_Carta 1: \033[0m \n\n");

    printf("Estado: \033[1;34m%d\033[0m(%u)\n", estado, ResultadoCarta);
    printf("Código: \033[1;34m%s\033[0m(%u)\n", codigo, ResultadoCarta);
    printf("Cidade: \033[1;34m%s\033[0m(%u)\n", nomeCidade, ResultadoCarta);
    printf("População: \033[1;34m%'.3d Mi\033[0m(%u)\n", populacao, ResultadoCarta);
    printf("Área: \033[1;34m%'.2fkm²\033[0m(%u)\n", area, ResultadoCarta);
    printf("PIB: \033[1;34m%'.2f Bi\033[0m (%u)\n", pib, ResultadoCarta);
    printf("Pontos Turísticos: \033[1;34m%u Lugares\033[0m(%u)\n", pontoTuristico, ResultadoCarta);
    printf("Densidade Populacional: \033[1;34m%'.2f Hab/km²\033[0m(%u)\n", densidadepopulacional, ResultadoCarta);
    printf("PIB per Capita: \033[1;34m%'.2f R$\033[0m(%u)\n", pibpercapita, ResultadoCarta);
    printf("Super Poder: \033[1;33m%'.2f\033[0m(%u)\n\n", SuperPoder, ResultadoCarta);

    

   // Exibição dos Resultados das comparaçoes da Carta 2

    printf("\n\n \033[1;31m Informações_Da_Carta 2: \033[0m \n\n");

    printf("Estado: \033[1;31m%d\033[0m(%u)\n", estado2, ResultadoCarta);
    printf("Código: \033[1;31m%s\033[0m(%u)\n", codigo2, ResultadoCarta);
    printf("Cidade: \033[1;31m%s\033[0m(%u)\n", nomeCidade2, ResultadoCarta);
    printf("População: \033[1;31m%'.3d Mi\033[0m(%u)\n", populacao2, ResultadoCarta);
    printf("Área: \033[1;31m%'.2fkm²\033[0m(%u)\n", area2, ResultadoCarta);
    printf("PIB: \033[1;31m%'.2f Bi\033[0m(%u)\n", pib2, ResultadoCarta);
    printf("Pontos Turísticos: \033[1;31m%u Lugares\033[0m(%u)\n", pontoTuristico2, ResultadoCarta);
    printf("Densidade Populacional: \033[1;31m%'.2f Hab/\033[0m(%u)\n", densidadepopulacional2, ResultadoCarta);
    printf("PIB per Capita: \033[1;31m%'.2f R$\033[0m(%u)\n", pibpercapita2, ResultadoCarta);
    printf("Super Poder: \033[1;33m%'.2f\033[0m(%u)\n\n", SuperPoder2, ResultadoCarta);   
    

    return 0;
}
