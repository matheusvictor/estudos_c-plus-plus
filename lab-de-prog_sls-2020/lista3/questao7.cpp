/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1118
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  int opc;
  double nota1, nota2, media;

  do{
      
    cin >> nota1;
    while(nota1 < 0 || nota1 > 10){
      cout << "nota invalida" << endl;
      cin >> nota1;
    }
    
    cin >> nota2;
    while(nota2 < 0 || nota2 > 10){
      cout << "nota invalida" << endl;
      cin >> nota2;
    }

    media = (nota1 + nota2)/2;
    cout << "media = " << fixed << setprecision(2) << media << endl;

    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> opc;
    while(opc > 2 || opc < 1){
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> opc;
    }

  } while(opc !=2); 
}