#include <math.h>
#include <stdio.h>

int main(void) {
  int operacao;
  float valor1, valor2, resultadoSom, resultadoSub, resultadoDiv, resultadoMul,
      resultadoPot, resultadoRaiz;

  printf("\nAutora: Daisy Camargo Da Silva; Curso: Análise E Desenvolvimento "
         "De Sistemas; Matrícula: 202020869");
  printf("\nOlá, escolha a operação que deseja realizar: 1-Raiz Quadrada; 2- "
         "Soma, Subtração, Divisão, Multiplicação e Potênciação");
  scanf("%i", &operacao);

  if (operacao == 1) {
    printf("\nDigite um número: ");
    scanf("%f", &valor1);
    resultadoRaiz = sqtr(valor1);
    printf("\nA raiz quadrada do número informado é: %.2f\n\n ", resultadoRaiz);
  }

  else {
    printf("\nDigite o 1 valor: ");
    scanf("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf("%f", &valor2);
    resultadoSom = valor1 + valor2;
    printf("\nA soma dos valores informado é: %.2f\n\n ", resultadoSom);
    resultadoSub = valor1 - valor2;
    printf("\nA subtração dos valores informado é: %.2f\n\n ", resultadoSub);
    resultadoDiv = valor1 / valor2;
    printf("\nA Divisão dos valores informado é: %.2f\n\n ", resultadoDiv);
    resultadoMul = valor1 * valor2;
    printf("\nA Multiplicação dos valores informado é: %.2f\n\n ",
           resultadoMul);
    resultadoPot = pow(valor1, valor2);
    printf("\nA potenciação dos valores informado é: %.2f\n\n ", resultadoPot);
  }

  return 0;
}
