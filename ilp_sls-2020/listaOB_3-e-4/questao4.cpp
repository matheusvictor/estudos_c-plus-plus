#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  //Joia do Poder =0, Joia do Tempo = 7, Joia da Mente = 11, Joia do Espaço = 14, Joia daRealidade = 17, Joia da Alma = 19
  int joias[6] = {0, 7, 11, 14, 17, 19};
  int numeroJoiasColetadas = 0, corretas = 0;

  cin >> numeroJoiasColetadas;

  int identificadorJoias[numeroJoiasColetadas];

  for(int i = 0; i < numeroJoiasColetadas; i++){
    cin >> identificadorJoias[i];
  }

  int joiasOrdenadas[6];

  for(int i = 0; i < numeroJoiasColetadas; i++){ //percorrendo vetor identificadorJoias[]
    for(int j = 0; j < 6; j++){ //varrendo vetor joias
      if(identificadorJoias[i] == joias[j]){
        joiasOrdenadas[corretas] = identificadorJoias[i];
        corretas++;
      }
    }
  }

  if(corretas == 6){
    cout << "Vingadores Avante" << endl;
  } else if(corretas > 0 && corretas < 6){
    for(int i = 0; i < corretas; i++){
      cout << joiasOrdenadas[i] << " ";
    }  
    cout << endl << "Vingadores Atencao" << endl;
  } else{
    cout << "Pizza" << endl;
  }
}