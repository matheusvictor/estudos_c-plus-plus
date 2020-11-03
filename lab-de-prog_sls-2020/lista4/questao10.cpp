//https://www.urionlinejudge.com.br/judge/pt/problems/view/2167
#include <iostream>
using namespace std;

int main(){
    
    int numero_testes, rpm;
    bool sem_queda = true;

    cin >> numero_testes;

    int velocidades[numero_testes];

    for(int i = 0; i < numero_testes; i++){
      cin >> rpm;
      velocidades[i] = rpm;
    }

    for(int j = 0; j < numero_testes; j++){
      if(velocidades[j+1] < velocidades[j]){
        sem_queda = false;
        cout << (j+2) << endl;
        break;
      }
    }
    
    if(sem_queda){
      cout << 0 << endl;
    }
    return 0;
}