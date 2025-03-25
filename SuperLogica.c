#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char estado1[20] = "saopaulo", estado2[20] = "riodejaneiro";
    char codigo1[3] = "A01", codigo2[3] = "B01";
    int pontos1 = 50, pontos2 = 30, pop1 = 12325000, pop2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25, pib1 = 699.28, pib2 = 300.50;
    
    
    float Densidade1 = (float)pop1 / area1;
    float pibpercapita1 = (float)pib1 * 1000000000 / pop1;
    float super1 = (float)pop1 + area1 + pib1 + pontos1 + Densidade1 + pibpercapita1;

    float Densidade2 = (float)pop2 / area2;
    float pibpercapita2 = (float)pib2 * 1000000000 / pop2;
    float super2 = (float)pop2 + area2 + pib2 + pontos2 + Densidade2 + pibpercapita2;

    int opcao, escolhajogador, atributo1, atributo2;

    srand(time(0));

 
    printf("### SUPER TRUNFO ###\n");
    printf("Menu principal!\n");
    printf("1. Iniciar o jogo.\n");
    printf("2. Regras do jogo.\n");
    printf("3. Sair do jogo.\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Qual carta você selecionará?\n");
        printf("1. Carta 1 (São Paulo).\n");
        printf("2. Carta 2 (Rio de Janeiro).\n");
        scanf("%d", &escolhajogador);

      
        if (escolhajogador == 1) {
            // Carta 1
            printf("Carta 1 (São Paulo):\n");
            printf("Estado: %s\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("População: %d\n", pop1);
            printf("Área: %.2f Km²\n", area1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Pontos turísticos: %d\n", pontos1);
            printf("Densidade populacional: %.2f hab/km²\n", Densidade1);
            printf("PIB per capita: %.2f reais\n", pibpercapita1);
            printf("Super poder: %.2f\n", super1);
        } else if (escolhajogador == 2) {
            // Carta 2
            printf("Carta 2 (Rio de Janeiro):\n");
            printf("Estado: %s\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("População: %d\n", pop2);
            printf("Área: %.2f Km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Pontos turísticos: %d\n", pontos2);
            printf("Densidade populacional: %.2f hab/km²\n", Densidade2);
            printf("PIB per capita: %.2f reais\n", pibpercapita2);
            printf("Super poder: %.2f\n", super2);
        } else {
            printf("Opção inválida\n");
            return 0;
        }

      
        printf("\nEscolha o primeiro atributo:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super poder\n");
        scanf("%d", &atributo1);

        
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        scanf("%d", &atributo2);

        
        if (atributo2 == atributo1) {
            printf("O segundo atributo não pode ser o mesmo que o primeiro!\n");
            return 0;
        }

        
        float valor1 = 0, valor2 = 0;
        float soma1 = 0, soma2 = 0;

       
        if (atributo1 == 1) {
            valor1 = pop1;
            valor2 = pop2;
        } else if (atributo1 == 2) {
            valor1 = area1;
            valor2 = area2;
        } else if (atributo1 == 3) {
            valor1 = pib1;
            valor2 = pib2;
        } else if (atributo1 == 4) {
            valor1 = pontos1;
            valor2 = pontos2;
        } else if (atributo1 == 5) {
            valor1 = Densidade1;
            valor2 = Densidade2;
        } else if (atributo1 == 6) {
            valor1 = pibpercapita1;
            valor2 = pibpercapita2;
        } else if (atributo1 == 7) {
            valor1 = super1;
            valor2 = super2;
        }

        if (atributo2 == 1) {
            soma1 = pop1;
            soma2 = pop2;
        } else if (atributo2 == 2) {
            soma1 = area1;
            soma2 = area2;
        } else if (atributo2 == 3) {
            soma1 = pib1;
            soma2 = pib2;
        } else if (atributo2 == 4) {
            soma1 = pontos1;
            soma2 = pontos2;
        } else if (atributo2 == 5) {
            soma1 = Densidade1;
            soma2 = Densidade2;
        } else if (atributo2 == 6) {
            soma1 = pibpercapita1;
            soma2 = pibpercapita2;
        } else if (atributo2 == 7) {
            soma1 = super1;
            soma2 = super2;
        }

       
        printf("\n### RESULTADO DA COMPARAÇÃO ###\n");
        printf("Estados: %s vs %s\n", estado1, estado2);
        printf("Atributo 1: %.2f vs %.2f\n", valor1, valor2);
        printf("Atributo 2: %.2f vs %.2f\n", soma1, soma2);
        
        if (soma1 > soma2) {
            printf("A carta %s venceu!\n", estado1);
        } else if (soma1 < soma2) {
            printf("A carta %s venceu!\n", estado2);
        } else {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("As regras do jogo são:\n");
        printf("Você deve escolher dois atributos de uma carta e comparar com a carta do adversário.\n");
        printf("A carta com maior soma de atributos vence. No caso de empate, a rodada é considerada empatada.\n");
        break;

    case 3:
        printf("Saindo do jogo...\n");
        return 0;
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}