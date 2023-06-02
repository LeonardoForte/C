#include <stdio.h>

int main() {
  int opcao;
  float valor, valor_com_juros;

  printf("Bem-vindo(a)!\n\n");
  printf("Digite o valor da compra: R$ ");
  scanf("%f", &valor);

  printf("\nEscolha uma opcao de pagamento:\n");
  printf("1 - A vista sem juros e com desconto (10%%)\n");
  printf("2 - Parcelado 2x sem juros\n");
  printf("3 - Parcelado em 3 com juros (5%%)\n");
  printf("Opcao: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      valor_com_juros = valor * 0.9;
      printf("\nValor final da compra: R$ %.2f\n", valor_com_juros);
      break;
    case 2:
      printf("\nValor das parcelas: R$ %.2f\n", valor/2);
      printf("Valor final da compra: R$ %.2f\n", valor);
      break;
    case 3:
      valor_com_juros = valor * 1.05;
      printf("\nValor das parcelas: R$ %.2f\n", valor_com_juros/3);
      printf("Valor final da compra: R$ %.2f\n", valor_com_juros);
      break;
    default:
      printf("\nOpcao invalida!\n");
  }

  return 0;
}