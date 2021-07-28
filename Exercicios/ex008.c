#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n", letra, (letra-1), (letra+1));
}
