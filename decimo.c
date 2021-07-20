#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    float n;
    printf("Digite um número real: ");
    scanf("%f", &n);
    printf("Você digitou o número %.1f", n);
}
