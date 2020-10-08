/**
Disponível: https://www.urionlinejudge.com.br/judge/en/problems/view/1042
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  
  int a, b, c;

  cin >> a >> b >> c;

  if(a < b && a < c && b < c){
    cout << a << endl << b << endl << c << endl;
  }
  else if(a < b && a < c && c < b){
    cout << a << endl << c << endl << b << endl;
  }
  else if(b < a && b < c && a < c){
    cout << b << endl << a << endl << c << endl;
  } 
  else if(b < a && b < c && c < a){
    cout << b << endl << c << endl << a << endl;
  }
  else if(c < a && c < b && a < b){
    cout << c << endl << a << endl << b << endl;
  } else{
    cout << c << endl << b << endl << a << endl;
  }
  
  cout << endl << a << endl << b << endl << c << endl;
}