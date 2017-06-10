#include <iostream>
#include <string>
using namespace std;

int main() { 
    float base;
    float altura;
    float area;
    float perimetro;
    cout << " Ingrese una base " << endl; 
    cin >> base;
    cout << " Ingresa una altura " << endl;
    cin >> altura;
    area = base * altura;
    perimetro = base * 2 + altura * 2;
    cout << " El area y el perimetro de un rectangulo con estas medidas" " equivalen a: " "area:" << base*altura << " y " "perimetro: " << base*2 + altura*2 << endl;
}