#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Diga um numero inteiro nao negativo\n";
    cin >> num;

    int soma = 0;
    int cont = 1;
    // while(cont <= num){
    //     soma += cont;
    //     cont++;
    // }

    // do{
    //     soma += cont;
    //     cont++;
    // }while(cont <= num);

    for(int j = 1; j <= num; j++){
        soma += j;
    }

    cout << "A soma dos numeros de 0 ate " << num << "= " << soma << endl;

    return 0;
}