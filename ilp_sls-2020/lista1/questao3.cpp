#include <iostream>
using namespace std;

int main(){
  int a, contrato;
  float b;

  cin >> a;
  cin >> b;

  contrato = a * b;

  cout << contrato;
}

/**
Um bruxo é alguém que caça monstros como profissão. Ele aceita contratosde caça de monstros, e apósconcluí-los, coleta o pagamento.
O bruxo tambémpode negociar o seu pagamento, aplicando um bônus que é um fator de multiplicação em cima do valor do contrato.
Um bruxo pediu a você que o ajude a calcular o seu ganho nos contratos. Entrada A entrada é composta por dois inteiros, ‘a’ (1 <= a <= 1000) e  ‘b’ (1.0 <= b <=100.0),
que representam o valor oferecido pelo contrato, e o fator de multiplicação dobônus que o bruxo negociou.

Obs.: O valor de bônus é dado por um valor real (float) com apenas uma casa decimal,que deve ser multiplicado pelo valor do contrato. SaídaA saída consiste em um número inteiro, representando o total ganho pelo bruxoem seus contratos.
*/