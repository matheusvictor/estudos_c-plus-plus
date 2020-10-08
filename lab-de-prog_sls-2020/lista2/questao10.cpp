/**
Disponível: https://www.urionlinejudge.com.br/judge/en/problems/view/1051
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  
  double salario; 

  cin >> salario; 

  if(salario >=  0.00 && salario <= 2000.00){
      cout << "Isento" << endl;
  }
  else if(salario >=  2000.01 && salario <= 3000.00){
      
    double excedente = salario - 2000.00;
    double imposto = excedente * 0.08;
    
    cout << "R$ " << fixed <<  setprecision(2) << imposto << endl;
  }
  else if(salario >= 3000.01 && salario <= 4500.00){
      
      double excedente1 = salario - 3000.00;
      
      double excedente2 = (salario - 2000.00) - excedente1;
      
      double impostos = (excedente2 * 0.08) + (excedente1 * 0.18);
      
      cout << "R$ " << fixed <<  setprecision(2) << impostos << endl;
  }
  else if(salario > 4500.00){
      
      //4520.00
      double excedente1 = salario - 4500.00; //excedeu 20;
      double excedente2 = (salario - 3000.00) - excedente1; //excedeu 1500; 
      double excedente3 = (salario - 2000.00) - (excedente1 + excedente2); //excedeu 1520;
 
      double impostos = (excedente1 * 0.28) + (excedente2 * 0.18) + (excedente3 * 0.08);

      cout << "R$ " << fixed <<  setprecision(2) << impostos << endl;
  }
}