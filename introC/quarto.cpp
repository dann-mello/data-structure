#include <iostream>

using namespace std;

void inscrever (){
    cout << "Se inscreva no canal !!\n";
}

int somar (int x, int y){
    int soma;
    soma = x + y;
    return soma;
}

int main (){
    inscrever();
    int a = 5, b = 4;
    int s;
    s =  somar(a, b);
    cout << s << endl;

    return 0;
}