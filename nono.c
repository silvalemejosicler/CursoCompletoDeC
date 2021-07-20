#include <stdio.h>
void main() {
    char nome[30];
    char ender[40];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("Seu endereço: ");
    fflush(stdin);
    gets(ender);
    printf("Você digitou \"%s\" que mora em \"%s\"", nome, ender);
}
