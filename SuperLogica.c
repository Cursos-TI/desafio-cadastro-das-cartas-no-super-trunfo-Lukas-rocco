#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    char estado1 [20], estado2 [20], codigo1[3], codigo2[3];
    int pontos1, pontos2, pop1, pop2;
    float area1, area2, pib1, pib2;

    
      estado2 [25] ="riodejaneiro";    
      estado1 [20] = "saopaulo";    
      codigo1 [3] = "A01";
      codigo2 [3] = "B01";
      
      pontos1 = 50;
      pontos2 = 30;
      pop1 = 12325000;
      pop2 = 6748000;
      area1 = 1521.11;
      area2 = 1200.25;
      pib1 = 699.28;
      pib2 = 300.50;
    
       int opcao, escolhajogador, atributo;

       float Densidade1 = (float) pop1/ area1;
       float pibpercapita1 = (float) pib1 * 1000000000 / pop1;
       float super1 = (float) pop1 + area1 + pib1 +pontos1+ Densidade1 + pibpercapita1;
      
       float Densidade2 = (float) pop2/ area2;
       float pibpercapita2 =(float) pib2* 1000000000 / pop2;
       float super2 = (float) pop2 + area2 + pib2 + pontos2 + Densidade2 + pibpercapita2;

       
       srand(time(0));

      printf("### SUPER TRUNFO ###\n");
      printf("Menu principal!\n");
      printf("1. Iniciar o jogo.\n");
      printf("2. Regras do jogo.\n");
      printf("3. Sair do jogo.\n");
      scanf("%d", &opcao);

      switch (opcao)
      {
      case 1:
        printf("Qual carta você selecionará?\n");
        printf("1. Carta 1.\n");
        printf("2. Carta 2.");
        scanf("%d", &escolhajogador);

        if (escolhajogador == 1) {
            
            printf("Carta 1:\n");
            printf("Estado: %s \n", estado1);
            printf("Codigo: %s \n",codigo1);
            printf("População: %d \n",pop1);
            printf("Área: %.2f Km²\n",area1);
            printf("PIB: %.2f bilhões de reais\n",pib1);
            printf("Pontos turísticos: %d \n",pontos1);
            printf("Desidade populacional: %.2f hab/km²\n", Densidade1);
            printf("PIB per capita: %.2f reais\n", pibpercapita1);
            printf("Super poder: %.2f\n", super1);
        } else if (escolhajogador == 2) {
            
            printf("Carta 2:\n");
            printf("Estado: %s \n", estado2);
            printf("Codigo: %s \n",codigo2);
            printf("População: %d \n",pop2);
            printf("Área: %.2f Km²\n",area2);
            printf("PIB: %.2f bilhões de reais\n",pib2);
            printf("Pontos turísticos: %d \n",pontos2);
            printf("Desidade populacional: %.2f hab/km²\n", Densidade2);
            printf("PIB per capita: %.2f reais\n", pibpercapita2);
            printf("Super poder: %.2f \n", super2);

        } else {
            printf("Opção inválida");
        }
          
        int escolhamaquina = (escolhajogador == 1) ? 2 :1;
         
        printf("Escolha um atributo:\n");
         printf("1. População:\n");
         printf("2. Área: \n");
         printf("3. PIB: \n");
         printf("4. Pontos turísticos:\n");
         printf("5. Densidade populacional: \n");
         printf("6. PIB per capita: \n");
         printf("7. Super poder: \n");
        scanf("%d", &atributo);

        if(atributo == 1) {
            printf("A população é de: %d \n", pop1);
        } else if (atributo == 2) {
            printf("A área é de: %.2f \n", area1);
        } else if (atributo == 3) {
            printf("O PIB é de: %f \n", pib1);
        } else if (atributo == 4) {
            printf("A quantidade de pontos turísticos é: %d \n", pontos1);
        } else if (atributo == 5) {
            printf("A Densidade populacional é de: %d \n", Densidade1);
        } else if (atributo == 6) {
            printf("O PIB per capita é de: %.3f \n", pibpercapita1);
        } else if (atributo == 7) {
            printf("O super poder é de: %.2f \n", super1);
        } else {
            printf("Opção inválida");
        }
        
        
        
        
      
       
        
        
        
        
        
        
          


        break;
      
      default:
        break;
      }

return 0;
}