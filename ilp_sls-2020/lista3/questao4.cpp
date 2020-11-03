#include <iostream>
using namespace std;
 
int main() {

  int operacao, dimensao, numero_escalar;
  cin >> operacao >> dimensao;

  int componentes_vetor1[dimensao], componentes_vetor2[dimensao];

  for(int i = 0; i < dimensao; i++){
    cin >> componentes_vetor1[i];
  }

  if(operacao == 3){
    cin >> numero_escalar;
    for(int j = 0; j < dimensao; j++){
      if(j != (dimensao)){
            cout << " ";
      }
      cout << (componentes_vetor1[j] * numero_escalar);
    }
    cout << endl;
  } else{
      for(int k = 0; k < dimensao; k++){
        cin >> componentes_vetor2[k];
      }

      if(operacao == 1){
        for(int l = 0; l < dimensao; l++){
          if(l != (dimensao)){
            cout << " ";
          }
          cout << (componentes_vetor1[l] + componentes_vetor2[l]);          
        }
        cout << endl;
      } else{
        int resultado = 0;
        for(int m = 0; m < dimensao; m++){
          resultado += (componentes_vetor1[m] * componentes_vetor2[m]);
        }
        cout << resultado << endl;
      }
  }
  return 0;
}

/**
As avaliações da disciplina de Geometria Analítica estão próximas! E o conteúdo apresentado até o momento trata sobre operações básicas de vetores N-dimensionais:
soma de dois vetores, produto escalar e multiplicação de vetor por escalar. Você pensou que seria uma boa ideia testar seu conhecimento implementando calculadora que realiza essas operações.

Entrada (E): A entrada é composta por dois valores inteiros representando, respectivamente, a operação da calculadora ‘O’ (de acordo com a tabela abaixo, 1, 2 ou 3) e, a dimensão ‘D’ (1 <= D <= 100)
dos vetores envolvidos na operação. Na próxima linha serão dadosos ‘D’ números inteiros Xi(-103 <= Xi <= 103) que representam os componentes do primeiro vetor. Na próxima linha serão dados os ‘D’ números inteiros Xi (-103 <= Xi <= 103)
representam os componentes do segundo vetor. No caso  da  operação  ser  multiplicação  de vetor por escalar, só teremos a passagem de um vetor com seus ‘D’ componentes, seguido de um número inteiro ‘N’ (1<= N <= 1000), que representa o escalar.

Nome da operação                    |       Código da operação      |       Entradas compatíveis
Soma de dois vetores                                1                        Dois vetores em R^N
Produto escalar                                     2                        Dois vetores em R^N
Multiplicação de vetor por escalar                  3                      Um vetor R^N e um número real

Saída (S): A saída é o resultado da operação selecionadasobre as entradas. Na tabela abaixo são exemplificadas as entradas e saídas para cada uma das três operações da calculadora. Os componentes dos vetores resultantes, caso exista mais de um, devem
ser separados por espaço.

Exemplos:
E --> 1 3 1 2 3 4 5 6 | S --> 5 7 9
E --> 2 3 1 2 3 4 5 6 | S --> 32
E --> 3 3 1 2 3 2 | S --> 2 4 6
*/