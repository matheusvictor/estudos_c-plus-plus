/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1040
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double media = ((a*2.0) + (b*3.0) + (c*4.0) + d)/10.0;
    
    
    if(media >= 7.0){
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else if(media < 5.0){
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno reprovado." << endl;
    }
    else{
        
        double nota_exame;
        cin >> nota_exame;        
        double nota_final = (nota_exame + media)/2.0;
                
        cout << "Media: " << fixed << setprecision(1) << media << endl << "Aluno em exame." << endl;
        cout << "Nota do exame: "  << fixed << setprecision(1) << nota_exame << endl;
        
        if(nota_final < 5.0){
            cout << "Aluno reprovado." << endl << "Media final: " << fixed << setprecision(1) << nota_final << endl;
        } else {
            cout << "Aluno aprovado." << endl << "Media final: " << fixed << setprecision(1) << nota_final << endl;            
        }
    }
    
    return 0;
}