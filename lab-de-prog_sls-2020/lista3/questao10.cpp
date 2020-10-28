/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1158
*/

#include <iostream>
using namespace std;
 
int main() {

  int qtd_testes, x, y, maior, menor, soma;
  cin >> qtd_testes;

  for(int i = 0; i < qtd_testes; i ++){
    soma = 0; //irá zerar a variável soma a cada vez que passar pelo início do for
    cin >> x >> y;

    if(x % 2 == 0){
      x ++;
      //se x for um número par, somar mais um irá para
      //o próximo, que será um número ímpar
    }
    for(int j = 0; j < y; j ++){
      soma += x;
      x += 2; //caso o if seja verdadeiro, somar o número ímpar obtido + 2, obterá o prox. Exemplo:  3 + 2 = 5
    }
    cout << soma << endl;
  }
}