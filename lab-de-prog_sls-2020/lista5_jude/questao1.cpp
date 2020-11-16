#include <iostream>
using namespace std;

int main(){

  int numero, soma = 0;
  cin >> numero;

  for(int i = 1; i < numero; i++){
    if(numero % i == 0){
      soma += i;
    }
  }

  if(soma == numero){
    cout << numero << " eh perfeito" << endl;
  } else{
    cout << numero << " nao eh perfeito" << endl;
  }
  return 0;
}

/** Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores 
 * positivos próprios (excluindo ele mesmo) é igual ao próprio número. Por exemplo, o número 6 é perfeito,
 * pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.
 * 
 * Entrada(E): A entrada contém uma linha comum valor inteiro X (1 ≤ X ≤ 500), que pode ser ou não, um número perfeito.
 * 
 * Saída (S): Imprima  a  mensagem  “X  eh  perfeito”  ou  “X  nao  eh  perfeito”,  de  acordo  com  a especificação fornecida.
 * 
 * Exemplos:
 * E --> 6 | S --> 6 eh perfeito
 * E --> 5 | S --> 5 nao eh perfeito
 * E --> 28 | S --> 28 nao eh perfeito
 * E --> 112 | S --> 112 nao eh perfeito
*/

