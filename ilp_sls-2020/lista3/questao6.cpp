#include <iostream>
using namespace std;

int main(){
    
    int quantidadeJogadores, maior = 0, aux;
    cin >> quantidadeJogadores;
    int numeroMortes[quantidadeJogadores];
    
    for(int i=0; i < quantidadeJogadores; i++){
        cin >> numeroMortes[i];
    }

    maior = numeroMortes[0]; //iniciamos a variável maior como sendo o primeiro número do vetor totalMortes

    //Verificando qual o maior número dentro do vetor numeroMortes e guardando-o na variável maior
    for(int j = 1; j < quantidadeJogadores; j++){
      if(numeroMortes[j] > maior){
        maior = numeroMortes[j];
      }
    }

    bool assassinatos[maior+1]; //criando um vetor que vai de 0 até o maior número encontrado dentro do vetor numeroMortes
    //se o maior número for 100, por exemplo, o vetor terá 101 posições, sendo que vai de 0 a 100.

    for(int k = 0; k < maior+1; k++){ //inicializando todas as posições de assassinatos[] como false.
      assassinatos[k] = false;
    }

    for(int l = 0; l < quantidadeJogadores; l++){
      int numAssassinatos = numeroMortes[l];
      assassinatos[numAssassinatos] = true;
      /*
        numAssassinatos recebe o valor lido na posição l do vetor numeroMortes.
        Exemplo: l = 0 e numeroMortes[l] = 3.
        Assim, o vetor assassinatos[3] passa a ser true, sinalizando que o número 3 foi lido.

        Vídeo da explicação: https://www.youtube.com/watch?v=gu7auHoys8g
      */
    }

    for(int m = 0; m < maior+1; m++){
      if(assassinatos[m] == true){
        //se assassinatos na posição m for true, significa que li aquele número e, portanto, irei imprimí-lo
        cout << m << " ";
      }
    }
    cout << endl;
}

/**
Among us é um jogo que foi lançado em 2018 e tem ganhado bastante destaque na internet durante a quarentena.
Apesar de à primeira vista não ser um jogo que chame muita atenção, existem vários fatores que fazem a experiência de
jogar ser muito divertida. Em Among Us, os jogadores são astronautas que devem realizar uma série de atividades em uma nave, desde arrumar a fiação até jogar o lixo fora.
Só que entre eles há um impostor, que tem o objetivo de sabotar essas atividades e matar os outros tripulantes. Essa é a dinâmica que serve como palco quando o ápice de cada partida
acontece de verdade: as discussões em grupo para saber quem é o impostor. Nelas os jogadores tripulantes podem exercitar suas habilidades investigativas, enquanto o jogador impostor sua habilidade
de dissimulação, e o melhor, desfazer amizades.
Agora chegou a grande hora, para aumentar ainda mais a competitividade do jogo um rank de melhor impostor será lançado, e será baseado em quantidade de assassinatos durante as partidas desde a criação
da conta no jogo até agora!
Você como programador foi contratado para fazer um código que receba a informação dequantos jogadores possuem uma conta no jogo, a quantidade de assassinatos de cada um, e imprimade forma crescente a quantidade
de assassinatos de cada jogador.

Entrada (E): A entrada consiste de duas linhas. A primeira contém um inteiro ‘N’ (1 <= N <= 100000), representando a quantidade de jogadores no jogo, e a segunda contêm ‘N’ inteiros X1, X2... XN (0<= Xi <= 1000000 | i = 1, 2, ... , N),
representando a quantidade de assassinatos de cada um dos‘N’ jogadores.

Saída (S): A saída consiste de ‘N’ inteiros separados por espaço, representando a quantidade de assassinatos cometidos pelos jogadores e apresentados de forma crescente.

Exemplos:
E --> 8 29 84 26 1 398 42 4 0 | S --> 0 1 4 26 29 42 84 398
E --> 3 1000000 8 1 | S --> 1 8 1000000

Obs¹: Exige-se uma solução que não use ordenação, apenas vetores e o que foi aprendido nadisciplina até o momento.
Obs²: É garantido que não há jogadores com a mesma quantidade de assassinatos na entrada do programa (JUDE).
*/