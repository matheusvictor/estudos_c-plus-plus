#include <iostream>
#include <string>
using namespace std;

int main(){

  int dimensao = 3, soma = 0;
  int matriz[dimensao][dimensao], somaLinhas[dimensao], somaColunas[dimensao], somaDiagonal1[dimensao], somaDiagonal2[dimensao];
  bool quadradoPerfeito = false;

  for(int i = 0; i < dimensao; i++){
    for(int j = 0; j < dimensao; j++){
      cin >> matriz[i][j];
    }
  }

  for(int i = 0; i < dimensao; i++){
    soma = 0;
    for(int j = 0; j < dimensao; j++){
      soma += matriz[i][j];      
    }
    somaLinhas[i] = soma;
  }

  for(int j = 0; j < dimensao; j++){
    soma = 0;
    for(int i = 0; i < dimensao; i++){
      soma += matriz[j][i];      
    }
    somaColunas[j] = soma;
  }

  soma = 0;
  for(int i = 0; i < dimensao; i++){    
    soma += matriz[i][i];
    somaDiagonal1[i] = soma;
  }

  soma = 0;
  int j = dimensao-1;
  for(int i = 0; i < dimensao; i++){
    soma += matriz[i][j];
    j--;
    somaDiagonal2[i] = soma;
  }

  bool linhasIguais = false, colunasIguais = false;

  if(somaLinhas[0] == somaLinhas[1] && somaLinhas[1] == somaLinhas[2]){
    linhasIguais = true;    
  }
  
  if(somaColunas[0] == somaColunas[1] && somaColunas[1] == somaColunas[2]){
    colunasIguais = true;    
  }

  if(linhasIguais == true && colunasIguais == true && (somaDiagonal1[dimensao-1] == somaDiagonal2[dimensao-1])){
    cout << "eh um quadrado magico" << endl;
  } else{
    cout << "nao eh um quadrado magico" << endl;
  } 
  return 0;
}

/**
Na Idade Média os quadrados mágicos se tornaram muito populares pelo seu uso em Pantáculose Talismãs, onde eram associados 
a Planetas que atribuíam a eles o poder de atrair proteção astral para seus detentores. Uma matriz quadrada inteira (matriz de números
inteiros com mesmo número de linhas e colunas) é um quadrado mágico se a soma dos elementos de cada linha, a soma dos elementos de cada
coluna e a soma dos elementos das  principal e secundária são todas iguais. Exemplo de um quadrado mágico:

 3   4   8
 10  5   0
 2   6   7

 Faça um programa que leia uma matriz quadrada e inteira, com tamanho 3 X 3, e diga se a matriz é um quadrado mágico.

 Entrada(E): A entrada contém uma com 9 inteiros, sendo que: os 3 primeiros correspondem à primeira linha da matriz; os 3 seguintes correspondem
 à segunda  linha  da  matriz;  e,  por  fim,  os  3 últimos  correspondem  à  terceira  e última linha da matriz.

 Saída(S): Imprima  a  mensagem  “eh  um  quadrado  magico”  ou  “nao  eh  um  quadrado magico”, de acordo com a especificação fornecida

 Exemplos:
 E --> 3  4810  502  67 | S --> eh um quadrado magico
 E --> 8  10  56  1  1211  9 7 | S --> nao eh um quadrado magico
 */