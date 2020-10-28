/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1180
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tamanhoVetor, valor, menor, posicao;
    cin >> tamanhoVetor;
    int vetor[tamanhoVetor];
    
    for(int i = 0; i < tamanhoVetor; i ++){
        cin >> valor;
        vetor[i] = valor;        
    }
    
    for(int j = 0; j < tamanhoVetor; j ++){
        
        if(j == 0){
            menor = vetor[0];
            posicao = 0;
        } else{
            if(vetor[j] < menor){
                menor = vetor[j];
                posicao = j;
            }
        }
    }   
    cout << "Menor valor: " << menor << endl <<  "Posicao: " << posicao << endl;
}