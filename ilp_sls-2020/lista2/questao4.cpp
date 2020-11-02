#include <iostream>
using namespace std;
 
int main() {

  int dias, energia, dano, dia_queda;
  cin >> dias >> energia;

  for(int i = 1; i <= dias; i ++){
    cin >> dano;
    energia -= dano;

    if(energia <= 0){
      dia_queda = i;
      break;
    }     
  } 

  if(energia > 0){
    cout << "Resistiu";
  } else{
    cout << dia_queda;
  }
}

/**
Água, Terra, Fogo, Ar. Há muito tempo, as quatro nações viviam em harmonia, até que tudo mudou quando a nação do fogo decidiu atacar.
Atualmente, a grande cidade de Ba Sing Se é a última grande metrópole que resiste à nação do fogo. Porém, com o retorno do avatar, a
nação do fogo decidiu começar uma campanha contra a grande cidade. Sabendo da campanha da nação do fogo e conhecendo seus poderes de oráculo,
o avatar pediu sua ajuda para saber se a muralha da cidade resistiráaos ataques até a sua chegada, ou se ela cairá.

Entrada (E): A primeira linha contém dois inteiros ‘D’ (1 ≤ D ≤ 100), a quantidade de dias que o avatar irá levar para chegar, e ‘E’ (100 ≤ E ≤ 10000), a energia inicial da muralha da cidade. As próximas ‘D’ linhas terão cada uma um inteiro ‘A’ (1 ≤ A ≤ 100) que representao dano que a nação do fogo fez à energia da muralha em cada dia ‘D’. Se a energia da muralha chegar a zero, a cidade cairá.
Saída (S): A saída consiste  em uma  única linha. Caso a energia  da  muralha seja maior que zero no último dia de ataque antes da chegada do Avatar, você deverá imprimir a mensagem “Resistiu”, ou, caso contrário, você deverá imprimir o dia em que a cidade caiu, ou seja, o dia em que a energia da muralha chegou a zero.

Exemplos:
E --> 
4 400 (4 dias e a energia inicial da muralha)
100 (energia – 100 = 300) (primeiro dia)
100 (energia  – 100 = 200)(segundo dia)
100 (energia – 100 = 100) (terceiro dia)
99 (energia – 90 = 1) (quarto e último dia)
S --> Resistiu

Obs.: O que está escrito entre parêntrses é apenas explicação, não faz parte da entrada.
*/