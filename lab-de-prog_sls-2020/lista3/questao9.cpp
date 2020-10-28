/**
https://www.urionlinejudge.com.br/judge/pt/problems/view/1149
*/

#include <iostream>
using namespace std;
 
int main() {

  int a, n, soma = 0;

  cin >> a;

  do{
    cin >> n;
  } while(n <= 0);

  for(int i = 0; i < n; i ++){
    // soma = soma + (a + i)
    //ex:
    //i = 0 >> soma = 0 + (3 + 0)
    //i = 1 >> soma = 3 + (3 + 1)
    //soma = 7 
    soma += (a + i);
  }
  cout << soma << endl;
}