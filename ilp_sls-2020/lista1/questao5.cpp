#include <iostream>
using namespace std;

int main(){

  int X, Y, Z, H, L;

  cin >> X;
  cin >> Y;
  cin >> Z;
  cin >> H;
  cin >> L; 

  int total = (X * 100) + (Y * 75) + (Z * 50) + (H * 10) + (L * 100);

  cout << total;
}

/**
Rocket League é um famoso jogo de carrinhos jogando futebol.
Os jogadores dirigem veículos turbinados e tentam acertar as bolas para fazer os gols, ou praticar defesas épicas.

Tarefa: 
Ivan Salnicov é um grande jogador de Rocket League. Para saber o rendimento dele em uma partida, ele pretende contratar
um programador para calcular quantos pontos ele conseguiu fazer. Para isso, será dada a quantidade de gols, defesas épicas, defesas normais,
chute em gol e explosão de outros carrinhos provocadas por ele, sabendo quecada um desses eventos valem, respectivamente,
100pts, 75pts, 50pts, 10pts, 100pts.

Entrada (E):
A entrada contém 5 inteiros,  X, Y, Z, H, L (0 <= X, Y, Z, H, L <= 100) que representam, respectivamente, a quantidade de gols, defesas épicas,
defesas normais,chutes em gol e explosão de outros carrinhos.

Saída (S):
A saída vai conter apenas uma linha indicando a quantidade de pontos que Ivan fez naquela partida.

Ex.:
E --> 2 1 3 0 5 | S --> 925
E --> 0 2 2 5 10 | S --> 1300
*/