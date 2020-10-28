/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1046
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    int hr_inicio, hr_final;
    cin >> hr_inicio >> hr_final;
    int duracao = hr_final - hr_inicio;
    
    if(duracao < 0){
        duracao = 24 + duracao;
    }
    if(hr_inicio == hr_final){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    } else{
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    }
    return 0;
}