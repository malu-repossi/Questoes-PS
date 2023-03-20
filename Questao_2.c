/*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a 
sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/


#include <stdio.h>

int fibonacci (int num);
void confereFibonacci (int n);

int main (){
    int numero;

    printf("Digite o numero que deseja:\n");
    scanf("%d", &numero);

    confereFibonacci (numero);
}

void confereFibonacci(int n){

    if(n == 0 || n == 1 || n == 2)
        printf("Esse numero pertence a sequencia de fibonacci\n");
    else {
        if (n == fibonacci(n))
            printf("Esse numero pertence a sequencia de fibonacci\n");
        else
            printf("Esse numero nao pertence a sequencia de fibonacci\n");
    }
}

int fibonacci(int num){
    int i, fib1 = 1, fib2 = 1, soma;
    for (i = 3; i <= num; i = i + 1)
       {
         soma = fib1 + fib2;
         fib1 = fib2;
         fib2 = soma;
       }
       return fib2;
     }
