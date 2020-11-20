#include <iostream>
using namespace std;

int main(){
    
    int tamanho = 0, numeroProcurado, posicao;
    bool flag = false;
    cin >> tamanho;
    long long vetorNumeros[tamanho];

    long long fib[tamanho];
        
    for(int j = 0; j <= tamanho; j++){
        if(j == 0){
          fib[0] = 0;
        } else if(j == 1){
          fib[1] = 1;
        } else{
          fib[j] = fib[j-1] + fib[j-2];
        }
    }

    cin >> numeroProcurado;
   
    for(int k = 0; k <= tamanho; k++){
      if(numeroProcurado == fib[k]){
        flag = true;
        posicao = k+1;
        break;
      }
    }

    if(flag == true){
      cout << numeroProcurado << " esta na posicao " << posicao << endl;
    } else{
      cout << numeroProcurado << " nao existe" << endl;
    }

    return 0;
}
/**
Na matemática, a Sucessão de Fibonacci (também chamada de Sequência de Fibonacci) é uma sequência de números inteiros, começando normalmente
por 0 e 1, na qual, cada termo subsequente corresponde à soma dos dois anteriores. A sequência recebeu o nome do matemático italiano Leonardo Fibonacci,
que descreveu, no ano de 1202, o crescimento de uma população de coelhosa partir desta sequência, que, no entanto, já era conhecida na antiguidade. Os números de Fibonacci são,
portanto, os números que compõem a seguinte sequência.

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987,1597, 2584,...

Dessa forma, faça um programa que preencha um vetor com N (2 ≤ N ≤ 50) números em uma sequência de Fibonacci. Após preencher o vetor, implemente uma busca binária, de forma a imprimir a posição
P (1 ≤ P ≤ N) de um número X de Fibonacci, caso o mesmo exista no vetor.

Entrada (E): A entrada contém uma linha com: um valor inteiro N, correspondente à quantidade de números Fibonaccia serem inseridos no vetor; e um número X, correspondente ao número Fibonacci a ser
encontrado com a busca binária.

Saída (S): Imprima a mensagem “X esta na posicao P” ou “X nao existe”, de acordo com a especificação fornecida.

Exemplos:
E --> 11 21 | S --> 21 esta na posicao 9
E --> 11 144 | S --> 144 nao existe
E --> 19 377 | S --> 377 esta na posicao 15
E --> 3 1 | S --> 1 esta na posicao 2 OU 1 esta na posicao 3
E --> 4 0 | S --> 0 esta na posicao 1 
E --> 8 6 | S --> 6 nao existe
*/