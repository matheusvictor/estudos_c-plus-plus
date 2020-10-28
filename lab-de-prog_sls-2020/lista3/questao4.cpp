/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1080
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  int numero, maior, posicao;

  for(int i = 1; i <= 100; i ++){
    cin >> numero;

    //quando a posição for 1, o maior numero vai ser o primeiro numero inserido
    if(i == 1){
      maior = numero;
      posicao = 1;
    } else if(numero > maior){
      maior = numero;
      posicao = i;
    }
  }
  cout << maior << endl << posicao << endl;
}