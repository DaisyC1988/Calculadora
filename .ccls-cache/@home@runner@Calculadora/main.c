// Usuário Github: DaisyC1988

// O código a baixo realiza seis tipos de cálculos matemáticos, que deve ser
// escolhido pelo usuário.

#include <math.h>  // Biblioteca
#include <stdio.h> // Biblioteca

int main(void) { // Inicio do programa

  int operacao, op, sair = 1; // Declaração da variável do tipo int
  float valor1, valor2, resultadoSom, resultadoSub, resultadoDiv, resultadoMul,
      resultadoPot, resultadoRaiz; // Declaração da variável do tipo float

  printf("\nAutora: Daisy Camargo Da Silva\nCurso: Análise E Desenvolvimento "
         "De Sistemas\nMatrícula: 202020869\n\n"); // Impriminto uma mensagem na
                                                   // tela
  do {
    printf(
        "\nOlá, escolha a operação que deseja realizar:\n1- Raiz Quadrada\n2- "
        "Soma\n3- Subtração\n4- Divisão\n5- Multiplicação\n6- Potênciação\n\n");
    scanf("%i", &operacao); // Guardando a resposta dentro da variável indicada

    if (operacao >= 1 && operacao <= 6) {
      if (operacao == 1) // Estrutura de decisão, se escolher a opção 1 entra aqui
      {
        printf("\nDigite um número: "); // Mensagem solicitando que usuário
                                        // informe um número
        scanf("%f", &valor1); // Guarda a resposta dentro da variável indicada
        resultadoRaiz = sqrt(valor1); // cálculo da raiz quadrada, a função sqrt
        printf("\nA raiz quadrada do número informado é: %.2f\n\n ",
               resultadoRaiz); // Imprimindo o resultado do cálculo na tela
      } else if (operacao == 2) // Estrutura de decisão, se escolher a opção 2 entra aqui
      {
        printf("\nDigite o 1 valor: "); // Mensagem solicitando que usuário
                                        // informe o primeiro valor
        scanf("%f", &valor1); // Guarda a resposta dentro da variável indicada
        printf("Digite o 2 valor: "); // Mensagem solicitando que usuário
                                      // informe o segundo valor
        scanf("%f", &valor2); // Guarda a resposta dentro da variável indicada
        resultadoSom = valor1 + valor2; // realizando o cálculo de soma
        printf(
            "\nA soma dos valores informado é: %.2f\n\n ",
            resultadoSom); // Imprimindo o resultado do cálculo de soma na tela
      } else if (operacao == 3) // Estrutura de decisão, se escolher a opção 3 entra aqui
      {
        printf("\nDigite o 1 valor: "); // Mensagem solicitando que usuário
                                        // informe o primeiro valor
        scanf("%f", &valor1); // Guarda a resposta dentro da variável indicada
        printf("Digite o 2 valor: "); // Mensagem solicitando que usuário
                                      // informe o segundo valor
        scanf("%f", &valor2); // Guarda a resposta dentro da variável indicada
        resultadoSub = valor1 - valor2; // Realizando o cálculo de soma
        printf("\nA subtração dos valores informado é: %.2f\n\n ",
               resultadoSub); // Imprimindo o resultado do cálculo de subtração
                              // na tela
      } else if (operacao == 4) // Estrutura de decisão, se escolher a opção 4 entra aqui
      {
        printf("\nDigite o 1 valor (Dividendo): "); // Mensagem solicitando que
                                                    // usuário informe o
                                                    // primeiro valor
        scanf("%f", &valor1); // Guarda a resposta dentro da variável indicada
        printf(
            "Digite o 2 valor (Divisor): "); // Mensagem solicitando que
                                             // usuário informe o segundo valor
        scanf("%f", &valor2); // Guarda a resposta dentro da variável indicada
        if (valor2 != 0) { // Estrutura de decisão, se o valor do dividendo for
                           // diferente de 0
          resultadoDiv = valor1 / valor2; // realizando o cálculo de divisão
          printf("\nA Divisão dos valores informado é: %.2f\n\n ",
                 resultadoDiv); // Imprimindo o resultado do cálculo de divisão
                                // na tela
        } else { // Estrutura de decisão, se o valor do dividendo for 0
          printf(
              "\nO Dividendo não pode ser 0!\n"); // Informando o usuário que o
                                                  // dividendo não pode ser 0.
        }
      }
        else if (operacao == 5) // Estrutura de decisão, se escolher a opção 5 entra aqui
      {
        printf("\nDigite o 1 valor: "); // Mensagem solicitando que usuário
                                        // informe o primeiro valor
        scanf("%f", &valor1); // Guarda a resposta dentro da variável indicada
        printf("Digite o 2 valor: "); // Mensagem solicitando que usuário
                                      // informe o segundo valor
        scanf("%f", &valor2); // Guarda a resposta dentro da variável indicada
        resultadoMul = valor1 * valor2; // Realizando o cálculo de multiplicação
        printf("\nA Multiplicação dos valores informado é: %.2f\n\n ",
               resultadoMul); // Imprimindo o resultado do cálculo de
                              // multiplicação na tela
      } else // Se não escolher nenhuma das opções anteriores entra nessa
             // estrutura aqui
      {
        printf("\nDigite o 1 valor: "); // Mensagem solicitando que usuário
                                        // informe o primeiro valor
        scanf("%f", &valor1); // Guarda a resposta dentro da variável indicada
        printf("Digite o 2 valor: "); // mensagem solicitando que usuário
                                      // informe o segundo valor
        scanf("%f", &valor2); // Guarda a resposta dentro da variável indicada
        resultadoPot =
            pow(valor1, valor2); // Realizando o cálculo de potenciação
        printf("\nA potenciação dos valores informado é: %.2f\n\n ",
               resultadoPot); // Imprimindo o resultado do cálculo de
                              // potenciação na tela
      }
      printf(
          "Deseja realizar mais uma operação? 1(Sim) ou 0(Não)"); // Mensagem solicitando que usuário informe se
                                                                  // quer fazer outra operação ou não
      scanf("%i", &sair); // Armazenando a resposta dentro da váriável sair
    } else { // Estrutura de decisão caso o usuário escolha uma opção de opeção
             // inválida
      printf(" Operação inválida!\r\n"); // Mensagem de operação inválida
    }
  } while (
      sair ==
      1); // Se o usuário escolher fazer outra operação o menu aparece novamente
  printf("\r\nObrigado por utilizar nosso sistema!"); // Mensagem de despedida
  return 0;
}