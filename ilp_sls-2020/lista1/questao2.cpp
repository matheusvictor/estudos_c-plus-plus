#include <iostream>
using namespace std;

int main(){
  int diferencaEntreObj, imprecisao;

  cin >> diferencaEntreObj;
  cin >> imprecisao;

  int energia = (diferencaEntreObj * imprecisao) / (diferencaEntreObj + imprecisao + 1);

  cout << energia;
  
}

/**
Em Fullmetal Alchemist alquimistas conseguem, com a ajuda de padrões chamados círculos  de transmutação,transformar um objeto
em outro. Um alquimista precisa saber qual a chance datransmutação que ele está querendorealizar dar certo para
que ele consigatransformar um objeto no objeto que elequer. A quantidade de energia necessáriapara realizar uma transmutação (E) é dada pelo nível da diferença entre os objetos (D) epelo nível de imprecisão do círculo de transmutação (P), tal que E = D * P / (D + P + 1).Você foi contratado para, dados o nível da diferença entre os objetos D e o nível deimprecisão do círculo de transmutação P, qual é a quantidade de energia necessária pararealizar a transmutação.

Entrada: A entrada possui dois inteiros, separados por espaço. O primeiro valor é um inteiro representando a diferença entre os objetos D (0 < D < 1000), e o segundo valor é uminteiro representando a imprecisão do círculo de transmutação P (0 < P < 1000).
Saída: A saída consiste em uma única linha contendo um número inteiro E que representaa quantidade de energia necessária para realizar a transmutação em questão.
*/
