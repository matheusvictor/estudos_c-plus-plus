/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1172
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int vetor[10], valor;
    
    for(int i = 0; i < 10; i ++){        
        cin >> valor;
        vetor[i] = valor;
    }
    
    for(int j = 0; j < 10; j ++){
        if(vetor[j] <= 0){
            vetor[j] = 1;
        }
    }
    
    for(int k = 0; k < 10; k ++){
        cout << "X[" << k << "] = " << vetor[k] << endl;
    }
}