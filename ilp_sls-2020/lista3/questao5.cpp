#include <iostream>
#include <string>
//#include <locale.h>
using namespace std;

int main(){ 
  long long qtdNumeros = 0, numero = 0;
  cin >> qtdNumeros;

  long long primeiraSequencia[qtdNumeros], segundaSequencia[qtdNumeros];
  long long senha[qtdNumeros+6];

  for(int i = 0; i < qtdNumeros+6; i++){
    senha[i] = 0;
  }

  for(int i = 0; i < qtdNumeros; i++){
   cin >> primeiraSequencia[i];
  }
  
  for(int i = 0; i < qtdNumeros; i++){
   cin >> segundaSequencia[i];
  }

  for(int i = 0; i < qtdNumeros; i++){
    long long aux = 0;
    if(i % 4 == 0){
      aux = primeiraSequencia[i] * segundaSequencia[i];
    } else if(i % 4 == 1){
      aux = primeiraSequencia[i] - segundaSequencia[i];
    } else if(i % 4 == 2){
      aux = primeiraSequencia[i] / segundaSequencia[i];
    } else if(i % 4 == 3){
      aux = 1;       
      for(int j = 0; j <segundaSequencia[i]; j++){
        aux = aux * primeiraSequencia[i];
      }
      //aux = pow(primeiraSequencia[i],segundaSequencia[i]);
    }
    if(aux < 0){
      aux = aux * (-1);
    }
    else if(aux >= 10){
      do{
        aux = aux / 10;
      }while(aux >=10);
    }
    senha[i] = aux;
  }

  if(qtdNumeros > 6){
    for(int i = (qtdNumeros-6); i < qtdNumeros; i++){
      cout << senha[i];
    }
    cout << endl;
  } else{
    for(int i = 0; i < 6; i++){
      cout << senha[i];
    }
    cout << endl;
  }
  return 0;
}

/**
Antônio esqueceu sua senha do cofre e precisa de ajuda para abri-lo. Ele escreveu em seu diário as instruções de como descobrir sua senha.
Para decifrar esta senha, você tem 3 linhas de dados: A primeira contém um inteiro ‘N’, a segunda contendo ‘N’ números inteiros e, por último,
outra linha contendo também ‘N’ números inteiros. Seja Ai o i-ésimo número da sequência dos ‘N’ números da segunda linha de dados ‘A’, tal que
0 <= i <= N-1. Seja Bj o j-ésimo número da sequência dos ‘N’ números da terceira linha de dados ‘B’, tal que 0 <= j <= N-1. Ao percorrer a linha
de dados ‘A’, você deverá executar as seguintes operações:

a) Caso o resto da divisão de ‘i’ por 4 seja 0, você deve multiplicar Ai por Bi;
b) Caso o resto da divisão de ‘i’ por 4 seja 1, você deve subtrair de Ai o número Bi;
c) Caso o resto da divisão de ‘i’ por 4 seja 2, você deve dividir Ai por Bi (resultado inteiro);
d) E, caso o resto da divisão de ‘i’ por 4 seja 3, você deve elevar Ai à Bi-ésima potência;
e) Caso as operações resultem em números maiores que dez, você deve dividí-los por dez até
que se tenha um número de um dígito. Nesse caso, pegando-se sempre a parte inteira da divisão;
f) Caso as operações resultem em números menores que zero, transforme-os em positivos.
Por fim, queremos apenas os 6 últimos dígitos da linha de dados ‘A’ resultante das
operações realizadas. Caso ‘A’ tenha menos de 6 dígitos, imprima 0’s (zero) até que a senha tenha 6
dígitos (imprima 0’s ao final).

Entrada(E): A entrada consiste de um número inteiro ‘N’ (1 <= N <= 100), seguido de 2 linhas, contendo respectivamente, ‘N’ números inteiros em cada.
Estes números estão entre 1 e 10, inclusos.

Saída(S): A saída é um inteiro de 6 dígitos contendo a senha para o cofre.

Exemplos:
E --> 3 4 9 7 2 3 1 | S --> 867000
E --> 4 10 8 6 3 8 1 7 3 | S --> 870200
E --> 8 9 1 2 3 4 2 1 2 5 6 2 3 4 5 1 2 | S --> 121314

Obs.: Explicando o Exemplo 1: 4*2 = 8; 9 – 3 = 6; 7 / 1 = 7 --> senha = 867000
Obs.²: Explicando o Exemplo 3: 9*5 = 45/10=4; 1-6 = -5 = 5; 2/2 = 1; 3^3 = 27/10=2; 4*4=16/10=1; 2-5=-3=3; 1/1=1; 2^2 = 4 --> senha = 121314

*/