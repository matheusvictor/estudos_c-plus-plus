/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1131
*/

#include <iostream>
using namespace std;
 
int main() {
    
    int opc = 1, gols_inter, gols_gremio;
    int qtd_grenais = 0 , vitoria_inter = 0, vitoria_gremio = 0, empate = 0;
    
    while(opc == 1){
        
        qtd_grenais ++;
        cin >> gols_inter >> gols_gremio; 
        
        if(gols_inter > gols_gremio){
        vitoria_inter ++;
        } else if(gols_gremio > gols_inter ){
        vitoria_gremio ++;
        } else{
        empate ++;
        }
        cin >> opc;        
    }
    for(int i = 0; i < qtd_grenais; i ++){
      cout << "Novo grenal (1-sim 2-nao)" << endl;
    }
    cout << qtd_grenais << " grenais" << endl << "Inter:" << vitoria_inter << endl << "Gremio:" << vitoria_gremio << endl;
    cout << "Empates:" << empate << endl;
    
    if(vitoria_inter > vitoria_gremio){
        cout << "Inter venceu mais" << endl;
    } else if(vitoria_gremio > vitoria_inter ){
        cout << "Gremio venceu mais" << endl;
    } else if(vitoria_inter == vitoria_gremio){
        cout << "Nao houve vencedor" << endl;
    }   
    return 0;
}