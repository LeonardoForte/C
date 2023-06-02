#include<stdio.h>
#include<stdlib.h>

float imc(){
    float peso, altura, calc;
    printf("\nDigite o peso do usuario:");
    scanf("%f", &peso);
    printf("\nDigite a altura do usuario:");
    scanf("%f", &altura);
    calc=peso/altura*altura;
    return calc;

}
int main(){
 printf("Seu imc e: ", imc);   
}