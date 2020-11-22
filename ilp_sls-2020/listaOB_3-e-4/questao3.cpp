#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  int numeroBaloes, balaoAzarado, pontuacaoCorreta = 0, pontuacaoErrada = 0;
  cin >> numeroBaloes;

  int pontos[numeroBaloes];

  for(int i = 0; i < numeroBaloes; i++){
    cin >> pontos[i];
  }

  cin >> balaoAzarado;

  for(int i = 0; i < numeroBaloes; i++){
    if(pontos[i] == balaoAzarado){
      pontuacaoErrada -= pontos[i];
    } else{
      pontuacaoCorreta += pontos[i];
    }
  }
  
  int pontuacaoFinal = pontuacaoCorreta + pontuacaoErrada;
  
  cout << pontuacaoFinal << endl;
}