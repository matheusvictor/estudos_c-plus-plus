#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  int n_cartas, cartasA, cartasB, pontosA = 0, pontosB = 0;
  cin >> n_cartas;

  for(int a = 1; a <= n_cartas; a ++){
    cin >> cartasA;
    pontosA += cartasA;
  }

  for(int b = 1; b <= n_cartas; b ++){
    cin >> cartasB;
    pontosB += cartasB;
  }

  if((pontosA > 21 && pontosB > 21) || pontosA == pontosB){
    cout << "Empate.";
  } else if(pontosA == 21){
    cout << "Jogador A vence com BlackJack.";    
  } else if(pontosB == 21){
    cout << "Jogador B vence com BlackJack.";
  } else if(pontosA > 21){
    cout << "Jogador B vence com " << pontosB << " pontos.";
  } else if(pontosB > 21){
    cout << "Jogador A vence com " << pontosA << " pontos.";
  } else if(pontosA < 21 && pontosB < 21){
    if(pontosA > pontosB){
    cout << "Jogador A vence com " << pontosA << " pontos.";
    } else{
      cout << "Jogador B vence com " << pontosB << " pontos.";
    }
  }
}