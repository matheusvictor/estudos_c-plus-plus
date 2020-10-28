/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1115
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    double x, y;

  do{
      
      cin >> x >> y;
      
      if(x == 0 || y == 0){
          break;
      }
      else if(x > 0 && y < 0){
      cout << "quarto" << endl;
      } else if(x > 0 && y > 0){
          cout << "primeiro" << endl;
      } else if(x < 0 && y < 0){
          cout << "terceiro" << endl;
      } else {
          cout << "segundo" << endl;
      }

  } while(x != 0 || y != 0);

  return 0; 
}