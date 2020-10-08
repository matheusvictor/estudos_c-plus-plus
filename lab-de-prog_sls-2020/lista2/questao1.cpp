/**
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.

COD       DESCRIÇÃO       PREÇO
1 - Cachorro Quente - R$ 4.00
2 - X-Salada - R$ 4.50
3 - X-Bacon - R$ 5.00
4 - Torrada simples - R$ 2.00
5 - Refrigerante - R$ 1.50

Input

The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.
Output

The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.

Disponível: https://www.urionlinejudge.com.br/judge/en/problems/view/1038
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  int x, y;
  double total;

  cin >> x >> y;

  if(x == 1){
    total = 4 * y;
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
  }
  else if(x == 2){
    total = 4.50 * y;
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
  }
  else if(x == 3){
    total = 5 * y;
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
  } 
  else if(x == 4){
    total = 2 * y;
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
  }
  else if(x == 5){
    total = 1.50 * y;
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
  }
}
