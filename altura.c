#include<stdio.h>
int main(){
    float altura,altu_maior,altu_menor;
    int i;

    printf("Digite a altura de 10 pessoas:\n");
    scanf("%f", &altura);
    altu_menor=altura;
    altu_maior=altura;

    for(i=1; i< 10; i++){
        scanf("%f",&altura);
        if (altura<altu_menor){
            altu_menor=altura;
        }
        if(altura>altu_maior){
            altu_maior=altura;
        }
    }

printf("Menor altura: %.2f\n", altu_menor);
printf("Maior altura: %.2f\n", altu_maior);

}
