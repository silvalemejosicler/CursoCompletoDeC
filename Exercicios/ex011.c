#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número qualquer: ");
    fflush(stdin);
    scanf("%i", &num);
    printf("O número %i que você digitou é %s.\n", num, (num%2==0)?"PAR":"IMPAR");
}
