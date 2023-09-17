
/*#include <stdio.h>

main(){
  //Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 

    char *frutas[] = {"ABACAXI", "MAÇA", "PERA"};
    float precos[] = {5.00, 1.00, 4.00};
    int escolha, quantidade;
    float total_compra = 0.0;

    while (1) {
        
        printf("\nMENU DE FRUTAS:\n");
        for (int i = 0; i < 3; i++) {
            printf("%d => %s - R$%.2f a unidade\n", i + 1, frutas[i], precos[i]);
        }


        printf("Digite o número da fruta que deseja comprar (0 para encerrar): ");
        scanf("%d", &escolha);

      
        if (escolha == 0) {
            break;
        }

      
        if (escolha < 1 || escolha > 3) {
            printf("Escolha inválida. Tente novamente.\n");
            continue;
        }

       
        printf("Quantas unidades de %s você deseja comprar? ", frutas[escolha - 1]);
        scanf("%d", &quantidade);

      
        float valor_parcial = precos[escolha - 1] * quantidade;

     
        total_compra += valor_parcial;

        printf("Valor parcial da compra: R$%.2f\n", valor_parcial);
    }

  
    printf("Valor total da compra: R$%.2f\n", total_compra);

  
}*/