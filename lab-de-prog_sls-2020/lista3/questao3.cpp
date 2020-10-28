/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1079
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  
  int qtd_alunos;
  cin >> qtd_alunos;
  
  double vetor_medias[qtd_alunos];  
      
  for(int i = 0; i < qtd_alunos; i ++){         
    double n1, n2, n3;            
    cin >> n1 >> n2 >> n3;
    double media = ((n1*2.0) + (n2*3.0) + (n3*5.0))/10.0;           
    vetor_medias[i] = media;
  }
  
  for(int j = 0; j < qtd_alunos; j++){
      cout << fixed << setprecision(1) << vetor_medias[j] << endl;
  }
          
}