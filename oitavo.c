#include <stdio.h>
void main() {
    char r;
    char s;
    printf("Digite só uma letra: ");
    fflush(stdin);
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin);
    s = getchar();
    printf("Você digitou as letras \"%c\" e \"%c\"", r, s);
}
