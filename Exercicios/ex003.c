#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Qual é o seu nome? ");
    char nome[20];
    fgets(nome, 20, stdin);
    printf("Quantos anos você tem? ");
    int idade;
    scanf("%i", &idade);
    printf("Qual é o seu peso? (Kg) ");
    float peso;
    scanf("%f", &peso);
    printf("\n--------<<< PROCESSANDO >>>--------\n");
    printf("Muito prazer, %sVocê tem %i anos e pesa %.2fKg, correto?\nFIM.", nome, idade, peso);
}
