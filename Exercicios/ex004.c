#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome1[20], nome2[20], nome3[20];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    printf("Cadastrando a primeira pessoa:\n");
    printf("-----------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome1, 20, stdin);
    printf("SEXO: [M/F] ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);
    printf("\nCadastrando a segunda pessoa:\n");
    printf("-----------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome2, 20, stdin);
    printf("SEXO: [M/F] ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);
    printf("\nCadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome3, 20, stdin);
    printf("SEXO: [M/F] ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);
    printf("\n\nLISTAGEM COMPLETA");
    printf("\n-------------------------------------\n");
    printf("NOME                 SEXO  NOTA\n");
    printf("%-20s %c %6.1f\n", nome1, sexo1, nota1);
    printf("%-20s %c %6.1f\n", nome2, sexo2, nota2);
    printf("%-20s %c $6.1f\n", nome3, sexo3, nota3);
    printf("---------------------------------------\n");
}
