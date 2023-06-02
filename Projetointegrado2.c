
#include <stdio.h>
#include <stdlib.h>

int main() {
  float preco, valorFinal;
  int opcaoPagamento;

  printf("Digite o preço do produto: ");
  scanf("%f", &preco);

  printf("Escolha a opção de pagamento:\n");
  printf("1 - À vista em dinheiro ou PIX, recebe 10%% de desconto\n");
  printf("2 - À vista no cartão de crédito, recebe 5%% de desconto\n");
  printf("3 - Em duas vezes, preço normal de etiqueta sem juros\n");
  printf("4 - Em três vezes, preço normal de etiqueta mais juros de 10%%\n");
  printf("5 - SAIR\n");
  scanf("%d", &opcaoPagamento);

  switch (opcaoPagamento) {
    case 1:
      valorFinal = preco * 0.9;
      printf("Valor final com 10%% de desconto: R$ %.2f", valorFinal);
      break;
    case 2:
      valorFinal = preco * 0.95;
      printf("Valor final com 5%% de desconto: R$ %.2f", valorFinal);
      break;
    case 3:
      printf("Valor final em duas vezes: R$ %.2f", preco);
      break;
    case 4:
      valorFinal = preco * 1.1;
      printf("Valor final em três vezes com juros de 10%%: R$ %.2f", valorFinal);
      break;
    case 5:
      printf("Programa encerrado.");
      break;
    default:
      printf("Opção inválida.");
      break;
  }

  return 0;
}