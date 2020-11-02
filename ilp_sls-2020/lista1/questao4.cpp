#include <iostream>
using namespace std;

int main(){

  int t1, t2, t3, t4, t5, t6;
  
  cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6;
  
  int total = t1 + t2 + t3 + t4 + t5 + t6;

  cout << total;
  
}

/**
Luffy e o Bando dos Chapéus de Palhasão um bando de piratas que encontramtesouros a cada ilha que passam.
Luffy estáprecisando de um tesoureiro, algúem que façaas contas dos tesouros encontrados.
Para isso, o bando precisa da sua ajuda.

Entrada:
A  entrada possui uma sequência de 6 números (t1, t2, ..., t6),
sendo (1 <= ti <=10) representando os valores em ouro dos tesouros encontrados até agora.
Sua tarefa é dizer o valor total de tesouros do bando.

Saída:
 saída consiste em uma única linha contendo um número inteiro:
 A soma do valor de todos os tesouros dos Chapéus de Palha.

 Entrada --> 1 2 4 3 5 6 | Saída --> 21
 Entrada --> 2 4 7 9 8 10 | Saída --> 40
*/