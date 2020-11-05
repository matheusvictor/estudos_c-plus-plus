#include <iostream>
using namespace std;
 
int main() {
  int numeroDias, passos, intervalos, numInicial, numFinal, soma;

  cin >> numeroDias;

  int passosDia[numeroDias];

  for(int i=0; i < numeroDias; i++){
    cin >> passos;
    passosDia[i] = passos;
  }

  cin >> intervalos;
  int totalPassos[intervalos];

  for(int j=0; j < intervalos; j++){
    cin >> numInicial >> numFinal;

    for(int k=(numInicial-1); k < numFinal; k++){
      soma += passosDia[k]; 
    }
    totalPassos[j] = soma;
    soma = 0;
  }

  for(int l=0; l < intervalos; l++){
    cout << totalPassos[l] << endl;
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