/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1174
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int tamanhoVetor = 100;
    float valor, vetor[tamanhoVetor];
    
    for(int i = 0; i < tamanhoVetor; i ++){
        cin >> valor;
        vetor[i] = valor;        
    }
    
    for(int j = 0; j < tamanhoVetor; j ++){        
        if(vetor[j] <= 10){
            cout << "A[" << j << "] = " << fixed << setprecision(1) << vetor[j] << endl;          
        }
    }
    return 0;
}