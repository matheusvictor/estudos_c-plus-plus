/**
Disponível: https://www.urionlinejudge.com.br/judge/en/problems/view/1049
*/

#include <iostream>
//#include <iomanip>
using namespace std;
 
int main() {
  
  string categoria1, categoria2, categoria3;
  cin >> categoria1 >> categoria2 >> categoria3;

  if(categoria1 == "vertebrado"){
    if(categoria2 == "ave"){
      if(categoria3 == "carnivoro"){
        cout << "aguia" << endl;
      } else if(categoria3 == "onivoro"){
        cout << "pomba" << endl;
      }
    }
    else if(categoria2 == "mamifero"){
      if(categoria3 == "onivoro"){
        cout << "homem" << endl;
      } else if(categoria3 == "herbivoro"){
        cout << "vaca" << endl;
      }
    }
  }
  else if(categoria1 == "invertebrado"){
    if(categoria2 == "inseto"){
      if(categoria3 == "hematofago"){
        cout << "pulga" << endl;
      } else if(categoria3 == "herbivoro"){
        cout << "lagarta" << endl;
      }
    } else if(categoria2 == "anelideo"){
      if(categoria3 == "hematofago"){
        cout << "sanguessuga" << endl;
      } else if(categoria3 == "onivoro"){
        cout << "minhoca" << endl;
      }
    }
  }

}