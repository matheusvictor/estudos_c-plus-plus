#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  
  double salario; 

  cin >> salario; 

  if(salario >= 500 && salario <= 3000){
    double imposto = salario * 0.15;
    double salarioFinal = salario - imposto;

    if((int) salarioFinal == salarioFinal){
      cout << "Imposto: R$ " << imposto << endl << "Salário líquido: R$ " << salarioFinal;
    } else {
      cout << "Imposto: R$ " << fixed << setprecision(2) <<  imposto << endl << "Salário líquido: R$ " << salarioFinal;
    }

  } else if(salario >= 3001 && salario <= 6000){

    double faixa_anterior = 3000;
    double imposto_Faixa_Anterior = (3000 * 0.15);

    double faixa_excedente = salario - faixa_anterior;
    double imposto_excedente = faixa_excedente * 0.20;

    double soma_impostos = imposto_excedente + imposto_Faixa_Anterior;

    double salarioFinal = salario - soma_impostos;

    if((int) salarioFinal == salarioFinal){
      cout << "Imposto: R$ " << soma_impostos << endl << "Salário líquido: R$ " << salarioFinal;
    } else {
      cout << "Imposto: R$ " << fixed << setprecision(2) <<  soma_impostos << endl << "Salário líquido: R$ " << salarioFinal;
    }
  }
  else{

    double faixa_anterior = 3000;
    double imposto_Faixa_Anterior = (3000 * 0.15);

    double faixa_intermediaria = 6000;
    double imposto_faixa_intermediaria = (faixa_intermediaria - faixa_anterior) * 0.20;

    double valor_excedente = salario - faixa_intermediaria;
    double imposto_excedente = valor_excedente * 0.30;

    double soma_impostos = imposto_Faixa_Anterior + imposto_faixa_intermediaria + imposto_excedente;

    double salarioFinal = salario - soma_impostos;
    
    if((int) salarioFinal == salarioFinal){
      cout << "Imposto: R$ " << soma_impostos << endl << "Salário líquido: R$ " << salarioFinal;
    } else {
      cout << "Imposto: R$ " << fixed << setprecision(2) <<  soma_impostos << endl << "Salário líquido: R$ " << salarioFinal;
    }
  }
}

/**
O Programa de Cálculo de Impostos é um sistema que permite ao trabalhador colocar o seu salário e saber
quanto de imposto será descontado. Você foi contratado para desenvolver esta solução. O programa deve:

    1. Permitir que o trabalhador insira o seu salário em reais R$;
    2. Calcular o imposto para cada faixa de salário baseado na seguinte regra:
        a. O trabalhador que tiver salário até R$ 3.000 pagará o imposto de 15%;
        b. O trabalhador que tiver salário de R$ 3.001 a R$ 6.000 pagará imposto de20% da parte do salário nesta faixa e 15% da parte do salário na faixa anterior;
        c. O trabalhador que tiver salário acima de R$ 6.000 pagará o imposto de 30% daparte do salário nesta faixa, bem como 15% e 20% das partes do salário em cadauma das outras faixas, respectivamente.
    3. Exibir uma mensagem informando o imposto que será pago e o salário final do trabalhador, já com o desconto do imposto aplicado.

Entrada (E): A entrada é composta apenas por um número inteiro ‘S’ (500 <= S <= 10000) que serefere ao salário do trabalhador em reais R$.
Saída (S): O programa deve imprimir a frase “Imposto: R$ ” seguida do valor do imposto a serpago. Na linha seguinte deverá ser impressa a frase “Salário líquido: R$ ” seguida do valor dosalário final já com o imposto descontado. Lembre-se que nem sempre será um valor inteiro, e não sendo, use duas casas decimais de precisão.

Exemplos:
E --> 1000 | S --> Imposto: R$ 150 \n Salário líquido: R$ 850
E --> 4000 | S --> Imposto: R$ 650 \n Salário líquido: R$ 3350
E --> 2950 | S --> Imposto: R$ 442.50 \n Salário líquido: R$ 2507.50
*/
