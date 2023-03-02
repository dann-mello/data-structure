#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a = 5, b = 2;
    int soma = a + b;
    cout << "Soma: " << soma << endl;

    int sub = a - b;
    cout << "Subtracao: " << sub << endl;

    int mult = a * b;
    cout << "Multiplicacao: " << mult << endl;

    float pot = pow(a, b);
    cout << "Potencia: " << pot << endl;

    return 0;
}