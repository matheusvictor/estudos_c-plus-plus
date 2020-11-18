#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main(){ 

    string nomeAluno, estadosInformados[6];
    string estados[] = {"Mato Grosso", "Mato Grosso do Sul", "Goiás", "Paraná", "Rio Grande do Sul", "Santa Catarina"};
    int acertos = 0;

    getline(cin, nomeAluno);

    for(int i = 0; i < 6; i ++){
        getline(cin, estadosInformados[i]);

        for(int j = 0; j < 6; j ++){
          if(estadosInformados[i] == estados[j]){
            acertos++;
          }
        }
    }

    cout << nomeAluno << " sua pontuação é de " << acertos << " pontos." << endl;

    return 0;
}

/**
A República Federativa do Brasil é composta por 26 unidades Federativas e 1
Distrito Federal. Uma professora de geografia, afim de ajudar seus pequenos alunos a
memorizarem esses estados, pensou que um programa de computador poderia ajudá-los.
Assim, cada aluno dirá seu nome e na sequência tentará acertar o nome dos 6 Estados
das Regiões Sul e Centro-Oeste. O programa deverá calcular a quantidade de acertos do
aluno.

Entrada(E): A entrada terá na primeira linha uma string ‘A’, representando o nome do aluno.
Nas 6 (seis) linhas seguintes, serão dados os nomes dos Estados informados pelo aluno,
um nome de Estado por linha.

Saída (S): No final, o programa deve exibir a mensagem “NOME_ALUNO sua pontuação é
de X pontos.”. Sendo que NOME_ALUNO representa o nome do aluno e X representa o
número de Estados que o aluno acertou. Nomes dos Estados informados sempre estarão
com iniciais maiúsculas.

Exemplo:
E -->
José de Maria de Jesus
Rio Grande do Sul
Zaranhão
Paralá
Santa Catarina
Mato Fino
Rio Grande do Sul

S --> José de Maria de Jesus sua pontuação é de 2 pontos.
*/