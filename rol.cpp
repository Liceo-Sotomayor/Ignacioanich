#include <iostream>
#include <string>
using namespace std;

int main() { 
    int a, b;
    bool esMayor;
    cout << " Ingrese un numero " << endl;
    cin >> a;
    cout << " Ingrese otro numero " << endl;
    cin >> b;
    esMayor= a>b;
    if (esMayor) {
      cout << " El numero " << a << " es mayor que " << b << endl;
    }     
   }