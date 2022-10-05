// Usuário Githuub: DaisyC1988

#include <math.h> //biblioteca
#include <stdio.h>

int main(void) { // inicio do programa

  int operacao, op, sair = 1; // declaração da variável do tipo int
  float valor1, valor2, resultadoSom, resultadoSub, resultadoDiv, resultadoMul,
      resultadoPot, resultadoRaiz; // declaração da variável do tipo float

  printf("\nAutora: Daisy Camargo Da Silva\nCurso: Análise E Desenvolvimento "
         "De Sistemas\nMatrícula: 202020869\n\n"); // impriminto uma mensagem na
                                                   // tela
  do {
    printf(
        "\nOlá, escolha a operação que deseja realizar:\n1- Raiz Quadrada\n2- "
        "Soma\n3- Subtração\n4- Divisão\n5- Multiplicação\n6- Potênciação\n\n");
    scanf("%i", &operacao); // guardando a resposta dentro da variável indicada

    if (operacao >= 1 && operacao <= 6) {
      if (operacao ==
          1) // estrutura de decisão, se escolher a opção 1 entra aqui
      {
        printf("\nDigite um número: "); // mensagem solicitando que usuário
                                        // informe um número
        scanf("%f", &valor1); // guarda a resposta dentro da variável indicada
        resultadoRaiz = sqrt(valor1); // cálculo da raiz quadrada, a função sqrt
        printf("\nA raiz quadrada do número informado é: %.2f\n\n ",
               resultadoRaiz); // imprimindo o resultado do cálculo na tela
      } else if (operacao ==
                 2) // estrutura de decisão, se escolher a opção 2 entra aqui
      {
        printf("\nDigite o 1 valor: "); // mensagem solicitando que usuário
                                        // informe o primeiro valor
        scanf("%f", &valor1); // guarda a resposta dentro da variável indicada
        printf("Digite o 2 valor: "); // mensagem solicitando que usuário
                                      // informe o segundo valor
        scanf("%f", &valor2); // guarda a resposta dentro da variável indicada
        resultadoSom = valor1 + valor2; // realizando o cálculo de soma
        printf(
            "\nA soma dos valores informado é: %.2f\n\n ",
            resultadoSom); // imprimindo o resultado do cálculo de soma na tela
      } else if (operacao ==
                 3) // estrutura de decisão, se escolher a opção 3 entra aqui
      {
        printf("\nDigite o 1 valor: "); // mensagem solicitando que usuário
                                        // informe o primeiro valor
        scanf("%f", &valor1); // guarda a resposta dentro da variável indicada
        printf("Digite o 2 valor: "); // mensagem solicitando que usuário
                                      // informe o segundo valor
        scanf("%f", &valor2); // guarda a resposta dentro da variável indicada
        resultadoSub = valor1 - valor2; // realizando o cálculo de soma
        printf("\nA subtração dos valores informado é: %.2f\n\n ",
               resultadoSub); // imprimindo o resultado do cálculo de subtração
                              // na tela
      } else if (operacao ==
                 4) // estrutura de decisão, se escolher a opção 4 entra aqui
      {
        printf("\nDigite o 1 valor (Dividendo): "); // mensagem solicitando que
                                                    // usuário informe o
                                                    // primeiro valor
        scanf("%f", &valor1); // guarda a resposta dentro da variável indicada
        printf(
            "Digite o 2 valor (Divisor): "); // mensagem solicitando que
                                             // usuário informe o segundo valor
        scanf("%f", &valor2); // guarda a resposta dentro da variável indicada
        if (valor2 != 0) { //estrutura de decisão, se o valor do dividendo for diferente de 0
          resultadoDiv = valor1 / valor2; // realizando o cálculo de divisão
          printf("\nA Divisão dos valores informado é: %.2f\n\n ",
                 resultadoDiv); // imprimindo o resultado do cálculo de divisão
                                // na tela
        } else { //estrutura de decisão, se o valor do dividendo for 0
          printf("\nO Dividendo não pode ser 0!\n"); //Informando o usuário que o dividendo não pode ser 0.
        }
      }

      else if (operacao ==
               5) // estrutura de decisão, se escolher a opção 5 entra aqui
      {
        printf("\nDigite o 1 valor: "); // mensagem solicitando que usuário
                                        // informe o primeiro valor
        scanf("%f", &valor1); // guarda a resposta dentro da variável indicada
        printf("Digite o 2 valor: "); // mensagem solicitando que usuário
                                      // informe o segundo valor
        scanf("%f", &valor2); // guarda a resposta dentro da variável indicada
        resultadoMul = valor1 * valor2; // realizando o cálculo de multiplicação
        printf("\nA Multiplicação dos valores informado é: %.2f\n\n ",
               resultadoMul); // imprimindo o resultado do cálculo de
                              // multiplicação na tela
      } else // se não escolher nenhuma das opções anteriores entra nessa
             // estrutura aqui
      {
        printf("\nDigite o 1 valor: "); // mensagem solicitando que usuário
                                        // informe o primeiro valor
        scanf("%f", &valor1); // guarda a resposta dentro da variável indicada
        printf("Digite o 2 valor: "); // mensagem solicitando que usuário
                                      // informe o segundo valor
        scanf("%f", &valor2); // guarda a resposta dentro da variável indicada
        resultadoPot =
            pow(valor1, valor2); // realizando o cálculo de potenciação
        printf("\nA potenciação dos valores informado é: %.2f\n\n ",
               resultadoPot); // imprimindo o resultado do cálculo de
                              // potenciação na tela
      }
      printf("Deseja realizar mais uma operação? 1(Sim) ou 0(Não)"); // mensagem solicitando que usuário informe se quer fazer outra operação ou não
      scanf("%i", &sair); // armazenando a resposta dentro da váriável sair
    } else { //estrutura de decisão caso o usuário escolha uma opção de opeção inválida
      printf(" Operação inválida!\r\n"); // mensagem de operação inválida
    }
  } while (sair == 1); // Se o usuário escolher fazer outra operação o menu aparece novamente
  printf("\r\nObrigado por utilizar nosso sistema!"); //mensagem de despedida
  return 0;
}