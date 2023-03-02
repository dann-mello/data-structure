#include <iostream>
using namespace std;

class Propaganda{
    private:

    
    public:
    void inscrever(){
        cout << "Se increva no canal" << endl;
    }

    void curta(){
        cout << "Curta esse vídeo e ative o sininho" << endl;
    }
};

class Carro{
    private:
    int ano;
    float valor, km;

    public:
    void setAno(int a){
        this->ano = a;
    }

    int getAno(){
        return this->ano;
    }
};

int main(){
    Carro palio;
    palio.setAno(1995);
    cout << palio.getAno();


    return 0;
}