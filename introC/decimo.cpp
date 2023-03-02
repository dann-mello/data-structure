#include <iostream>
using namespace std;

int main(){
    int matriz[2][3];
    matriz[0][0] = 11;//linha 1 coluna 1 
    matriz[0][1] = 12;//linha 1 coluna 2 
    matriz[0][2] = 13;//linha 1 coluna 3 
    
    matriz[1][0] = 21;//linha 2 coluna 1 
    matriz[1][1] = 21;//linha 2 coluna 2 
    matriz[1][2] = 23;//linha 2 coluna 2 

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}