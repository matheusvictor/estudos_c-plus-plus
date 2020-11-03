#include <iostream>
using namespace std;
 
int main() {

  int qtd_itens;
  cin >> qtd_itens;
  
  int mochila[qtd_itens];

  for(int i = 0; i < qtd_itens; i ++){
    cin >> mochila[i];
  }

  for(int j = (qtd_itens-1); j >= 0; j --){
    if(j != (qtd_itens-1)){
      cout << " ";
    }
    cout << mochila[j];
  }
}

/**
Will é um vendedor que mora na vila de Rynoka e sai em aventuras desbravando masmorras para conseguir bons equipamentos e vendê-los
em sua loja. Mas Will é um rapaz muito metódico, e, toda vez que retorna de uma jornada, ele esvazia a sua mochila retirando um item por vez,
sempre do último adquirido até o primeiro. Sua tarefa é fazer um programa que, dado uma lista de itens na mochila de Will, você deve mostrar na tela
a ordem deles após Will retirá-los da mochila.

Entrada (E): A primeira linha contém um inteiro ‘N’ (1 <= N <= 103), representando o número de itens na mochila de Will. A segunda linha consiste de
‘N’ inteiros ‘I’(1 <= I <= 103) representando os itens na sequência em que foram colocados na mochila (podem existir itens repetidos).

Saída (S): A saída consiste de uma linha na qual você deverá imprimir os itensna ordem que Will vai tirá-los da mochila.

Exemplo:
E --> 5 1 2 3 4 5 | S --> 5 4 3 2 1
*/