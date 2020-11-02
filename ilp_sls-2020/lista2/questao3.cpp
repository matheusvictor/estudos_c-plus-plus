#include <iostream>
using namespace std;
 
int main() {

  int numero, divisores = 0;
  cin >> numero;
    
  for (int i = 1; i <= numero; i++) {
    if (numero % i == 0) { 
        divisores ++;
    }
  }

  if (divisores != 2)
    cout << numero << " nao eh primo";
  else
    cout << numero << " eh primo";  
}

/**
Na matemática, um Número Primo é aquele que pode ser dividido somentepor 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

Entrada (E): A entrada contém um inteiro N(1 ≤N≤ 2000), que pode ser ou não,um número primo.
Saída (S): Para cada caso de teste de entrada, imprima a mensagem “N eh primo” ou “N nao eh primo”, de acordo com a especificação fornecida.

Exemplos:
E --> 1259 | S --> 1259 eh primo
E --> 22 | S --> 22 nao eh primo
*/