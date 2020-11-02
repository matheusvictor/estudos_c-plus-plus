#include <iostream>
//#include <iomanip>
using namespace std;

int main(){

  int numero_secreto, numero_jogador;

  cin >> numero_secreto;
  cin >> numero_jogador;

  if(numero_secreto != numero_jogador){
    cout << "Você errou!";
  } else {
    cout << "Você acertou!";
  }
  
}

/**
O Guessing Game é um jogo onde o jogador tenta adivinhar um número secretoque é gerado pelo programa. Você foi contratado para desenvolver o Guessing Game.
O programa deve:

    1.Receber o número secreto gerado pelo programa;
    2.Receber o número escolhido pelo jogador;
    3.Comparar os números (secreto e do jogador); e 
    4.Exibir uma mensagem informando se o jogador acertou o número ou não.

Entrada (E):
A entrada é composta por dois números inteiros  ‘X’, ‘Y’ (0 <= ‘X’, ‘Y’ <= 100), querepresentam, respectivamente, o número secreto e o número do jogador.

Saída (S): 
O programa deve comparar os números e informar se o jogador acertou ou errou onúmero secreto, imprimindo a frase “Você errou!” ou “Você acertou!”, sem aspas.

Exemplos:
E --> 99 10 | S --> Você errou!
E --> 10 10 | S --> Você acertou!
*/