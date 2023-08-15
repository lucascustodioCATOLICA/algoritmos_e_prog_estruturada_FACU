#include <stdio.h>

int main() {
    const int SIZE = 50;
    char nome[SIZE];
    int idade;
    char matricula[SIZE];
    char endereco[SIZE];
    char curso[SIZE];
    int periodo;
    char disciplinas[SIZE];
    float valorMensalidade;

    printf("Digite o nome: ");
    fflush(stdin); // limpa o buffer do teclado
    fgets(nome, SIZE, stdin);

    printf("Digite a IDADE: ");
    fflush(stdin); // limpa o buffer do teclado
    scanf("%d", &idade);

    printf("Digite a MATRICULA: ");
    fflush(stdin); // limpa o buffer do teclado
    fgets(matricula, SIZE, stdin);

    printf("Digite a ENDERECO: ");
    fflush(stdin); // limpa o buffer do teclado
    fgets(endereco, SIZE, stdin);

    printf("Digite o CURSO: ");
    fflush(stdin); // limpa o buffer do teclado
    fgets(curso, SIZE, stdin);

    printf("Digite o PERIODO: ");
    fflush(stdin); // limpa o buffer do teclado
    scanf("%d", &periodo);

    printf("Digite as DISCIPLINAS: ");
    fflush(stdin); // limpa o buffer do teclado
    fgets(disciplinas, SIZE, stdin);

    printf("Digite o VALOR DA MENSALIDADE: ");
    fflush(stdin); // limpa o buffer do teclado
    scanf("%f", &valorMensalidade);

    printf("\n- - - - -\n\n");

    printf("NOME: %s", nome);
    printf("IDADE: %d \n", idade);
    printf("MATRICULA: %s", matricula);
    printf("ENDERECO: %s", endereco);
    printf("CURSO: %s", curso);
    printf("PERIODO: %d \n", periodo);
    printf("DISCIPLINAS: %s", disciplinas);
    printf("VALOR DA MENSALIDADE: %f", valorMensalidade);

    return 0;
}