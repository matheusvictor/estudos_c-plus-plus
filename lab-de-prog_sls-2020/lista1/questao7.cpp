/**
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

MaiorAB = (a + b + abs(a+b))/2

Input

The input file contains 3 integer values.
Output

Print the greatest of these three values followed by a space and the message “eh o maior”.

Disponível: https://www.urionlinejudge.com.br/judge/en/problems/view/1013
*/

#include <iostream>
#include <stdlib.h>     /* abs */
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    int maiorAB = (a + b + abs(a-b))/2;

    if(c > maiorAB){
      cout << c << " eh o maior" << endl;
    } else{
      cout << maiorAB << " eh o maior" << endl;
    }
}