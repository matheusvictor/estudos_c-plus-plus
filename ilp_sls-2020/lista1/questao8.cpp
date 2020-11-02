#include <iostream>
using namespace std;

int main(){

  int mes;

  cin >> mes;

  switch(mes) {
  case 1:
    cout << "Janeiro";
    break;
  case 2:
    cout << "Fevereiro";
    break;
  case 3: 
    cout << "Março";
    break;
  case 4:
    cout << "Abril";
    break;
  case 5: 
    cout << "Maio";
    break;
  case 6:
    cout << "Junho";
    break;
  case 7:
    cout << "Julho";
    break;
  case 8:
    cout << "Agosto";
    break;
  case 9:
    cout << "Setembro";
    break;
  case 10:
    cout << "Outubro";
    break;
  case 11:
    cout << "Novembro";
    break;
  case 12:
    cout << "Dezembro";
    break;
  default:
    cout << "Mês inválido!";
}
  
}
/**
Leia um valor inteiro entre 1 e 12, inclusive, correspondente ao mês do seuaniversário. A seguir, você deverá mostrar o nome do mês do ano em que comemoraremos o seuaniversário e a nossa festa.

Entrada (E): A entrada contém um único valor inteiro, correspondente ao mês do seu aniversário.
Saída (S): Imprima o nome do mês correspondente ao número fornecido na entrada, com a primeiraletra maiúscula, conforme exemplos abaixo.

Exemplo:
E --> 9 | S --> Setembro
*/