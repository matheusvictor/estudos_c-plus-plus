#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {

  int numeroCandidatos = 0;
  cin >> numeroCandidatos;

  int secaoA[numeroCandidatos], secaoB[numeroCandidatos], secaoC[numeroCandidatos];

  //inicializando vetores
  for(int i = 0; i < numeroCandidatos; i++){
    secaoA[i] = 0;
    secaoB[i] = 0;
    secaoC[i] = 0;
  }

  int somaVotos[numeroCandidatos];

  for(int i = 0; i < numeroCandidatos; i++){
    cin >> secaoA[i]; 
  }
  for(int i = 0; i < numeroCandidatos; i++){
    cin >> secaoB[i];
  }
  for(int i = 0; i < numeroCandidatos; i++){
    cin >> secaoC[i];
  }

  //guarda as somas de votos de cada candidato no vetor somaVotos[]
  for(int i = 0; i < numeroCandidatos; i++){
    somaVotos[i] = secaoA[i] + secaoB[i] + secaoC[i];
  }

  int menor = 0, aux = 0;

  for(int i = 0; i < numeroCandidatos - 1; i++){
    menor = i;

    for(int j = i + 1; j < numeroCandidatos; j++){
      if(somaVotos[j] < somaVotos[menor]){
       menor = j;
      }
    }

    aux = somaVotos[i];
    somaVotos[i] = somaVotos[menor];
    somaVotos[menor] = aux;
  }

  for(int i = 0; i < numeroCandidatos; i++){
    cout << somaVotos[i];
    if(i != (numeroCandidatos-1)){
      cout << " ";
    } else{
      cout << endl;
    }
  }
  return 0;
}