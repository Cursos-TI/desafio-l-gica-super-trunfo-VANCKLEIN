#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main (){
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
char EstadoA01[50] = "Alagoas";
    char CodigoA01[20] = "A01";
    char CidadeA01[20] = "Maceió"; 
    unsigned int PopulacaoA01 = 957000;
    int AreaA01 = 509; 
    int PIBA01 = 4000000;
    int TurismoA01 = 100;

    float densidadeA01 = (float) PopulacaoA01 / AreaA01;

    float pibpercapitaA01 = (float) PIBA01 / PopulacaoA01;

    double superpoderA01 = (double) PopulacaoA01 + AreaA01 + PIBA01 + TurismoA01 + pibpercapitaA01 - densidadeA01;

    printf("Código da Carta: %s\n", CodigoA01);
    printf("Estado: %s\n", EstadoA01);
    printf("Nome da Cidade: %s\n", CidadeA01);  
    printf("População: %d\n", PopulacaoA01);
    printf("Área: %d km²\n", AreaA01);
    printf("PIB: %d de reais\n", PIBA01);
    printf("Número de Pontos Turísticos: %d\n", TurismoA01);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadeA01);
    printf("PIB per Capita: %.3f reias\n", pibpercapitaA01);
    printf("Super Poder: %f\n", superpoderA01);

    printf("\n");
    printf("\n");

    char EstadoB02[50] = "Amazonas";
    char CodigoB02[20] = "B02";
    char CidadeB02[20] =  "Manaus"; 
    unsigned int  PopulacaoB02 = 2000000;
    int AreaB02 = 11401; 
    int PIBB02 = 103000000;
    int TurismoB02 = 50;

    float densidadeB02 = (float) PopulacaoB02 / AreaB02;

    float pibpercapitaB02 = (float) PIBB02 / PopulacaoB02;

    double superpoderB02 = (double) PopulacaoB02 + AreaB02 + PIBB02 + TurismoB02 + pibpercapitaB02 - densidadeB02;

    printf("Código da Carta: %s\n", CodigoB02);
    printf("Estado: %s\n", EstadoB02);
    printf("Nome da Cidade: %s\n", CidadeB02);
    printf("População: %d\n", PopulacaoB02);
    printf("Área: %d km²\n", AreaB02);
    printf("PIB: %d de reais\n", PIBB02);
    printf("Número de Pontos Turísticos: %d\n", TurismoB02);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadeB02);
    printf("PIB per Capita: %.3f reias\n", pibpercapitaB02);
    printf("Super Poder: %f\n", superpoderB02);

    
    printf("\n");
    printf("\n");

    printf("Comparação entre as cartas!\n");
    printf("\n");

int item;
printf("Escolha um item para batalhar:\n");
printf("1: Populacao\n");
printf("2: Area\n");
printf("3: PIB\n");
printf("4: Turismo\n");
printf("5: Densidade\n");
printf("6: Pib per Capita\n");
printf("7: Superpoder\n");
scanf("%d", &item);
switch (item) {
        case 1:
        printf("Você escolheu população!\n");
    if (PopulacaoA01 > PopulacaoB02) {
        printf("Carta 1 venceu!\n");
    } else {
        printf(" Carta 2 venceu!\n");}
        break;
        case 2:
        printf("Você escolheu Área!\n");
    if (AreaA01 > AreaB02) {
        printf("Carta 1 venceu.\n");
    } else {
        printf(" Carta 2 venceu.\n");}
        break;
        case 3:
        printf("Você escolheu PIB!\n");
    if (PIBA01 > PIBB02) {
        printf("Carta 1 venceu.\n");
    } else {
        printf(" Carta 2 venceu.\n");}
        break;
        case 4:
        printf("Você escolheu Turismo!\n");
    if (TurismoA01 > TurismoB02) {
        printf("Carta 1 venceu.\n");
    } else {
        printf(" Carta 2 venceu.\n");}
        break;
        case 5:
        printf("Você escolheu Densidade!\n");
    if (densidadeA01 > densidadeB02) {
        printf("Carta 2 venceu.\n");
    } else {
        printf(" Carta 1 venceu.\n");}
        break;
        case 6:
        printf("Você escolheu PIBPERCAPITA!\n");
    if (pibpercapitaA01 > pibpercapitaB02) {
        printf("Carta 1 venceu.\n");
    } else {
        printf(" Carta 2 venceu.\n");}
        break;
        case 7:
        printf("Você escolheu Super Poder!\n");
    if (superpoderA01 > superpoderB02) {
        printf("Carta 1 venceu.\n");
    } else {
        printf(" Carta 2 venceu.\n");}
        break;
        default:
        printf("Opção inválida!");
    }
     
    return 0;
}
