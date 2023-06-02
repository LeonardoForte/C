#include <stdio.h>

float porcentagem(float valor) {
    float dez;
    dez = valor * 0.10;
    return dez;
}

int main() {
    float valor;
    printf("Digite o valor da conta: ");
    scanf("%f", &valor);
    
    float resultado = porcentagem(valor);
    printf("O valor dos 10 por cento do garcom e: %.2f\n", resultado);

    return 0;
}