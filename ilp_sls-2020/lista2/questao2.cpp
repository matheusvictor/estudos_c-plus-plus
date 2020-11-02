#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  char inicial;
  int saturacao;

  do{
    cin >> inicial;
    if(inicial == '#'){
      break;
    }else{
      cin >> saturacao;     
      if(saturacao < 90){
        cout << inicial << " " << "Internação" << endl;
      } else{
        cout << inicial << " " << "Alta" << endl;
      }
    }
  }while(inicial != '#');
}

/**
A capacidade que o sangue tem de transportar oxigênio pelo corpo é chamada desaturação.
Facilmente medida com equipamentos como oxímetro de dedo, a saturação éuma das funcionalidades do corpo humano ameaçadas
pelo novo coronavírus. Segundo a OMS (Organização Mundial da Saúde) o nível de saturação ideal está entre 95% e 100%.
Níveis de saturação abaixo de 90% devem ser considerados emergência clínica. Pacientes com baixa saturação são potenciais a apresentarem complicações respiratóriase devem ser hospitalizados para tratamento/observação. Escreva um programa quereceba uma lista de pacientes. A lista deve conter a letra inicial do nome e o nível desaturação de cada paciente. O programa deve informar, logo após a entrada do registro,se o paciente deve ser internado ou deve receber alta.
Para indicar que a lista finalizou,ao invés da inicial do nome, será informado o caracter ‘#’

Entrada (E): A entrada é composta por várias linhas, onde em cada linha tem-se um caracterreferente à inicial do nome do paciente ‘Pi’ (caracteres maiúsculos, apenas),seguido deum inteiro ‘S’ (1 ≤ S ≤ 100), representando a saturação sanguínea daquele paciente
Saída (S): Para cada paciente a saída deve ser uma mensagem em que devem ser impressos ainicial do paciente e o procedimento a ser tomado (Alta/Internação) para aquelepaciente.

Exemplo:
E --> A 92 | S --> A Alta
E --> B 89 | S --> B Internação
E --> C 100 | S --> C Alta
E --> #
*/