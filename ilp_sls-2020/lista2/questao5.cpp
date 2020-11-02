#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  int idas, prod_disponiveis, quantidade;
  double preco, total;

  cin >> idas;

  for(int i = 1; i <= idas; i ++){
    cin >> prod_disponiveis;

    for(int j = 1; j <= prod_disponiveis; j ++){
      cin >> preco >> quantidade;
      total += preco * quantidade;
    }

    cout << "R$ " << fixed << setprecision(2) << total << endl;
    total = 0;
  }
}

/**
Seu Bobô regularmente vai à feira para fazer compras, porém ele ficará em casa no domingo para assistir o jogo do seu time do coração.
Assim, ele pediu para seu filho Vicentino fazer as compras. Vicentino fará contas em um programa que calcula o valor que precisa levar para
poder comprar tudo que está na lista de compras feita por Seu Bobô, considerando a quantidade de cada tipo de fruta ou legume e os preços individuais destes itens.

Entrada (E): A primeira entrada terá um inteiro ‘N’ (1 <= ‘N’ <= 50), que indica a quantidade de idas à feira que Vicentino fez, ou seja, cada ida à feira é um caso de teste. Cada caso de teste começa com um inteiro ‘M’ (1 <= ‘M’ <= 100), que indica a quantidade de produtos que estão disponíveispara venda na feira. Em cada uma das próximas ‘M’ linhas, teremos o preço unitário ‘P’ (double,0.05 <= ‘P’ <= 100.00) daquele produto, seguido da quantidade ‘Q’ (inteiro, 0 <= ‘Q’ <= 100) que Seu Bobô precisa daquele produto.
Saída (S): Para cada caso de teste (ida à feira), imprima o valor que será gasto por seu Bobô naquela ida à feira, no seguinte formato: “R$ Valor”, sendo o Valor com duas casas decimais. Conforme os exemplos abaixo.

Exemplo:

Entrada: 

2 //Duas idas à feira
4 //Ida 1 à feira, 4 produtos disponíveis
2.19 2
3.10 0
2.80 1
2.73 3
5 //Ida 2 à feira, 5 produtos disponíveis
6.70 1
1.12 0
1.71 2
2.80 1
2.81 1

Saída:
R$ 15.37 //Total da ida 1
R$ 15.73 //Total da ida 2
*/