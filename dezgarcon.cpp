#include <stdio.h>


float porcentagem (float valor){
    float dez;
    dez = valor * 0.10;
    return dez;
}
float main(){
    float valor;
    float dez;
    printf("Digite o valor da conta:");
    scanf("%f",&valor);
    float resultado = dez;
    printf("O valor dos 10 por cento do garcon e:\n , .%2f", resultado);
    return 0;
}