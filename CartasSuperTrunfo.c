#include <stdio.h> 

int main(){
    char estado1;              
    char codigo1 [4];
    char cidade1 [30];
    int populacao1;
    float area1;
    float pib1;
    int numero1;

    char estado2;
    char codigo2 [4];
    char cidade2 [30];
    int populacao2;
    float area2;
    float pib2;
    int numero2;

 printf("--Carta 01--\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (Ex: A01,H04): ");
    scanf(" %3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %29[^\n]", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area1);

    printf("Digite o Produto Interno Bruto da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf(" %d", &numero1);
//Solicita ao usuário os dados da primeira carta, lendo cada valor e armazenando nas variáveis correspondentes.


 printf("\n--Carta 02--\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (Ex: A01, H04): ");
    scanf(" %3s", codigo2); //limita a entrada do código a até 3 caracteres.

    printf("Digite o Nome da Cidade: ");
    scanf(" %29[^\n]", cidade2);  //lê até 29 caracteres até encontrar uma nova linha, permitindo nomes de cidade com espaços.

    printf("Digite o número de habitantes da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area2);

    printf("Digite o Produto Interno Bruto da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf(" %d", &numero2);
//Solicita ao usuário os dados da segunda carta, lendo cada valor e armazenando nas variáveis correspondentes.



printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d Habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1); //A precisão %.2f limita os números de ponto flutuante a duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero2);
    
    return 0;

}
