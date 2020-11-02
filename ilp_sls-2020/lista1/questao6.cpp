#include <iostream>
using namespace std;

int main(){

  long L, Z, N, U, S;

  cin >> L;
  cin >> Z;
  cin >> N;
  cin >> U;
  cin >> S; 

  long  total = L + Z + N + U + S;

  cout << total;
}

/**
Em One Piece, a tripulaçãodos chapéu de palha está tentando pegar o tesouro deixado pelo antigo rei dos
piratas, Gol D. Roger. Para alcançar esse objetivo, eles avançam na grande linha sem se importar com as
leis impostas pelo governo mundial, muitas vezes encarando a própria marinha.

Como o bando de Luffy é da pior geração, a marinha vive aumentando a recompensa pela captura dos seus membros.
Cansados de recalcular a recompensa do bando toda vez que as recompensas individuais mudam, dadas as recompensas
atuais pela tripulação, calcule qual a recompensa total pelo bando.

Entrada (E):
A entrada possui 5 valores (1 < L, Z, N, U, S < 1 000 000 000) separados por espaço, que representam as recompensas
pelos cinco piratas do bando, em bellies, a moeda do mundo de one piece.

Saída (S):
A saída consiste em uma única linha contendo um número que representao valor total da recompensa pelo bando do chapéu de palha,
que é a soma dasrecompensas dos 5 piratas.

Exemplo:
E --> 300000000 120000000 16000000 30000000 77000000 | S --> 543000000
E --> 500000000 320000000 66000000 200000000 177000000 | S --> 1263000000
*/
