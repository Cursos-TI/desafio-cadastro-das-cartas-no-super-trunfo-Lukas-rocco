#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
    // EXEMPLO: 

    // Carta 1:
   //Estado: A
   // Código: A01
   // Nome da Cidade: São Paulo
   //População: 12325000
   // Área: 1521.11 km²
   //PIB: 699.28 bilhões de reais
   // Número de Pontos Turísticos: 50

int main() {

 char estado1[25];
 char codigo1 [4];
 char cidade1[20];
 int pop1;
 float area1;
 float pib1;
 int pontos1;




    printf("Desafio do Super Trunfo!\n");
 
 printf("\n"); // apenas para dar mais espaços nas linhas para facilitar a leitura.
 
 printf("Carta 1:\n");

 printf("Qual estado da sua carta? ");
scanf("%19s", estado1);

printf("Qual o codigo dela? ");
scanf("%4s",codigo1);

printf("Qual a cidade? ");
scanf("%19s", cidade1);

printf("Qual população da cidade? ");
scanf("%d", &pop1);

printf("Qual a área da cidade? ");
scanf("%f",&area1);

printf("Qual o PIB? ");
scanf("%f", &pib1);

printf("Quantos pontos turísticos possui? ");
scanf("%d",&pontos1);

printf("Carta 1:\n");
printf("Estado: %s \n", estado1);
printf("Codigo: %s \n",codigo1);
printf("Cidade: %s \n",cidade1);
printf("População: %d \n",pop1);
printf("Área: %.2f Km²\n",area1);
printf("PIB: %.2f bilhões de reais\n",pib1);
printf("Pontos turísticos: %d \n",pontos1);












    
    return 0;
}
