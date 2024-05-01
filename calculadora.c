#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"Portuguese");
    menu();
    return 0;
}

void menu(){
    int escolha;

    printf("Escolha uma operação a ser realizada:");
    printf("\n1.Adição \n 2.Subtração \n 3.Multiplicação \n 4.Divisão \n 5.Finalizar \n A opção selecionada é:");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            soma();
            break;

        case 2:
            subt();
            break;

        case 3:
             mult();
             break;

        case 4:
            divisao();
            break;

        case 5:
            printf("Saindo........");
            system("pause");
            system("exit");
            break;
            }
}
void soma(){
    int n1, n2, resultado;

    printf("\nDigite um número:\n");
    scanf("%d", &n1);
    printf("Digite outro número:\n");
    scanf("%d", &n2);

    resultado = n1 + n2;

    printf("O resultado da adição é de: %d\n", resultado);

    system("pause");
    system("cls");
    menu();
}
void subt(){
    int n1, n2, resultado;

    printf("\nDigite um número:\n");
    scanf("%d", &n1);
    printf("Digite outro número:\n");
    scanf("%d", &n2);

    while(n1 < n2){
        printf("O primeiro número é menor que o segundo, impossivel fazer a subtração, tente novamente:");
        printf("\nDigite um número:\n");
        scanf("%d", &n1);
        printf("Digite outro número:\n");
        scanf("%d", &n2);
    }

    resultado = n1 - n2;

    printf("O resultado da subtração é de: %d\n", resultado);

    system("pause");
    system("cls");
    menu();
}
void divisao(){
    float n1, n2, resultado;

    printf("\nDigite um número:\n");
    scanf("%f", &n1);
    printf("Digite outro número:\n");
    scanf("%f", &n2);

    resultado = n1 / n2;

    printf("O resultado da divisão é de: %.2f\n", resultado);

    system("pause");
    system("cls");
    menu();
}
void mult(){
    float n1, n2, resultado;

    printf("\nDigite um número:\n");
    scanf("%f", &n1);
    printf("Digite outro número:\n");
    scanf("%f", &n2);

    resultado = n1 * n2;

    printf("O resultado da multiplicação é de: %.2f\n", resultado);

    system("pause");
    system("cls");
    menu();
}






