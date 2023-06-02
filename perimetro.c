#include<stdio.h>

int main(){

    float P, L, C;

    printf("Digite a largura da sala: \n");
    scanf("%e", &L );
    printf("Digite a altura da sala: \n");
    scanf("%e", &C );
    P =  2* (L + C);
    printf("O Perimetro da sala e: ", P);

}