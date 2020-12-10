#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {

  int numLinhas = 0, numColunas = 0, pontosVida = 0, numTentativas = 0, nInsetos = 0;
  cin >> numLinhas >> numColunas;

  int matriz[numLinhas][numColunas];

  for(int i = 0; i < numLinhas; i++){
    for(int j = 0; j < numColunas; j++){
      cin >> pontosVida;
      matriz[i][j] = pontosVida;
      if(pontosVida == 1){
        nInsetos++;
      }
    }
  }

  cin >> numTentativas;

  int tiroLinha = 0, tiroColuna = 0;
  //lê tiros
  for(int i = 0; i < numTentativas; i++){
    cin >> tiroLinha >> tiroColuna;  
    tiroLinha --; tiroColuna--;
    if(matriz[tiroLinha][tiroColuna] == 1){
      matriz[tiroLinha][tiroColuna] = 0;
      nInsetos--;
    }
  }

  bool matouTodos = false;

  if(nInsetos == 0){
    matouTodos = true;
  }

  if(matouTodos == true){
    cout << "HASTA LA VISTA BABY" << endl;    
  } else{
    cout << "I'LL BE BACK" << endl;
  }
  return 0;
}