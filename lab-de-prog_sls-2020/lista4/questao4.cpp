/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1175
*/

#include <iostream>
//#include <iomanip>
using namespace std;
 
int main() {

  int tamanhoVetor = 3, contador = 0;
  int vetor[tamanhoVetor];

  for(int i = 0; i < tamanhoVetor; i++){
    cin >> vetor[i];
  }

  for(int j = (tamanhoVetor-1); j >= 0; j--){
    cout << "N[" << contador << "] = " << vetor[j] << endl;
    contador++;
  }  
}