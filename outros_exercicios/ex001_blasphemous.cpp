#include <iostream>

using namespace std;

int main() {

  bool passou = true;
  int numeroFases, faseAtual, statusFase;  

  cout << "Informe o número de fases: ";
  cin >> numeroFases;
  
  int fases[numeroFases];
  
  for(int i = 0; i < numeroFases; i++){
    cin >> statusFase;
    fases[i] = statusFase;
  }

  int vidaPersonagem;
  cout << "Digite a vida do personagem: ";
  cin >> vidaPersonagem;
  
  int vidaInicial = vidaPersonagem;
  int danosCausados = 0;
  
  int tamanhoVetorFases = sizeof(fases) / sizeof(int);
  for (int i = 0; i < tamanhoVetorFases; i++) {
    
    if (fases[i] == 1) {
      danosCausados = 0;
      vidaPersonagem = vidaInicial;
    } else { // fases[i] != 0 && fases[i] > 1
      danosCausados += fases[i];     
      if (danosCausados > vidaPersonagem) {
        passou = false;
        break; 
      }
    }    
  }

  if (passou == false) {
    cout << "You Died" << endl;
  } else {
    cout << "Yes, you can" << endl;
  }

}