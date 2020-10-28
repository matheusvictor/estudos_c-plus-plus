/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1074
*/

#include <iostream>
#include <array>
using namespace std;
 
int main() {
  
  int qnt_numeros;
  cin >> qnt_numeros;
  int vetor_numeros[qnt_numeros];
  
  for(int i = 0; i < qnt_numeros; i ++){
      int numero;      
      cin >> numero;
      vetor_numeros[i] = numero;      
  }
  
  for(int j = 0; j < qnt_numeros; j++){
      if(vetor_numeros[j] == 0){
          cout << "NULL" << endl;          
      } else if(vetor_numeros[j] > 0 && vetor_numeros[j] % 2 == 0){
          cout << "EVEN " << "POSITIVE" << endl;
      } else if(vetor_numeros[j] < 0 && vetor_numeros[j] % 2 == 0){
          cout << "EVEN " << "NEGATIVE" << endl;
      } else if(vetor_numeros[j] > 0 && vetor_numeros[j] % 2 != 0){
          cout << "ODD " << "POSITIVE" << endl;
      } else{
          cout << "ODD " << "NEGATIVE" << endl;
      }
  }
     
}