/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1101
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n1, n2, maior, menor, soma = 0;   
    
    do{
        cin >> n1 >> n2;
                         
        if(n1 <= 0 || n2 <= 0){
            break;
        }
        
        if(n1 > n2){
            maior = n1;
            menor = n2;
        } else {
            maior = n2;
            menor = n1;
        }
        
        for(menor; menor <= maior; menor++){
            soma += menor;
            cout << menor << " ";    
        }
        cout << "Sum=" << soma << endl;
        soma = 0;
    } while(n1 > 0 || n2 > 0);
}