//https://www.urionlinejudge.com.br/judge/pt/problems/view/1176

#include <iostream>
using namespace std;

int main(){
    
    int qtd_testes, maiorNumero = 0;
    cin >> qtd_testes;
    int vetorNumeros[qtd_testes];

    //guardando todos os números digitados em um vetor
    for(int i = 0; i < qtd_testes; i++){
      cin >> vetorNumeros[i];
      //guardando o maior número digitado em uma variável
      if(i == 0){
        maiorNumero = vetorNumeros[0];
      } else{
        if(vetorNumeros[i] > maiorNumero){
          maiorNumero = vetorNumeros[i];
        }
      }
    }
    
    //imprimindo o teste de maior número
    //cout << "Maior nº:" << maiorNumero << endl;

    //imprimindo o vetor dos números armazenados
    //cout << "Numeros armazenados:" << vetorNumeros[0] <<  vetorNumeros[1] <<  vetorNumeros[2] << endl;

    int fib[maiorNumero];
        
    for(int j = 0; j <= maiorNumero; j++){
        if(j == 0){
          fib[0] = 0;
        } else if(j == 1){
          fib[1] = 1;
        } else{
          fib[j] = fib[j-1] + fib[j-2];
        }
        //imprimindo tds os fibs, de 0 até o maiorNumero
        //cout << endl << "FIB" << fib[j] << endl;
    }
   
    for(int k = 0; k < qtd_testes; k++){
      cout << "Fib(" << vetorNumeros[k] << ") = " << fib[vetorNumeros[k]] << endl;
    }
    return 0;
}