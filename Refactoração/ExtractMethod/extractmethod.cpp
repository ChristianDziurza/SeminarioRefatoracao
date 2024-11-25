#include <iostream>
using namespace std;

struct Pessoa{
    string nome;
    int idade;
    string cpf;
};

void CriarPessoa(Pessoa pessoas[]);
void MostrarPessoa(Pessoa pessoas[]);

int main(){
    Pessoa pessoas[3];
    CriarPessoa(pessoas);
    MostrarPessoa(pessoas);
    return 0;
}
void CriarPessoa(Pessoa pessoas[]){
    for(int i=0;i<3;i++){
        cin >> pessoas[i].nome;
        cin >> pessoas[i].idade;
        cin >> pessoas[i].cpf;
    }   
}
void MostrarPessoa(Pessoa pessoas[]){
    for(int i=0;i<3;i++){
        cout << pessoas[i].nome << endl;
        cout << pessoas[i].idade << endl;
        cout << pessoas[i].cpf << endl;
    }
}