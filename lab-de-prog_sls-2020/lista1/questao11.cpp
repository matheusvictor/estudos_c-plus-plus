/**
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
Input

The input file contains an integer N.
Output

Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

Disponível:https://www.urionlinejudge.com.br/judge/en/problems/view/1019
*/

#include <iostream>
 
using namespace std;
 
int main() {
  
  int n;
  
  cin >> n;
  
  int horas = n / 3600;
  int resto_horas = n % 3600;

  int minutos = resto_horas / 60;
  int resto_minutos = resto_horas % 60;

  int segundos = resto_minutos % 60; 

  cout << horas << ':' << minutos << ':' << segundos << endl;

  return 0;
}