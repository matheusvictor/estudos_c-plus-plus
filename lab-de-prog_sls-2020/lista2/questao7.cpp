/**
Disponível: https://www.urionlinejudge.com.br/judge/en/problems/view/1048
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    double salario;
    cin >> fixed >> setprecision(2) >> salario;
    
    if(salario >= 0 && salario <= 400){
        
        double bonus = salario * 0.15;     
        double novo_salario = salario + bonus;
        
        cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl << "Em percentual: 15 %" << endl;
    }
    else if(salario <= 400.01 && salario <= 800){
        
        double bonus = salario * 0.12;     
        double novo_salario = salario + bonus;
        
        cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl << "Em percentual: 12 %" << endl;
    }
    else if(salario >= 800.01 && salario <= 1200){
        
        double bonus = salario * 0.10;     
        double novo_salario = salario + bonus;
        
        cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl << "Em percentual: 10 %" << endl;
    }
    else if(salario >= 1200.01 && salario <= 2000){
                
        double bonus = salario * 0.07;     
        double novo_salario = salario + bonus;
        
        cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl << "Em percentual: 7 %" << endl;
    } else {
                
        double bonus = salario * 0.04;     
        double novo_salario = salario + bonus;
        
        cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl << "Em percentual: 4 %" << endl;
    }
    
    return 0;
}