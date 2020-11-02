#include <iostream>
using namespace std;

int main(){
  int espaco, tempo;
  
  cin >> espaco;
  cin >> tempo;

  int velocidade = espaco/tempo;

  cout << velocidade << endl;
}

/**
A força de aceleração é uma energia no espaço-tempo que o Flash utiliza como fontedos seus poderes.

Para alcançar a velocidade que deseja, o Flash absorve o espaço e otempo da força de aceleração e a transforma em velocidade.

Sua tarefa é calcular avelocidade do Flash, dado o espaço e o tempo.
Entrada: A entrada possui dois números inteiros ‘E’  e ‘T’ (1 <= E <= 500) (1 <= T <= 100) representando espaço e tempo, respectivamente.

Saída: A saída consiste em uma única linha contendo a velocidade alcançada, sendo avelocidade calculada da seguinte forma:  V = E/T.

Sendo V a nossa velocidade desejada e éum número inteiro.
*/