#include <iostream>
#include <string>
using namespace std;

int main(){

  //char alfabeto[] = {'a', 'b', 'c', 'd','e', 'f','g','h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int k; 
  string palavraLida; 
  cin >> k >> palavraLida;
  int tamanhoPalavra = palavraLida.size(); //guarda o tamanho da palavra
  char palavraCod[tamanhoPalavra]; //cria um vetor de caractéres com o tamanho da palavra lida

  for(int i = 0; i < tamanhoPalavra; i++){
    if(palavraLida[i] + k > 'z'){
      palavraCod[i] = 'a' + ((palavraLida[i] + k) - 'z' - 1);
      /*
      Se a letra, ao ser codificada, tiver passado de 'z', esta será correspondente à
      'a' + caracter correspondente ao caracter codificado - 'z' - 1.
      Em termos de números da tabela ASCII, no caso da palavra 'vinho', o caracter 'v' ficaria:

      97 + ((118+6) - 122 - 1) --> 97 + (124 - 123) --> 98;

      Na tabela ASCII, 98 corresponde a 'b'.

      Tabela ASCII: https://s2.glbimg.com/fEu3dqWDHAo0Gi1rGJin--DMiT4=/695x0/s.glbimg.com/po/tt2/f/original/2015/02/12/imagem28.jpg
      */
    } else{
     palavraCod[i] = palavraLida[i] + k; // o vetor palavraCod irá guardar, em cada uma de suas posições, o caractér da palavra anterior codificado
    }
     cout << palavraCod[i];
     //cout << alfabeto[k];
  }  
  return 0;
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