#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {

  int dimensaoGrade = 0;
  cin >> dimensaoGrade;

  char grade[dimensaoGrade][dimensaoGrade];
  char letra;

  //preenche tabela
  for(int i = 0; i < dimensaoGrade; i++){
    for(int j = 0; j < dimensaoGrade; j++){
      cin >> letra;
      grade[i][j] = letra;
    }
  }

  //lê palavra para ser buscada
  string palavra;
  cin >> palavra;
  int tamanhoPalavra = palavra.size();
  string palavraInvertida = "";

  //inverte a palavra informada pelo usuário
  for(int i = tamanhoPalavra-1; i >= 0; i--){
    palavraInvertida += palavra[i];
  }

  int linhaInicial, colunaInicial, colunaFinal;
  bool encontrou = false, invertido = false;

  //buscas horizontais
  for(int i = 0; i < dimensaoGrade; i++){
    if(encontrou == true){
      break;
    }
    for(int j = 0; j < dimensaoGrade; j++){
      int acertos = 0;
     //procura palavra apensar se couber na linha restante
      if(dimensaoGrade-j >= tamanhoPalavra){
        
        if(grade[i][j] == palavra[0]){
          invertido = false;
          for(int k = 0; k < tamanhoPalavra; k++){
            if(palavra[k] == grade[i][j+k]){
              acertos++;
              if(k == 0){
                linhaInicial = i;
                colunaInicial = j;                
              } else if(k == (tamanhoPalavra-1)){
                linhaInicial = i;
                colunaFinal = j+k;  
              }
            } else{
              break;
            }
          }
          if(acertos == tamanhoPalavra){
            encontrou = true;
            break;
          }
        }        
        else if(grade[i][j] == palavraInvertida[0]){
          invertido = true;
         for(int k = 0; k < tamanhoPalavra; k++){
            if(palavraInvertida[k] == grade[i][j+k]){
              acertos++;
              if(k == 0){
                linhaInicial = i;
                colunaInicial = j;                
              } else if(k == (tamanhoPalavra-1)){
                linhaInicial = i;
                colunaFinal = j+k;  
              }
            } else{
              break;
            }
          }
          if(acertos == tamanhoPalavra){
            encontrou = true;
            break;
          } 
        }
      }
      //interrompe a busca, caso a palavra buscada ultrapasse o tamanho da matriz
      else{
        break;
      }
    }  
  }

  if(encontrou == true){
    if(invertido == false){
      cout << linhaInicial << " " << colunaInicial;
      cout << " " << linhaInicial << " " << colunaFinal << endl;
    } else if(invertido == true){
      cout << linhaInicial << " " << colunaFinal;
      cout << " " << linhaInicial << " " << colunaInicial << endl;
    }
  }

  encontrou = false;
  invertido = false;

  //buscas verticais
  for(int j = 0; j < dimensaoGrade; j++){
    if(encontrou == true){
      break;
    }
    for(int i = 0; i < dimensaoGrade; i++){
      int acertos = 0;

     //procura palavra apensar se couber na linha restante
      if(dimensaoGrade - i >= tamanhoPalavra){
        if(grade[i][j] == palavra[0]){
          invertido = false;
          for(int k = 0; k < tamanhoPalavra; k++){
            if(palavra[k] == grade[i+k][j]){              
              acertos++;
              if(k == 0){
                linhaInicial = j;
                colunaInicial = i+k;                
              } else if(k == (tamanhoPalavra-1)){
                linhaInicial = j;
                colunaFinal = i+k;  
              }
            } else{
              break;
            }
          }
          if(acertos == tamanhoPalavra){
            encontrou = true;
            break;
          }
        }        
        else if(grade[i][j] == palavraInvertida[0]){
          invertido = true;
         for(int k = 0; k < tamanhoPalavra; k++){
            if(palavraInvertida[k] == grade[i+k][j]){
              acertos++;
              if(k == 0){
                linhaInicial = j;
                colunaInicial = i;                
              } else if(k == (tamanhoPalavra-1)){
                linhaInicial = j;
                colunaFinal = i+k;  
              }
            } else{
              break;
            }
          }
          if(acertos == tamanhoPalavra){
            encontrou = true;
            break;
          } 
        }
      }
      //interrompe a busca, caso a palavra buscada ultrapasse o tamanho da matriz
      else{
        break;
      }
    }  
  }

  if(encontrou == true){
    if(invertido == false){
      cout << colunaInicial << " " << linhaInicial;
      cout << " " << colunaFinal << " " << linhaInicial << endl;
    } else if(invertido == true){
      cout << colunaFinal << " " << linhaInicial;
      cout << " " << colunaInicial << " " << linhaInicial << endl;
    }
  }
}