#include <iostream>
using namespace std;

int main(){
    
  int j, i, N, menor_i, aux, contador = 0;
  cin >> N;
  int vetor[N];

  for(int k = 0; k < N; k++){
    cin >> vetor[k];      
  }

  for(j = 0; j < N-1; j++){
    menor_i = j;
    for(i = j+1; i < N; i++)
        if(vetor[i] < vetor[menor_i]){
            menor_i = i;
            contador++;
        }
    aux = vetor[j];
    vetor[j] = vetor[menor_i];
    vetor[menor_i] = aux;    
  }

  if(contador == 0){
    cout << "esta ordenado: executou " << contador << " permutas" << endl;
  } else{
    cout << "nao esta ordenado: executou " << contador << " permutas" << endl;
  }
  return 0;
}

/**
Um algoritmo de ordenação de vetores executa diversas permutas em posições do vetor até que o mesmo esteja completamente ordenado.
Dessa forma, é possível saber se um vetor está ordenado, contando o número de permutas que o algoritmo de ordenação executa. Ou seja,
em um vetor ordenado o algoritmo executa zero permutas, enquanto que em um vetor desordenado o algoritmo executa uma ou mais permutas.

        for(j = 0; j < N-1; j++){
            menor_i = j;
            for(i = j+1; i < N; i++){
                if(vetor[i] < vetor[menor_i]){
                    menor_i = i;
                }
            aux = vetor[j];
            vetor[j] = vetor[menor_i];
            vetor[menor_i] = aux;
            }
        }

Faça um programa que leia um vetor de tamanho N (2 ≤ N ≤ 50) e, usando (modificando) o algoritmo de ordenação acima, diga se o vetor já estava ordenado
e, caso contrário, diga que não está ordenado e quantas permutas P (1 ≤ P) foram necessárias para ordenar o vetor.

Entrada (E): A entrada contém duas linhas: a primeira comum valor inteiro N,correspondente ao  tamanho  do  vetor;  ea  segunda  com  N  inteiros, correspondentes
aos números que irão preencher o vetor.

Saída (S): Imprima  a  mensagem  “esta  ordenado:  executou  0  permutas”  ou  “nao esta ordenado: executou P permutas”, de acordo com a especificação fornecida

Exemplos:
E --> 8  1  2  3  4  5  6  7  8 | S --> esta ordenado: executou 0 permutas
E --> 8  8  7  6  5  4  3  2  1 | S --> nao esta ordenado: executou 16 permutas
*/