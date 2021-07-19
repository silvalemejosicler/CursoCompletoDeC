#import <stdio.h>
void main() {
    unsigned int idade = 28;
    float peso = 85.9;
    char sexo = 'M';
    char *nome = "Josicler";

    printf("%s é do sexo %c, tem %i anos e pesa %.1fKg", nome, sexo, idade, peso);
}
