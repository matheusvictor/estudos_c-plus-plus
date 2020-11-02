#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int caixas, ovos, leite, xicaras;
  long qtd_pudim, tempo;

  cin >> caixas >> ovos >> leite >> xicaras;

  if((caixas/4) <= (ovos/8) && (caixas/4) <= (leite/2) && (caixas/4) <= xicaras){
    qtd_pudim = (caixas /4);
  } else if((ovos/8) <= (caixas/4) && (ovos/8) <= (leite/2) && (ovos/8) <= xicaras){
    qtd_pudim = (ovos / 8);
  } else if((leite/2) <= (caixas/4) && (leite/2) <= (ovos/8) && (leite/2) <= xicaras){
    qtd_pudim = (leite / 2);
  } else if(xicaras <= (caixas/4) && xicaras <= (ovos/8) && xicaras <= (leite/2)){
    qtd_pudim = xicaras;
  }

  tempo = qtd_pudim * 1259;

  long horas = tempo / 3600;
  long resto_horas = tempo % 3600;

  long minutos = resto_horas / 60;
  long resto_minutos = resto_horas % 60;

  long segundos = resto_minutos % 60; 

  cout << horas << ' ' << 'h' << ' ' << minutos << ' ' << 'm' << ' ' << segundos << ' ' << 's';
  return 0;
}

/**
Sam e Dean acabaram de voltar de sua aventura com o Scooby-Doo e decidiram fazeruma festa de comemoração. Sam está querendo fazer uma surpresa para o Dean e sabendoque ele é viciado em Pudim resolveu que seria um monte de pudins, mas não qualquer pudim e sim o especial Pu-Dean!
Sam sabe que para se fazer 1 Pu-Dean perfeito é preciso 1259 segundos de dedicação e dos seguintes ingredientes:

    - 4 caixas de leite condensado
    - 8 ovos
    - 2 litros de leite
    - 1 xícara de açúcar (calda)

Sabendo que Sam tem  ‘C’ caixas de leite condensado, ‘O’ ovos, ‘L’ litros de leite, ‘X’ xícaras de açúcar, e que ele fará o máximo de Pu-Deans que puder com os ingredientes que tem, ajude-o a descobrir qual o total de tempo que ele precisará dedicar na cozinha.

Entrada (E): A   entrada   é   composta   por   4   números   inteiros  C, O, L, X (0 <= C, O, L, X <=1000000000),   representando   caixas   de  leite  condensado,   ovos,   litros   de  leite   e  xícaras   deaçúcar, respectivamente.
Saída (S): A   saída   deve   conter   3   informações   em   números   inteiros  H, M e S,   representandorespectivamente, horas, minutos e segundos gastos por Sam. A saída deve estar no seguinteformato: H ‘h’ M ‘m‘ S ‘s’ 

Exemplo:
E --> 4 8 2 1 | S -->  0 h 20 m 59 s
S --> 17 24 13 14 | S --> 1 h 2 m 57 s
*/