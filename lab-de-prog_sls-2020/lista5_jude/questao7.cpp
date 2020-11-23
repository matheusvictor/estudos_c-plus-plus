#include <iostream>
using namespace std;

int main(){ 

  int fileiras, cadeiras;
  cin >> fileiras >> cadeiras;

  int salaCinema[fileiras][cadeiras];

  for(int linha=0; linha < fileiras; linha++){
    for(int coluna=0; coluna < cadeiras; coluna++){
      cin >> salaCinema[linha][coluna];   
    }
  }

  for(int linha=0; linha < fileiras; linha++){
    bool continua = true;
    int possibilidade = 0, fileiraEncontrada = 0, corredorEncontrada = 0;
    for(int coluna=0; coluna < (cadeiras-1); coluna++){
      if(salaCinema[linha][coluna] == 0 && salaCinema[linha][coluna+1] == 0){        
        possibilidade++;
        fileiraEncontrada = linha;
        corredorEncontrada = coluna;
        continua = false;          
      }
    }

    if(!continua && possibilidade == 1){  
      cout << "Fileira: " << (fileiraEncontrada+1) << endl;
      cout << "Assentos: " << (corredorEncontrada+1) << " e " << corredorEncontrada+2 << endl;
      break;
    }
  }
  return 0;
}