#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {

  int qtd_linguagens = 0;
  cin >> qtd_linguagens;

  string nomeLinguagens[qtd_linguagens];
  double pontuacaoLinguagem[qtd_linguagens];

  //inicializando vetores
  for(int i = 0; i < qtd_linguagens; i++){
    nomeLinguagens[i] = "";
    pontuacaoLinguagem[i] = 0;
  }

  //recebendo valores e guardando nos vetores
  for(int i = 0; i < qtd_linguagens; i++){
    cin >> nomeLinguagens[i];
    cin >> pontuacaoLinguagem[i];
  }

  int maior = 0;
  double aux = 0;
  string auxLinguagem = "";

  //ordenação das pontuações por seleção
  for(int i = 0; i < qtd_linguagens - 1; i++){
    maior = i;

    for(int j = i + 1; j < qtd_linguagens; j++){
      if(pontuacaoLinguagem[j] > pontuacaoLinguagem[maior]){
       maior = j;
      }
    }

    aux = pontuacaoLinguagem[i];
    auxLinguagem = nomeLinguagens[i];

    pontuacaoLinguagem[i] = pontuacaoLinguagem[maior];
    nomeLinguagens[i] = nomeLinguagens[maior];

    pontuacaoLinguagem[maior] = aux;
    nomeLinguagens[maior] = auxLinguagem;
  }

  //impressaõ das pontuações
  for(int i = 0; i < qtd_linguagens; i++){
  cout << nomeLinguagens[i] << " ";
  cout << fixed << setprecision(1) << pontuacaoLinguagem[i];
  if(i != (qtd_linguagens-1)){
    cout << " " << endl;
  } else{
    cout << endl;
  }
}
  return 0;
}