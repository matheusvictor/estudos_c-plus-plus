#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double massa, altura, imc; 

  cin >> fixed >> setprecision(2) >> massa >> altura;
  imc = massa / (altura * altura);

  if(imc < 17){
    cout << "muito-abaixo-do-peso";
  } else if(imc >= 17 && imc <= 18.49){
    cout << "abaixo-do-peso";
  } else if(imc >= 18.50 && imc <= 24.99){
    cout << "peso-normal";
  } else if(imc >= 25 && imc <= 29.99){
    cout << "acima-do-peso";
  } else if(imc >= 30 && imc <= 34.99){
    cout << "obesidade-1";
  } else if(imc >= 35 && imc <= 39.99){
    cout << "obesidade-2";
  } else{
    cout << "obesidade-3";
  }
}

/**
O índice de massa corporal (IMC) é uma medida internacional usada para calcular se uma pessoa está no peso ideal.
O IMC é definido pela seguinte equação: IMC = massa /(altura * altura). A massa é dada em quilogramas e a altura, em metros.
Após aprender que o IMC é um importante indicador de como anda sua condiçãofísica, e preocupado com sua saúde e de seus conhecidos, você teve a ideia de criar umacalculadora para facilitar que todos possam acompanhar suas situações.

Entrada (E): A entrada é composta por dois números reais:  a “massa”(30  ≤ “massa” ≤ 150) ea“altura” (1,30 ≤ “altura” ≤ 2,20).
Saída (S): A saída é a situação, determinada a partir do IMC calculado com a massa e altura informadas sempre com duas casas decimais de precisão, de acordo com a tabela abaixo:

Resultado                 Situação
Abaixo de 17         muito-abaixo-do-peso
Entre 17 e 18,49        abaixo-do-peso
Entre 18,50 e 24,99      peso-normal
Entre 25 e 29,99        acima-do-peso
Entre 30 e 34,99        obesidade-1
Entre 35 e 39,99        obesidade-2
Acima de 40             obesidade-3

Exemplos:
E --> 50.00 1.70 | S --> abaixo-do-peso
E --> 55.00 1.50 | S --> peso-normal
E --> 90.56 1.75 | S --> acima-do-peso
E --> 110.00 1.85 | S --> obesidade-1
*/