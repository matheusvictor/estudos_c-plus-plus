#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
  int numeroPedras, alturaMaiorPedra, alturaPedra;
  bool podePassar = false;
  
  cin >> numeroPedras >> alturaMaiorPedra;
  
  for (int i = 0; i < numeroPedras; i++){    
    cin >> alturaPedra;
    
    if(alturaPedra >= alturaMaiorPedra) {
      podePassar = true;
    }
    
  }

  if (podePassar == false) {
    cout << "Tá safe, o caminho é izi!!!" << endl;
  } else {
    cout << "Você não vai passar!!!" << endl;
  }
}