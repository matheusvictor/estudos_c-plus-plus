// https://www.urionlinejudge.com.br/judge/pt/problems/view/1177

#include <iostream>
using namespace std;

int main(){
    
    int tamanhoVetor = 1000, vetor[tamanhoVetor], valor, contador = 0;
    cin >> valor;
    
    for(int i = 0; i < tamanhoVetor; i++){
      vetor[i] = contador;
      contador ++;

      if(contador == valor){
        contador = 0;
      }

      cout << "N[" << i <<"] = " << vetor[i] << endl;
    }
    return 0;
}