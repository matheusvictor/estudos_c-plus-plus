#include <iostream>
using namespace std;
 
int main() {
  int numeroDias, passos, numeroTestes, numInicial, numFinal, soma;
  cin >> numeroDias;
  int vetorSomas[numeroDias+1];
  
  /**
  O vetorSomas irá guardar, em cada posição, a soma de todos os números anteriores.
  Ele será inicializado com zero, pois, a primeira soma será equivalente a 0 + primeiro número
  digitado. Assim, o resultado será o número digitado. Do contrário, resutlaria em um número difirente e
  isso afetaria as demais somas.

  Vídeo de explicação: https://www.youtube.com/watch?v=kzZydlDqtNM
  */

  for(int i=1; i <= numeroDias; i++){ //começa pelo índice 1, pois o índice 0 estará preenchido com o número 0
    cin >> vetorSomas[i]; //guarda o número digitado na posição i do vetor
    vetorSomas[i] += vetorSomas[i-1]; //cada número lido na posição i, será somado com o número da posição anterior (i-1)
  }

  cin >> numeroTestes;

  for(int j=0; j < numeroTestes; j++){
    int totalPassos = 0;
    cin >> numInicial >> numFinal;
    numInicial--;
    totalPassos = (vetorSomas[numFinal] - vetorSomas[numInicial]);

    cout << totalPassos << endl;
  }
}

/**
Eduardo é o monitor mais lindo da disciplina de lógica de programação, fato esse incontestável e validado por todos os comitês de beleza do planeta terra.
Apesar disso, seu médico está preocupado com a sua saúde, e propôs corridas diárias a fim de melhorar sua qualidade de vida.
Curioso sobre o total de passos que  havia dado em um intervalo de dias, resolveu que precisava de um programa que dado as informações coletadas sobre passos
diários, pudesse responder essa pergunta para qualquer intervalo de dias. Porém, por qualquer motivo que seja, resolveuterceirizar o desenvolvimento desse programa para os alunos
da instituição em que é monitor.
Será você capaz de ajudar o monitor mais lindo da lógica de programação?

Entrada (E): A primeira linha da entrada possui um inteiro ‘N’ (1 ≤ N ≤ 105), o número de dias que Eduardo já correu. A segunda linha contém N inteiros ‘Ni’(0 ≤ Ni ≤ 104),
a quantidade de passos do i-ésimo dia. A terceira linha apresenta um inteiro ‘Q’ (1 ≤ Q≤ 105), o número de requisições de intervalo a serem respondidas. As  Q  linhas seguintes contêm
dois inteiros cada, ‘Ai’ e ‘Bi’ (1 ≤ Ai ≤ Bi ≤ N), o intervalo de dias que deve-se contar a quantidade total de passos.

Saída (S): Para cada requisição, imprima uma linha com um inteiro, a quantidade total de passos do intervalo requisitado.

Exemplo: 
Entradas:
10
3 5 1 0 9 8 2 5 0 7
3
5 6
5 9
7 7

Saídas:
17
24
2
*/