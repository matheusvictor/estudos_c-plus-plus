//https://www.urionlinejudge.com.br/judge/pt/problems/view/1178

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int tamanhoVetor = 100;
    double vetor[tamanhoVetor], valor;
    cin >> valor;
    
    for(int i = 0; i < tamanhoVetor; i++){
      if(i == 0){
        vetor[i] = valor;
      } else{
        valor = valor / 2;
        vetor[i] = valor;
      }

      cout << "N[" << i <<"] = " << fixed << setprecision(4) << vetor[i] << endl;
    }
    return 0;
}