#include <iostream>
using namespace std;
 
int main() {

  int qtd_caixas, qtd_esmeraldas, n_esmeralda;
  cin >> qtd_caixas;
  int vetor[qtd_caixas];

  for(int i = 0; i < qtd_caixas; i ++){
    cin >> vetor[i];
  }

  cin >> n_esmeralda;

  for(int j = 0; j < qtd_caixas; j ++){
    if(vetor[j] == n_esmeralda){
      cout << vetor[j];
      break;
    } else{
      if(j == (qtd_caixas-1)){
        cout << -1 << endl;
        break;
      }
    }
  }
}

/**
Sonic perdeu uma das Esmeraldas do Caos!! Se essa jóia cair nas mãos do Dr. Eggman ninguém sabe do que ele seria capaz.
Sonic sabe que aesmeralda está dentro de uma caixaque tem um determinado número. Sua tarefa é, dada uma sequência de caixas e o número da Esmeralda do Caos,
determinar se Sonic pode recuperar a Esmeralda.

Entrada (E): A entrada possui três linhas. A primeira linha contém um inteiros ‘N’ (1 ≤ N ≤ 1000), representando o número de caixas onde pode estar a Esmeralda do Caos.
A segunda linha contém uma sequencia de ‘N’ inteirosn1, n2, ..., n n representando os números das esmeraldas que estão nas caixas, sendo 1 ≤ ni ≤ 1000. Por fim, na terceira linha será dado um
inteiro ‘C’ (1 ≤ N ≤ 1000) que é o número da Esmeralda do Caos.

Saída (S): A saída consiste em uma única linha contendo um número inteiro: O número da Esmeralda do Caos, caso ela se encontre na sequência de caixas dada, ou -1 caso contrário.

Exemplo:
E --> 8 1 2 4 3 5 6 7 8 4 | S --> 4
E --> 10 12 1 4 7 9 8 1 2 3 90 6 | S --> -1
*/