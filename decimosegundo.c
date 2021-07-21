#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
    srand(time(NULL));
    int n = rand() % 50 + 1; // Gera entre 0 e 50
    printf("Eu gerei o número (%d)", n);
}
