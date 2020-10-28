/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1173
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int vetor[10];
    int valor;
    cin >> valor;
    
    for(int i = 0; i < 10; i ++){
        if(i == 0){
            vetor[0] = valor;
        } else{
            vetor[i] = vetor[i-1] * 2;
        }
        
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }   
    return 0;
}