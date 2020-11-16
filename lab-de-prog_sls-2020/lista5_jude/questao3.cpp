#include <iostream>
#include <string>
using namespace std;

int main(){

  int k; 
  string palavraLida; 
  cin >> k >> palavraLida;
  int tamanhoPalavra = palavraLida.size(); //guarda o tamanho da palavra

  char palavraCod[tamanhoPalavra]; //cria um vetor de caractéres com o tamanho da palavra lida

  for(int i = 0; i < tamanhoPalavra; i++){
     char letraCod = palavraLida[i] + k; //cada caractér da palavra lida será codificado de acordo com o k passado na entrada
     palavraCod[i] = letraCod; // o vetor palavraCod irá guardar, em cada uma de suas posições, o caractér da palavra anterior codificado
  }

  for(int j = 0; j < tamanhoPalavra; j++){
     cout << palavraCod[j]; //imprimindo a palavra codificada
  }
}

/**
O imperador romano Júlio César usava um método de criptografia para mandar mensagens criptografadas
para seus generais. Este método considerava a ordem dos caracteres no alfabeto e trocava cada letra
pela k-ésima letra seguinte à letra. Por exemplo, se k = 3, então a ocorrência da letra 'a' era trocada pela
letra 'd'. A letra 'b' era trocada pela letra 'e', e assim por diante. Esta substituição era feita de maneira
cíclica que, no caso de k=3, a letra 'z' era trocada pela letra 'c'. Considerando o alfabeto oficial da língua
portuguesa (a – b – c – d – e – f – g– h – i – j – k – l – m – n – o – p – q – r – s – t – u – v – w – x – y – z),
faça um programa que lê um inteiro k e uma palavra e imprime a palavra correspondente criptografada pela cifra de
César com o parâmetro k.

Entrada (E): A entrada é um caso de teste em uma linha com um número inteiro k seguido de uma palavra p (palavra única
– sem acento e sem espaço). O número inteiro k (1 ≤ k ≤ 10) indica o parâmetro da cifra de Cesar e a palavra p a mensagem
a ser criptografada.

Saída (S): Imprima a palavra criptografada conforme enunciado do problema.

Exemplos:
E --> 3 casa | S --> fdvd
E --> 4 cerveja | S --> givzine
E --> 6 vinho | S --> botnu
*/