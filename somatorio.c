#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 10; i++) {
        soma += i;
    }
    printf("O somatorio de 1 a 10 e: %d\n", soma);
    return 0;
}
