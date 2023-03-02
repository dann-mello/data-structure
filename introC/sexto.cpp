#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2;
    cout << "Informe a nota 1:\n";
    cin >> nota1;
    cout << "Informe a nota 2:\n";
    cin >> nota2;

    float media;
    media = (nota1 + nota2) / 2;
    cout << "Media: " << media << endl;

    if (media < 2.5){
        cout << "Nota final: D\n";
    }
    else if (media < 5){
        cout << "Nota final: C\n";
    }else if(media < 7.5){
        cout << "Nota final: B\n";
    }else{
        cout << "Nota final: A\n";
    }

    // Operadores Lógico
    float freq;
    cout << "Qual a frequencia do Aluno\n";
    cin >> freq;

    // if(media >= 5 && freq >= 75){
    //     cout << "Aluno(a) Aprovado(a)\n";
    // }else{
    //     cout << "Aluno(a) Reprovado(a)\n";
    // }

    // if(media >= 5 || freq >= 75){
    //     cout << "Aluno(a) Aprovado(a)\n";
    // }else{
    //     cout << "Aluno(a) Reprovado(a)\n";
    // }

    //Operador ternário
    (media >= 5) ? cout << "Aprovado" : cout << "Reprovado";

    return 0;
}