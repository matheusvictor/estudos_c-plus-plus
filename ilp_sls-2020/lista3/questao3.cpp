#include <iostream>
using namespace std;
 
int main() {

  int qtd_esferas, tem_esfera = 0;
  int contador = 1;
  cin >> qtd_esferas;
  char vetor[qtd_esferas];

  for(int i = 0; i < qtd_esferas; i++){
    cin >> vetor[i];
    if(vetor[i] == '*'){
      tem_esfera ++;
    }
  }

  if(tem_esfera == 7){
    cout << "Pedido realizado" << endl;

    for(int j = 0; j < qtd_esferas; j++){
      if(vetor[j] == '*'){
        cout << contador;
        if(j != (qtd_esferas-1)){
          cout << " ";
        }
        contador ++;
        continue;
      }
      cout << vetor[j] << " ";
    }
  }
  else{
    cout << "Pedido negado" << endl;
  }
  cout << endl;
}

/**
As Esferas do Dragão são bolas laranjas e cristalinas que podem invocar o Deus Dragão Shenlong que tem a habilidade de conceder desejos para quem conseguir juntar as sete esferas.
Para que seja possível identificar quem conseguiu juntar as sete esferas precisaremos verificar se existem sete asteríscos (*) no conjunto de esferas fornecidos.
Caso haja menos que sete esferas não será possível realizar o pedido. Se houverem mais que sete também não será possível visto que só existem sete esferas originais.

Entrada (E): Na primeira linha será fornecido um inteiro ‘N’ (1 <= N <= 100) que representa a quantidade de esferas coletadas. Na próxima linha serão dados ‘N’ caracteres que podem ser * (asterísco) ou $ (cifrão).

Saída (S): A saída consiste numa frase que diz se o pedido foi realizado ou não, sendo “Pedido realizado” ou “Pedido negado”. Lembre-se que só poderá o pedido ser realizado se as sete esferas tiverem sido coletadas.
Se o pedido foi realizado, imprima a sequência de esferas da entrada trocando os asteriscos pelos números das esferas em ordem crescente, como no exemplo abaixo.

Exemplos:
E --> 10 $ $ $ * * $ * $ $ $ | S --> Pedido negado
E --> 10 * * $ * $ * * $ * * | S --> Pedido realizado \n 1 2 $ 3 $ 4 5 $ 6 7
*/