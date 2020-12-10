#include <iostream>
#include <string>
//#include <locale.h>
using namespace std;

int main(){ 

int quantidadeAutores;
cin >> quantidadeAutores;
cin.ignore();

string nome[quantidadeAutores];

//char aux ='c';
//aux = toupper(aux);

for(int i = 0; i < quantidadeAutores; i++){  
  getline(cin, nome[i]);
}
cout << endl;
for(int i = 0; i < quantidadeAutores; i++){
  cout << nome[i] << endl;
}

for(int i = 0; i < quantidadeAutores; i++){
  int tamanho = nome[i].size();
  char palavraCod[tamanho];
}

return 0;

}
/**
Visconde de Sabugosa é um conhecido personagem do clássico Sítio do pica-pau
amarelo. Por ser um assíduo leitor, muitas vezes ele precisa se lembrar dos nomes de
muitos autores das clássicas obras literárias. Desta forma, ajude o Visconde criando
um programa que abrevie os nomes destes autores, fazendo com que ele se lembre mais
facilmente.

Entrada(E): A primeira linha consiste em um inteiro ‘N’ (1 < N <= 100), representando o
número de nomes de autores que o programa irá receber. Cada uma das próximas ‘N’
linhas contém o nome completo (caracteres minúsculos) dos autores. Os
nomes não terão preposições e nem caracteres especiais (maria das dores =
maria dores; joão de jesus = joao jesus).

Saída(S): Para cada nome de autor recebido, o programa deve abreviar todos os nomes, com
exceção do último. Cada nome abreviado deverá ser impresso com a primeira letra em
maiúsculo, seguido de ponto e um espaço, e por fim, após as abreviações, imprima o
último sobrenome sem abreviação.

Exemplo: 
E -- >
3
maria andrade ferreira
felipe barros silva matos
joao barbosa

S -->
M. A. Ferreira
F. B. S. Matos
J. Barbosa
*/