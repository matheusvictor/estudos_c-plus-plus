#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int l, p;
  double total_Lucas, total_Pedro;

  cin >> l >> p;
  total_Lucas += l;
  total_Pedro += p;

  cin >> l >> p;
  total_Lucas += l;
  total_Pedro += p;

  cin >> l >> p;
  total_Lucas += l;
  total_Pedro += p;
  
  if(total_Lucas == total_Pedro){
    cout << "Empate";
  } else if(total_Pedro > total_Lucas){
    cout << "Pedro";
  } else{
    cout << "Lucas";
  }
  return 0;
}
/**
Lucas está jogando x1 contra seu amigo Pedro no counter strike, porém ele está com dificuldade em
saber quem obteve a maior pontuação geral de abates. Considerando que eles jogaram 3 partidas, sua tarefa
é elaborar um programa que dada apontuação de Pedro e Lucas em cada uma das 3 partidas diga quem obteve
o maior númerode abates total.

Entrada (E): A entrada consiste em 3 linhas contendo 2 inteiros ‘L’, ‘P’  (1 <= ‘L’, ‘P’ <= 100) em cada uma, sendo que L indica a pontuação de Lucas e P a pontuação de Pedro.
Saída (S): A saída consiste em uma linha contendo a palavra “Empate”, caso os dois empatem, o nome “Pedro” caso Pedro tenha obtido uma pontuação de abates total maior que a de Lucas, ou o nome “Lucas”, caso Lucas tenha abates total maior que Pedro.

Exemplo:
E --> 20 32 16 50 100 0 | S --> Lucas
E --> 20 32 14 54 10 0 | S --> Pedro
E --> 16 0 0 8 4 12 | S --> Empate
*/
