//https://www.urionlinejudge.com.br/judge/pt/problems/view/1179

#include <iostream>
using namespace std;

int main(){

  int vetorPar[5], vetorImpar[5], qtdNumeros = 15, numero, qtdPar = 0, qtdImpar = 0;

  for(int i = 0; i < qtdNumeros; i++){
    cin >> numero;

    if(numero % 2 == 0){
      /*a variável qtdPar servirá como contador e indicará o índice do vetorPar onde será
      armazenado o número digitado*/
      vetorPar[qtdPar] = numero;
      qtdPar++;
      //caso haja 5 números pares, estes serão impresos      
      if(qtdPar == 5){
        for(int j = 0; j < 5; j++){
          cout << "par[" << j << "] = " << vetorPar[j] << endl;          
        }
        qtdPar = 0; //contador de números pares é zerado novamente
        int vetorPar[5]; //vetor é inicializado novamente
      }
    }    
    else{
      //se o número for ímpar, será guardado no seu respectivo vetor
      vetorImpar[qtdImpar] = numero;
      qtdImpar++;
      
      if(qtdImpar == 5){
        for(int k = 0; k < 5; k++){
          cout << "impar[" << k << "] = " << vetorImpar[k] << endl;          
        }
        qtdImpar = 0;
        int vetorImpar[5];
      }  
    }   
  }
  /**Se os vetores não forem "estourados" anteriormente, serão impressos N números armazenados, sendo N
  o número de ímpares ou pares identificados pelos seus respectivos contadores.
  */
  for(int l = 0; l < qtdImpar; l++){
      cout << "impar[" << l << "] = " << vetorImpar[l] << endl; 
  }

  for(int m = 0; m < qtdPar; m++){
      cout << "par[" << m << "] = " << vetorPar[m] << endl; 
  }
  return 0;
}