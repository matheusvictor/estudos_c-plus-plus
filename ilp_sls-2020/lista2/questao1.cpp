#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  int qtd_pokemon, dano, acrescimo, poder_total;
  cin >> qtd_pokemon;
  int poderes[qtd_pokemon];

  for(int i = 0; i < qtd_pokemon; i ++){
    cin >> dano >> acrescimo;
    poder_total = dano + acrescimo;
    poderes[i] = poder_total;
  }

  for(int j = 0; j < qtd_pokemon; j ++){
    cout << poderes[j] << endl;
  }
}

/**
As habilidades principais dos Pokémon recebem um acréscimo de pontos de dano quando oclima está favorável.
Cada pokémon está limitado a um valor de acréscimo. Seu trabalho será desenvolver um programa que, dado o limite de acréscimo de
um pokémon e o valor atual de pontos de dano da sua habilidade principal, informe com quanto depontos de dano ele vai ficar.

Entrada (E): A primeira linha da entrada contém um valor ‘N’ (1 <= N <= 1000) que representa o número de pokémon que serão fortalecidos pelo clima. Já cada uma das próximas ‘N’ linhas contém o valor‘P’ (1 <= P <= 1000) de pontos de dano do ataque principal de um pokémon e o seu valor ‘M’ (0 <=M <= 1000) de acréscimo.
Saída (S): A saída é composta de ‘N’ linhas, cada uma representando o valor final de pontos de danode cada linha da entrada.

Exemplos:
E --> 3 105 20 122 22 140 50 | S --> 125 144 190
E --> 2 200 2 105 0 | S -->  202 105
*/