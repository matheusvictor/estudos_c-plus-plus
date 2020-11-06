//https://www.urionlinejudge.com.br/judge/pt/problems/view/1176

#include <iostream>
using namespace std;

int main(){
    int qtd_testes, numero, fibNumero;
    cin >> qtd_testes;

    for(int i=0; i < qtd_testes; i++){
      cin >> numero;
      int fib[numero];

      for(int j = 0; j <= numero; j++){
        if(j == 0){
          fib[0] = 0;
        } else if(j == 1){
          fib[1] = 1;
        } else{
          fib[j] = fib[j-1] + fib[j-2];
        }
      }
      cout << "Fib(" << numero << ") = " << fib[numero] << endl;
    }
    return 0;
}