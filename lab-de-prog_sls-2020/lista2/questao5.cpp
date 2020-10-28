/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1045
*/

#include <iostream>
using namespace std;
 
int main() {
    
    double a, b, c;
    double maior, menor, interm;
    cin >> a >> b >> c;
    
    if(a >= b && a >= c && b >= c){
        maior = a;
        interm = b;
        menor = c;
    } else if(a >= b && a >= c && c >= b){
        maior = a;
        interm = c;
        menor = b;
    } else if(b >= a && b >= c && a >= c){
        maior = b;
        interm = a;
        menor = c;
    } else if(b >= a && b >= c && c >= a){
        maior = b;
        interm = c;
        menor = a;
    } else if(c >= a && c >= b && a >= b){
        maior = c;
        interm = a;
        menor = b;
    } else{
        maior = c;
        interm = b;
        menor = a;
    }

    if(maior >= (interm + menor)){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else{
        
        if((maior*maior) == (interm*interm) + (menor*menor)){
            cout << "TRIANGULO RETANGULO" << endl;
        }
        else if(maior*maior > (interm*interm + menor*menor)){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else{
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        
        if(maior == interm  && interm == menor){
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        
        if((maior == interm && maior != menor) || (interm == menor && interm != maior) || (menor == maior && menor != interm)){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    
    return 0;
}