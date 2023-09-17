#include <stdio.h>

main(){
  //Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante...

    char sexo, corOlhos, corCabelos;
    int idade;
    double salario;
    int totalHabitantes = 0;
    int totalFemininoCastanhosCastanhos = 0;

    printf("Digite os dados dos habitantes (para encerrar, digite idade -1):\n");

    while (1) {
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        if (sexo == 'm' || sexo == 'f') {
            if (sexo == 'f') {
                printf("Cor dos olhos (a/v/c/p): ");
                scanf(" %c", &corOlhos);

                printf("Cor dos cabelos (l/c/p/r): ");
                scanf(" %c", &corCabelos);

                printf("Idade (10-100): ");
                scanf("%d", &idade);

                printf("Salário: ");
                scanf("%lf", &salario);

                if (idade == -1) {
                    break;
                }

                totalHabitantes++;

                if (sexo == 'f' && idade >= 18 && idade <= 35 && corOlhos == 'c' && corCabelos == 'c' && salario >= 0) {
                    totalFemininoCastanhosCastanhos++;
                }
            } else {
                printf("Homem registrado. Continue...\n");
            }
        } else {
            printf("Sexo inválido. Tente novamente.\n");
        }
    }

    if (totalHabitantes > 0) {
        double porcentagem = (double)totalFemininoCastanhosCastanhos / totalHabitantes * 100;
        printf("A porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos, que têm olhos castanhos e cabelos castanhos é %.2lf%%.\n", porcentagem);
    } else {
        printf("Nenhum habitante foi registrado.\n");
    }

 }